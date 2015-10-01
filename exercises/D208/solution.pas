var
    n, x, i, a, b: longint;
begin
    read(n);
    a := -2147483648;
    b := -2147483648;
    for i := 1 to n do
    begin
        read(x);
        if (x >= a) then
        begin
            b := a;
            a := x
        end
        else if (x > b) then
            b := x
    end;
    writeln(a);
    writeln(b)
end.
