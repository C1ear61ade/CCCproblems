weight = float(input())
height = float(input())

BMI =  weight / height**2

if BMI > 25:
    print("Overweight")
elif BMI <= 25 and BMI >= 18.5:
    print("Normal weight")
else:
    print("Underweight")
