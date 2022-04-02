{$IFDEF ONLINE_JUDGE}
unit submission;

interface
procedure answer(i, x: longint); cdecl; external;
{$ENDIF}

var
    n, aSum, answerCnt, i: longint;
    a, aCopy: array [0..99] of longint;
    // TODO: global variables can be declared here

{$IFDEF ONLINE_JUDGE}
implementation
{$ELSE}
procedure answer(i, x: longint);
begin
    writeln('answer(', i, ', ', x, ')');
    inc(answerCnt);
    if answerCnt > 1 then
    begin
        writeln('Wrong Answer: Called answer() multiple times');
        halt;
    end;
    if (i < 0) or (n <= i) then
    begin
        writeln('Wrong Answer: i out of range [0, n)');
        halt;
    end;
    if (x < 1) or (a[i] < x) then
    begin
        writeln('Wrong Answer: x out of range [1, a[i]]');
        halt;
    end;
    a[i] := a[i] - x;
    aSum := aSum - x;
end;
{$ENDIF}
procedure nim(n: longint; var a: array of longint); cdecl; export;
// var
    // TODO: implementation
begin
    // TODO: implementation
end;

{$IFNDEF ONLINE_JUDGE}
procedure computerMove();
var
    i, x: longint;
begin
    write('Enter computer''s i and x: ');
    read(i, x);
    if (i < 0) or (n <= i) then
    begin
        writeln('Wrong Answer: i out of range [0, n)');
        halt;
    end;
    if (x < 1) or (a[i] < x) then
    begin
        writeln('Wrong Answer: x out of range [1, a[i]]');
        halt;
    end;
    a[i] := a[i] - x;
    aSum := aSum - x;
end;

begin
    write('Enter n: ');
    read(n);
    write('Enter a[0] ... a[n-1]: ');
    for i := 0 to n - 1 do
    begin
        read(a[i]);
        aSum := aSum + a[i];
    end;
    while true do
    begin
        answerCnt := 0;
        aCopy := a;
        nim(n, aCopy);
        if answerCnt < 1 then
        begin
            writeln('Wrong Answer: Did not call answer()');
            exit;
        end;
        if aSum = 0 then
        begin
            writeln('You win the game');
            exit;
        end;
        computerMove();
        if aSum = 0 then
        begin
            writeln('Computer wins the game');
            exit;
        end;
    end;
{$ENDIF}
end.
