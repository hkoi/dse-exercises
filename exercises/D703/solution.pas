var
    a, b: array[1..1001] of longint;
    n, h, m, i, p: longint;
    s: string;
begin
    read(n, h);
    for i := 1 to n do
        read(a[i]);
    for i := 1 to n do
        read(b[i]);
    readln(m);
    p := h;
    for i := 1 to m do
    begin
        readln(s);
        if (s = 'QUERY') then
            if (p = 0) then
                writeln('End')
            else
                writeln(a[p])
        else if (s = 'NEXT') then
            if (p = 0) then
                writeln('Cannot next')
            else
                p := b[p]
        else if (s = 'HEAD') then
            p := h
    end
end.
