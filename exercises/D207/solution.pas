var
    n, m, a, b, c: longint;
begin
    read(n, m);
    a := n;
    b := m;
    while (b <> 0) do
    begin
        c := a mod b;
        a := b;
        b := c
    end;
    writeln(a);
    writeln(n * m div a)
end.
