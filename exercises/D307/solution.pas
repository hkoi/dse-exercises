var
    s: array[1..3] of string;
    i, j: longint;
    c: char;
begin
    readln(s[1]);
    readln(s[2]);
    readln(s[3]);
    for i := 1 to 2 do
    begin
        if (i = 1) then
            c := 'O'
        else
            c := 'X';
        for j := 1 to 3 do
        begin
            if ((s[j][1] = c) and (s[j][2] = c) and (s[j][3] = c)) then
            begin
                writeln(c, ' wins');
                halt
            end;
            if ((s[1][j] = c) and (s[2][j] = c) and (s[3][j] = c)) then
            begin
                writeln(c, ' wins');
                halt
            end
        end;
        if (((s[1][1] = c) and (s[2][2] = c) and (s[3][3] = c)) or
            ((s[1][3] = c) and (s[2][2] = c) and (s[3][1] = c))) then
            begin
                writeln(c, ' wins');
                halt
            end            
    end;
    for i := 1 to 3 do
        for j := 1 to 3 do
            if (s[i][j] = '.') then
            begin
                writeln('Not ended');
                halt
            end;
    writeln('Draw')
end.
        