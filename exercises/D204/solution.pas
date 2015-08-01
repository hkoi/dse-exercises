var
	n, m, i, j: longint;
begin
	read(n);
	m := n div 2;
	for i := 0 to m do
	begin
		for j := 0 to m + i do
			if ((j = m - i) or (j = m + i)) then
				write('#')
			else
				write(' ');
		writeln
	end;
	for i := m - 1 downto 0 do
	begin
		for j := 0 to m + i do
			if ((j = m - i) or (j = m + i)) then
				write('#')
			else
				write(' ');
		writeln
	end
end.
