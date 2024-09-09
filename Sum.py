sumOfOdd = 0
sumOfEven = 0

for i in range(1,21):
    if(i % 2 == 0):
        sumOfEven += i
    else:
        sumOfOdd += i

        
print(sumOfOdd)
print(sumOfEven)

print()
print()

def sumOfFactorials(n):
    fact = 1
    sum = 0
    for i in range(1,n+1):
        fact = fact * i
        sum = sum + fact

    return sum
        
        
print(sumOfFactorials(10))
