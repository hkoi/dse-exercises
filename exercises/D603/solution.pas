{$IFDEF ONLINE_JUDGE}
unit submission;

interface
{$ENDIF}

var
    x, y: longint;
    s: string;
    // TODO: global variables can be declared here

{$IFDEF ONLINE_JUDGE}
implementation
{$ENDIF}
function validateImpl(x, y: longint; const s: string): boolean;
var
    l, n, i: longint;
begin
    l := length(s);
    if l > 6 then
    begin
        validateImpl := false;
        exit;
    end;
    if (l = 1) and (s[1] = '0') then
    begin
        if (x <= 0) and (0 <= y) then
        begin
            validateImpl := true;
        end
        else
        begin
            validateImpl := false;
        end;
        exit;
    end;
    if (s[1] < '1') or (s[1] > '9') then
    begin
        validateImpl := false;
        exit;
    end;
    for i := 2 to l do
    begin
        if (s[i] < '0') or (s[i] > '9') then
        begin
            validateImpl := false;
            exit;
        end;
    end;
    n := 0;
    for i := 1 to l do
    begin
        n := n * 10 + ord(s[i]) - ord('0');
    end;
    if (x <= n) and (n <= y) then
    begin
        validateImpl := true;
    end
    else
    begin
        validateImpl := false;
    end;
end;

function validate(x, y: longint; s: pchar): boolean; cdecl; export;
var
    t: string;
    l: longint;
begin
    l := 0;
    while (s[l] <> #0) do
    begin
        t[l+1] := s[l];
        inc(l);
    end;
    t[0] := chr(l);
    validate := validateImpl(x, y, t);
end;

{$IFNDEF ONLINE_JUDGE}
begin
    while true do
    begin
        write('Enter x and y: ');
        readln(x, y);
        write('Enter string s: ');
        readln(s);
        write('Your function validate() returned: ');
        if validateImpl(x, y, s) then
            writeln('true')
        else
            writeln('false');
    end;
{$ENDIF}
end.
