#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_number = abs(number) % 10
print("Last digit of", number, "is", end=" ")
if last_number < 0:
    last_number = -last_number
if last_number > 5:
    print(f"{last_number} and is greater than 5")
elif last_number == 0:
    print(f"{last_number} and is 0")
else:
    print(f"{last_number} and is less than 6 and not 0")
