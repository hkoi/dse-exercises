var
    s: string;
    min, max, x: longint;
    fin: text;
begin
    assign(fin, 'weather.txt');
    reset(fin);
    max := 0;
    min := 100;
    while (not eof(fin)) do
    begin
        readln(fin, s);
        delete(s, 1, 32);
        readstr(s, x);
        if (x > max) then max := x;
        if (x < min) then min := x
    end;
    close(fin);
    writeln(min, ' ', max)
end.
