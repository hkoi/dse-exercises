var
    s: string;
    len, at, i: longint;
begin
    readln(s);
    len := length(s);
    at := pos('@', s);
    if (at = 0) then
    begin
        writeln('Invalid');
        halt
    end;
    if (pos('.', copy(s, at, len)) = 0) then
    begin
        writeln('Invalid');
        halt
    end;
    for i := 1 to len - 1 do
        if ((s[i] = '.') and (s[i + 1] = '.')) then
        begin
            writeln('Invalid');
            halt
        end;
    if ((s[1] = '.') or (s[at - 1] = '.') or (s[at + 1] = '.') or (s[len] = '.')) then
    begin
        writeln('Invalid');
        halt
    end;
    for i := 1 to at - 1 do
        if (not((s[i] in ['0'..'9']) or (s[i] in ['A'..'Z']) or (s[i] in ['a'..'z']) or (s[i] = '.') or (s[i] = '+'))) then
            begin
                writeln('Invalid');
                halt
            end;
    for i := at + 1 to len do
        if (not((s[i] in ['0'..'9']) or (s[i] in ['A'..'Z']) or (s[i] in ['a'..'z']) or (s[i] = '.') or (s[i] = '-'))) then
            begin
                writeln('Invalid');
                halt
            end;
    for i := at + 1 to len - 1 do
        if (((s[i] = '.') and (s[i + 1] = '-')) or ((s[i] = '-') and (s[i + 1] = '.'))) then
            begin
                writeln('Invalid');
                halt
            end;
    writeln('Valid')
end.
