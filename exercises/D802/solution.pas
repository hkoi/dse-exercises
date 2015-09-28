var
    a: array[1..2000] of longint;
    n, d, i, j, t, ans: longint;
begin
    ans := 0;
    read(n, d);
    for i := 1 to n do
        read(a[i]);
    for i := 1 to n do
        for j := 1 to n - i do
            if ((d = 0) and (a[j] > a[j + 1]) or
                (d = 1) and (a[j] < a[j + 1])) then
            begin
                t := a[j];
                a[j] := a[j + 1];
                a[j + 1] := t;
                inc(ans)
            end;
    writeln(ans);
    for i := 1 to n - 1 do
        write(a[i], ' ');
    writeln(a[n]);
end.
