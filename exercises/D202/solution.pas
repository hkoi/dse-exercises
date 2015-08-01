var
	n, m, i: longint;
begin
	read(n);
	m := round(sqrt(n));
	for i := 1 to m do
		if (n mod i = 0) then
			writeln(i);
	if (m * m = n) then
		dec(m);
	for i := m downto 1 do
		if (n mod i = 0) then
			writeln(n div i);
end.
