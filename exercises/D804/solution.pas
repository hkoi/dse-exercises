var
    a, b: array[1..100000] of longint;
    n, m, i, j, k: longint;
begin
    read(n, m);
    for i := 1 to n do
        read(a[i]);
    for i := 1 to m do
        read(b[i]);
    j := 1;
    k := 1;
    for i := 1 to n + m do
    begin
        if (j = n + 1) then
        begin
            write(b[k]);
            inc(k)
        end
        else if (k = m + 1) then
        begin
            write(a[j]);
            inc(j)
        end
        else if (a[j] < b[k]) then
        begin
            write(a[j]);
            inc(j)
        end
        else
        begin
            write(b[k]);
            inc(k)
        end;
        if (i = n + m) then
            writeln
        else
            write(' ')
    end
end.
