var
    n, units: longint;
begin
    read(n);
    units := n mod 10;
    if (n >= 10) then
        if (n div 10 mod 10 = 1) then
        begin
            writeln(n, 'th');
            halt
        end;
    if (units = 1) then
        writeln(n, 'st')
    else if (units = 2) then
        writeln(n, 'nd')
    else if (units = 3) then
        writeln(n, 'rd')
    else
        writeln(n, 'th')
end.
