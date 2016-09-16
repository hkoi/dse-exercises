var
    a: array[1..100] of longint;
    n, i, ans: longint;
procedure sort(l, r: longint);
var
    i, j, p, t: longint;
begin
    ans := ans + (r - l + 1);
    if (l >= r) then exit;
    p := a[r];
    i := l;
    for j := l to r - 1 do
    begin
        if (a[j] <= p) then
        begin
            t := a[j];
            a[j] := a[i];
            a[i] := t;
            inc(i)
        end
    end;
    t := a[i];
    a[i] := a[r];
    a[r] := t;
    sort(l, i - 1);
    sort(i + 1, r)
end;
begin
    read(n);
    for i := 1 to n do
        read(a[i]);
    ans := 0;
    sort(1, n);
    for i := 1 to n - 1 do
        write(a[i], ' ');
    writeln(a[n]);
    writeln(ans)
end.
