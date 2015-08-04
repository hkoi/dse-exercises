var
    fare: array[1..100, 1..100] of double;
    n, m, i, j, x, y, t: longint;
    c, dummy: char;
begin
    read(n);
    for i := 1 to n do
        for j := 1 to n do
            read(fare[i, j]);
    read(m);
    for i := 1 to m do
    begin
        read(x, y, dummy, c);
        if ((c = 'A') <> (x < y)) then
        begin
            t := x;
            x := y;
            y := t
        end;
        writeln(fare[x, y]:0:1)
    end
end.
