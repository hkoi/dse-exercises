var
    balance, x, n, i: longint;
    fin: text;
begin
    assign(fin, 'account.txt');
    reset(fin);
    read(fin, n);
    balance := 0;
    for i := 1 to n do
    begin
        read(fin, x);
        balance := balance + x
    end;
    close(fin);
    writeln(balance)
end.
