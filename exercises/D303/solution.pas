var
    s, t: string;
    len, i: longint;
    c: char;
begin
    readln(s);
    len := length(s);
    t := s;
    for i := 1 to len div 2 do
    begin
        c := t[i];
        t[i] := t[len - i + 1];
        t[len - i + 1] := c
    end;
    writeln(t);
    if (s = t) then
        writeln('Yes')
    else
        writeln('No')
end.
