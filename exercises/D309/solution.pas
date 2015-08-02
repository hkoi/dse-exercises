var
    s, t: string;
    len1, len2, i, a: longint;
begin
    readln(s);
    readln(t);
    len1 := length(s);
    len2 := length(t);
    for i := 1 to len1 do
        if (s[i] >= 'a') then
            s[i] := chr(ord(s[i]) - 32);
    for i := 1 to len2 do
        if (t[i] >= 'a') then
            t[i] := chr(ord(t[i]) - 32);
    if (s < t) then
        writeln('Smaller')
    else if (s = t) then
        writeln('Equal')
    else
        writeln('Greater')
end.
