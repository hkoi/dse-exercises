var
    a: array[1..6] of longint;
    i, j: longint;
    fout: text;
begin
    read(a[1], a[2], a[3], a[4], a[5], a[6]);
    assign(fout, 'chart.txt');
    rewrite(fout);
    writeln(fout, '+-------------------------+');
    for i := 10 downto 1 do
    begin
        write(fout, '| ');
        for j := 1 to 6 do
            if (a[j] >= i) then
                write(fout, '### ')
            else
                write(fout, '    ');
        writeln(fout, '|')
    end;
    writeln(fout, '+-------------------------+');
    close(fout)
end.
