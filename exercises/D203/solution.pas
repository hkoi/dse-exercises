var
	n, i, j, k: longint;
begin
	read(n);
	for i := 0 to 9 do
		for j := 1 to 10 do
		begin
			k := i * 10 + j;
			if ((i = n) or (j = n) or (k mod n = 0)) then
				write('Clap')
			else
				write(k);
			if (j < 10) then
				write(' ')
			else
				writeln
		end
end.
