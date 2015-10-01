var
    a: array[1..100] of longint;
    n, i, j, x: longint;
begin
    read(n);
    for i := 1 to n do
    begin
        read(x);
        j := i - 1;
        while (j >= 1) do
        begin
            if (x > a[j]) then
                break;
            a[j + 1] := a[j];
            dec(j)
        end;
        a[j + 1] := x;
        for j := 1 to i - 1 do
            write(a[j], ' ');
        writeln(a[i])
    end
end.
