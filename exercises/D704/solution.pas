var
    a, b: array[1..10001] of longint;
    n, h, i, p, x, y: longint;
begin
    read(n, h);
    for i := 1 to n do
        read(a[i]);
    for i := 1 to n do
        read(b[i]);
    read(x, y);
    if (y = 0) then
    begin
        writeln(n + 1);
        writeln(x, ' ', h);
        writeln('-1');
        halt
    end;
    p := h;
    for i := 1 to y - 1 do
        p := b[p];
    writeln(h);
    writeln(x, ' ', b[p]);
    writeln(p, ' ', a[p], ' ', n + 1)
end.
