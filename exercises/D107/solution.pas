var
    n, a, b: int64;
    square, triangular: boolean;
begin
    read(n);
    a := round(sqrt(n));
    b := trunc(sqrt(n * 2));
    square := a * a = n;
    triangular := b * (b + 1) div 2 = n;
    if (square and triangular) then
        writeln('Both')
    else if (square) then
        writeln('Square')
    else if (triangular) then
        writeln('Triangular')
    else
        writeln('Neither');
end.
