var
    i, n, x, y, x1, x2, y1, y2, sum: longint;
begin
    sum := 0;
    read(n, x, y);
    x1 := x;
    y1 := y;
    for i := 2 to n do
    begin
        read(x2, y2);
        sum := sum + x1 * y2 - x2 * y1;
        x1 := x2;
        y1 := y2;
    end;
    sum := sum + x2 * y - x * y2;
    writeln(sum / 2 : 0 : 1);
end.
