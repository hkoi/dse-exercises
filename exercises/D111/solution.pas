var
    w, h, bmi: double;
begin
    readln(w, h);
    bmi := w / (h * h);
    writeln(bmi:0:3);
    if (bmi < 18.5) then
        writeln('Underweight')
    else if (bmi < 23.0) then
        writeln('Normal')
    else if (bmi < 25.0) then
        writeln('Overweight')
    else writeln('Obese');
end.
