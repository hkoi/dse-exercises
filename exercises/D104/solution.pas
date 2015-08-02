var
    a, b, c, d: longint;
    x, y: double;
begin
    read(a, b, c);
    d := b * b - 4 * a * c;
    if (d < 0) then
        writeln('None')
    else if (d = 0) then
        writeln(-b / (2 * a) :0:3)
    else
    begin
        x := (-b - sqrt(d)) / (2 * a);
        y := (-b + sqrt(d)) / (2 * a);
        if (x < y) then
            writeln(x:0:3, ' ', y:0:3)
        else
            writeln(y:0:3, ' ', x:0:3)
    end
end.
