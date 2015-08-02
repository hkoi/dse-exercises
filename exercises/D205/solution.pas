var
    n, m, i: longint;
    first: boolean;
begin
    read(n);
    m := trunc(sqrt(n));
    first := true;
    write(n, '=');
    for i := 2 to m do
        while (n mod i = 0) do
        begin
            if (not first) then
                write('*');
            write(i);
            n := n div i;
            first := false;
        end;
    if (n > 1) then
    begin
        if (not first) then
            write('*');
        write(n)
    end;
    writeln
end.
