import random

first_100_digit = ''*100
second_100_digit = ''*100
while len(first_100_digit) != 100:
    x = random.randint(0,10)
    y = random.randint(0,10)
    first_100_digit += str(x) 
    second_100_digit += str(y)

print(f"x = {first_100_digit}\ny = {second_100_digit}\nx*y={int(first_100_digit)*int(second_100_digit)}")
