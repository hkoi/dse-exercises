var
    q: array[1..10001] of longint;
    n, i, dummy, qs, qe: longint;
    s: string;
begin
    qs := 1;
    qe := 1;
    readln(n);
    for i := 1 to n do
    begin
        readln(s);
        if (copy(s, 1, 4) = 'PUSH') then
        begin
            val(copy(s, 6, 10), q[qe], dummy);
            inc(qe);
            if (qe = 10001) then
                qe := 0
        end
        else if (s = 'FRONT') then
        begin
            if (qs = qe) then
                writeln('Empty')
            else
                writeln(q[qs])
        end
        else if (s = 'POP') then
        begin
            if (qs = qe) then
                writeln('Cannot pop')
            else
            begin
                inc(qs);
                if (qs = 10001) then
                    qs := 0
            end
        end
        else
            writeln((10001 + qe - qs) mod 10001)
    end
end.
