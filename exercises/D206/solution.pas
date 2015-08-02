var
    n: longint;
begin
    read(n);
    while (n <> 1) do
    begin
        writeln(n);
        if (n mod 2 = 1) then
            n := 3 * n + 1
        else
            n := n div 2
    end;
    writeln(1)
end.
