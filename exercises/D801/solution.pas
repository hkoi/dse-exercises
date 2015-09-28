var
    a: array[1..100000] of longint;
    n, q, i, x, l, r, mid: longint;
    found: boolean;
begin
    read(n, q);
    for i := 1 to n do
        read(a[i]);
    for i := 1 to q do
    begin
        l := 1;
        r := n;
        found := false;
        read(x);
        while (l <= r) do
        begin
            mid := (l + r) div 2;
            if (a[mid] = x) then
            begin
                found := true;
                break
            end
            else if (a[mid] < x) then
                l := mid + 1
            else
                r := mid - 1
        end;
        if (found) then
            writeln('Yes')
        else
            writeln('No')
    end
end.
