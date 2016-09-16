var
    a: array[1..100] of longint;
    n, i, j, p, t: longint;
begin
    read(n);
    for i := 1 to n do
        read(a[i]);
    p := a[n];
    i := 1;
    for j := 1 to n - 1 do
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
    a[i] := a[n];
    a[n] := t;
    for i := 1 to n - 1 do
        write(a[i], ' ');
    writeln(a[n])
end.
