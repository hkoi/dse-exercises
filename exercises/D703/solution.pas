var
    a, b: array[1..10001] of longint;
    n, h, m, i, p: longint;
begin
    read(n, h);
    for i := 1 to n do
        read(a[i]);
    for i := 1 to n do
        read(b[i]);
    readln(m);
    p := h;
    while (p <> 0) do
    begin
        writeln(a[p]);
        p := b[p]
    end;
    writeln('End')
end.
