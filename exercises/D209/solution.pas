var
    i, n, t1, t2: longint;
    ok: boolean;
begin
    ok := true;
    readln(n);
    read(t1);
    if (t1 <= 100) or (t1 >= 50000) then
        ok := false;
    for i := 2 to n do
    begin
        read(t2);
        if (t2 <= 100) or (t2 >= 50000) or (t1 >= t2) then 
            ok := false;
        t1 := t2;
    end;
    if ok then 
        writeln('Valid') 
    else 
        writeln('Invalid')
end.
