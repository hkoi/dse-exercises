var
    a, b: array[1..20] of longint;
    i, j, n, c: longint;
    found: boolean;
begin
    readln(n);
    for i := 1 to n do 
        read(a[i]);
    c := 0;
    for i := 1 to n do
    begin
        found := false;
        for j := 1 to i - 1 do
            if a[j] = a[i] then
                found := true;
        if (not found) then
        begin
            c := c + 1;
            b[c] := a[i];
        end;
    end;
    writeln(c);
    for i := 1 to c - 1 do
        write(b[i], ' ');
    writeln(b[c])
end.
