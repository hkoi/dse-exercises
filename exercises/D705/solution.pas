var
    a, b: array[1..10001] of longint;
    n, h, i, p, y: longint;
begin
    read(n, h);
    for i := 1 to n do
        read(a[i]);
    for i := 1 to n do
        read(b[i]);
    read(y);
    if (y = 1) then
    begin
        writeln(b[h]);
        writeln('-1');
        halt
    end;
    p := h;
    for i := 1 to y - 2 do
        p := b[p];
    writeln(h);
    writeln(p, ' ', a[p], ' ', b[b[p]])
end.
