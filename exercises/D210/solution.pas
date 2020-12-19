var
	i, n, x, y, x1, x2, y1, y2, ans: longint;
begin
	ans := 0;
	read(n, x, y);
	x1 := x;
	y1 := y;
	for i := 2 to n do
	begin
		read(x2, y2);
		ans := ans + x1 * y2 - x2 * y1;
		x1 := x2;
		y1 := y2;
	end;
	ans := ans + x2 * y - x * y2;
	writeln(ans / 2 : 0 : 3);
end.
