var
    freqa, freqb: array['A'..'Z'] of longint;
    s: string;
    len, n, i, j: longint;
    ok: boolean;
    c: char;
begin
    for c := 'A' to 'Z' do
        freqa[c] := 0;
    readln(s);
    len := length(s);
    for i := 1 to len do
        inc(freqa[s[i]]);
    readln(n);
    for i := 1 to n do
    begin
        for c := 'A' to 'Z' do
            freqb[c] := 0;
        readln(s);
        len := length(s);
        for j := 1 to len do
            inc(freqb[s[j]]);
        ok := true;
        for c := 'A' to 'Z' do
            if (freqb[c] > freqa[c]) then
                ok := false;
        if (ok) then
            writeln('Yes')
        else
            writeln('No')
    end
end.
