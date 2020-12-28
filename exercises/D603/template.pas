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
    l: longint;
    // TODO: implementation
begin
    l := length(s);
    // TODO: implementation
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
