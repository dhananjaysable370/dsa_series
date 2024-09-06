import random

ai = random.randint(1,100)
minAttempt = 10
attempt = 1
while True:
    if minAttempt == 0:
        print("You lose!")
        break
    user = int(input(f"Guess a number between 1 and 100 in your attempt is {attempt}: "))
    if user == ai:
        print(f"You guessed it in {attempt} Attempts!")
        break
    elif user < ai:
        print("Too low!")
    else:
        print("Too high!")  # Changed this line to print "Too high!" instead of "
    attempt += 1
    minAttempt-=1
