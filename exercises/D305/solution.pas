var
    s: string;
    len, sum: longint;
begin
    readln(s);
    len := length(s);
    if (len = 8) then
        sum := 9 * (ord(s[1]) - 55) + 8 * (ord(s[2]) - 55)
    else
        sum := 9 * 36 + 8 * (ord(s[1]) - 55);
    sum := sum + 7 * (ord(s[len - 5]) - 48);
    sum := sum + 6 * (ord(s[len - 4]) - 48);
    sum := sum + 5 * (ord(s[len - 3]) - 48);
    sum := sum + 4 * (ord(s[len - 2]) - 48);
    sum := sum + 3 * (ord(s[len - 1]) - 48);
    sum := sum + 2 * (ord(s[len]) - 48);
    write(s);
    if (sum mod 11 = 0) then
        writeln('(0)')
    else if (sum mod 11 = 1) then
        writeln('(A)')
    else
        writeln('(', 11 - sum mod 11, ')')
end.
