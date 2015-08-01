var
    a, b, c, ans: longint;
    x, y, dummy: char;
begin
    read(a, dummy, x, b, dummy, y, c);
    if ((x = '+') and (y = '+')) then ans := a + b + c;
    if ((x = '+') and (y = '-')) then ans := a + b - c;
    if ((x = '+') and (y = '*')) then ans := a + b * c;
    if ((x = '-') and (y = '+')) then ans := a - b + c;
    if ((x = '-') and (y = '-')) then ans := a - b - c;
    if ((x = '-') and (y = '*')) then ans := a - b * c;
    if ((x = '*') and (y = '+')) then ans := a * b + c;
    if ((x = '*') and (y = '-')) then ans := a * b - c;
    if ((x = '*') and (y = '*')) then ans := a * b * c;
    writeln(ans)
end.
