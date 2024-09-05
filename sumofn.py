sumofn = 0
userInput = int(input("Enter number : "))
for i in range(1,userInput+1):
    sumofn = sumofn + i
    
print(sumofn)

print()

# Even Odd number program
num = int(input("Enter number : "))
if num % 2 == 0:
    print(num,"is even number")
else:
    print(num,"is odd number")