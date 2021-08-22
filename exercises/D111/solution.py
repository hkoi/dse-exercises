w, h = map(float, input().split())
bmi = w / (h * h)
print(f'{bmi:.3f}')
if bmi < 18.5:
    print('Underweight')
elif bmi < 23.0:
    print('Normal')
elif bmi < 25.0:
    print('Overweight')
else:
    print('Obese')
