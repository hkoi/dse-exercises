var
    a: array[2..1000000] of boolean;
    n, i, j: longint;
begin
    read(n);
    for i := 2 to n do
        a[i] := true;
    for i := 2 to n do
        if (a[i]) then
        begin
            writeln(i);
            if (i > 1000) then
                continue;
            j := i * i;
            while j <= n do
            begin
                a[j] := false;
                j := j + i
            end
        end
end.
