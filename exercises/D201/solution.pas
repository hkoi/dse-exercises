var
	n, a, b, c, i: longint;
begin
	a := 0;
	b := 1;
	read(n);
	for i := 1 to n do
	begin
		c := a + b;
		a := b;
		b := c
	end;
	writeln(a)
end.
