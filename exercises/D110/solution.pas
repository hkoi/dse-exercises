var
    c1, r1, c2, r2: char;
    c, r: longint;
begin
    readln(c1, r1);
    readln(c2, r2);
    c := abs(ord(c1) - ord(c2));
    r := abs(ord(r1) - ord(r2));
    if (c > r) then
      writeln(c)
    else
      writeln(r)
end.
