var
	a: array[1..20] of longint;
	i, n: integer;
begin
	readln(n);
	for i := 1 to n do 
		read(a[i]);
	write(a[1], ' ');
	for i := 2 to n do
		if (a[i] <> a[i-1]) then 
			write(a[i], ' ')
end.