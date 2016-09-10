var
  a, b: array[1..100] of longint;
  n, m, i, j, k, t, l1, r1, l2, r2: longint;
begin
    read(n, m);
    for i := 1 to n do
        read(a[i]);
    for i := 1 to m do
    begin
        read(l1, r1, l2, r2);
        j := l1;
        k := l2;
        t := l1;
        while (t <= r2) do
        begin
            if (k > r2) then
            begin
                b[t] := a[j];
                inc(j)
            end
            else if ((j <= r1) and (a[j] < a[k])) then
            begin
                b[t] := a[j];
                inc(j)
            end
            else
            begin
                b[t] := a[k];
                inc(k)
            end;
            inc(t)
        end;
        for j := l1 to r2 do
        begin
            a[j] := b[j];
            if (j < r2) then
                write(a[j], ' ')
            else
                writeln(a[j])
        end
    end
end.