var
    s: array[1..21] of string;
    h, w, i, j, row, col: longint;
begin
    readln(h, w);
    for i := 1 to h do
    begin
        readln(s[i]);
        s[i] := s[i] + '?';
    end;
    s[h + 1] := copy('????????????????????', 1, w - 1) + 'S';
    for i := h downto 1 do
        for j := w downto 1 do
        begin
            if (s[i][j] = '#') then
                continue;
            if ((s[i + 1][j] = 'S') or (s[i + 1][j] = 'E')) then
                s[i][j] := 'S'
            else if ((s[i][j + 1] = 'S') or (s[i][j + 1] = 'E')) then
                s[i][j] := 'E'
        end;
    row := 1;
    col := 1;
    for i := 1 to h + w - 2 do
    begin
        write(s[row][col]);
        if (s[row][col] = 'S') then
            inc(row)
        else
            inc(col)
    end;
    writeln
end.
