var
    s, t: string;
    len1, len2, a, b, i: longint;
begin
    readln(s);
    readln(t);
    len1 := length(s);
    len2 := length(t);
    a := 0;
    b := 0;
    for i := 1 to len1 - len2 + 1 do
        if (copy(s, i, len2) = t) then
            inc(a);
    i := 1;
    while (i <= len1 - len2 + 1) do
        if (copy(s, i, len2) = t) then
        begin
            inc(b);
            i := i + len2
        end
        else
        begin
            inc(i)
        end;
    writeln(a);
    writeln(b)
end.
