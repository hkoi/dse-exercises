var
	a: array[1..10] of real;
	i, n: integer;
	ok: boolean;
begin
	readln(n);
	for i := 1 to n do 
		read(a[i]);
	ok := true;
	for i := 1 to n do
		if (a[i] <> trunc(a[i]) 
		or a[i] <= 100 or a[i] >= 50000) then 
			ok := false;
	for i := 2 to n do
		if (a[i-1] >= a[i]) then 
			ok := false;
	if ok then 
		writeln("Valid") 
	else 
		writeln("Invalid")
end.