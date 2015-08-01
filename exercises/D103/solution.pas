var
	a, b, c, r: double;
begin
	read(a, b, c);
	r := pi * c / 180.0;
	writeln(0.5 * a * b * sin(r):0:3)
end.
