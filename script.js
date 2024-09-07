let arr = [1, 2, 3, 4, 5]

let sum = 0;
arr.filter(element => {
    if (element > 3) {
        console.log(element);
    } else {
        sum += element
    }
});

console.log(sum);


// Star Pattern
for (let i = 1; i <= 5; i++) {
    for (let j = 1; j <= 5; j++) {
        if (j <= i) {
            process.stdout.write(' * ')
        } else {
            process.stdout.write("   ");
        }
    }
    console.log();
}

console.log();
console.log();

// Factorial Recursive Fuction
function factorial(n) {
    if (n == 0 || n == 1) { 
        return 1;
    }
    return n * factorial(n - 1);
}

console.log(factorial(5));
