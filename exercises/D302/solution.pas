var
    n, len, i: longint;
    s: string;
begin
    readln(s);
    len := length(s);
    count := 0;
    for i := 1 to len do
        if (s[i] = ' ') then
            inc(count);
    writeln(len);
    writeln(count + 1)
end.
