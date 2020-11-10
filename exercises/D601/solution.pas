unit submission;

interface
procedure answer(s: string); cdecl; external;

var
	ans: string;

implementation
procedure format(x: longint); cdecl; export;
var
	i, num, len: longint;
	t: char;
begin
	num := 0;
	while (x > 0) do
	begin
		ans := ans + chr(x mod 10 + 48);
		x := x div 10;
		num := (num + 1) mod 3;
		if ((num = 0) and (x > 0)) then ans := ans + ',';
	end;
	ans := ans + '$';
	len := length(ans);
	for i := 1 to len div 2 do
	begin
		t := ans[i];
		ans[i] := ans[len - i + 1];
		ans[len - i + 1] := t;
	end;
	answer(ans);
end;
end.
