import string
import random
n = 6
count = 0
i = 2
while i <= (n - 1):
    if n % i == 0:
        count += 1
    i += 1

if count > 0:
    print("number is not prime!")
else:
    print("number is prime!")

def passwordGenerator(length):
    source = string.ascii_letters + string.digits
    for i in range(length):
        password = random.choice(source)
        print(password,end='')



print('Generating password...')
passwordGenerator(8)