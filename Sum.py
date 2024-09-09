sumOfOdd = 0
sumOfEven = 0

for i in range(1,21):
    if(i % 2 == 0):
        sumOfEven += i
    else:
        sumOfOdd += i

        
print(sumOfOdd)
print(sumOfEven)