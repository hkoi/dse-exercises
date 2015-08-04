var
    barcode: array[1..100] of int64;
    price: array[1..100] of double;
    n, m, i, j: longint;
    k: int64;
    sum: double;
begin
    read(n);
    for i := 1 to n do
        read(barcode[i], price[i]);
    read(m);
    sum := 0.0;
    for i := 1 to m do
    begin
        read(k);
        for j := 1 to n do
            if (barcode[j] = k) then
                sum := sum + price[j]
    end;
    writeln(sum:0:1)
end.
