var
    a, b: longint;
begin
    readln(a);
    b := a div 10000000;
    if (b = 2) then
        writeln('Fixed')
    else if (b = 3) then
        writeln('Fixed')
    else
        writeln('Mobile');
end.
