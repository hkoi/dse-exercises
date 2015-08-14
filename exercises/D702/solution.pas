var
    st: array[1..1000] of longint;
    n, i, dummy, size: longint;
    s: string;
begin
    size := 0;
    readln(n);
    for i := 1 to n do
    begin
        readln(s);
        if (copy(s, 1, 4) = 'PUSH') then
        begin
            inc(size);
            val(copy(s, 6, 10), st[size], dummy)
        end
        else if (s = 'TOP') then
        begin
            if (size = 0) then
                writeln('Empty')
            else
                writeln(st[size])
        end
        else if (s = 'POP') then
        begin
            if (size = 0) then
                writeln('Cannot pop')
            else
                dec(size)
        end
        else
            writeln(size)
    end
end.
