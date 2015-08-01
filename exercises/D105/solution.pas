var
	y1, m1, d1: longint;
	y2, m2, d2: longint;
	a, b: longint;
begin
	read(y1, m1, d1);
	read(y2, m2, d2);
	a := 10000 * y1 + 100 * m1 + d1;
	b := 10000 * y2 + 100 * m2 + d2;
	if (a < b) then
		writeln('Before')
	else if (a = b) then
		writeln('Same')
	else
		writeln('After')
end.
