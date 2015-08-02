var
    s, t: string;
    len, i, count: longint;
    c: char;
begin
    readln(s);
    len := length(s);
    t := copy('____________________', 1, len);
    count := 0;
    while (count < len) do
    begin
        readln(c);
        for i := 1 to len do
            if (s[i] = c) then
            begin
                t[i] := c;
                inc(count)
            end;
        writeln(t)
    end
end.
