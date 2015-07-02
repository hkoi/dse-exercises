var
    dummy: char;
    fare: double;
    tencents, tencentshalved: integer;
begin
    read(dummy, fare);
    tencents := round(fare * 10);
    if (tencents mod 2 = 0) then
        tencentshalved := tencents div 2
    else
        tencentshalved := tencents div 2 + 1;
    writeln('$', tencentshalved / 10 :0:1);
end.
