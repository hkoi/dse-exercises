var
    n: longint;
procedure recur(l, r: longint);
var 
    mid: longint;
begin
    if (l = r) then
        exit;
    mid := (l + r) div 2;
    recur(l, mid);
    recur(mid + 1, r);
    writeln(l, ' ', mid, ' ', mid + 1, ' ', r)
end;
begin
    read(n);
    recur(1, n)
end.
