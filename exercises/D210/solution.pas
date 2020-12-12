var
	i, n, ans: longint;
	x, y: array [0..1005] of longint;
begin
	ans := 0;
	read(n);
	for i := 1 to n do read(x[i], y[i]);
	x[n + 1] := x[1];
	y[n + 1] := y[1];
	for i := 1 to n do ans := ans + x[i] * y[i + 1] - x[i + 1] * y[i];
	writeln(ans / 2 : 0 : 3);
end.
