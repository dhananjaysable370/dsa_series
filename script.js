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

// Factorial Recursive Function
function factorial(n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

const add = function sum(a, b) {
    return a + b;
}
console.log(factorial(5));

console.log(factorial(10));
console.log(add(factorial(5), 3));
let d = add(factorial(8), 90);
console.log(d)
console.log(sumN(10))

function sumN(n) {
    let sum = 0;
    for (let i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}

function sumOfDigits(num) {
    let sum = 0;
    while (num > 0) {
        let digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    return sum;
}

console.log()
let sumofd = sumOfDigits(9873);
console.log(Math.round(sumofd));



console.log()
console.log()
console.log()

let factorialSum = function (n) {
    fact = 1;
    sumOfFactorial = 0;
    for (let i = 1; i <= n; i++) {
        let j = i;
        sumOfFactorial += (fact *= j);
    }
    return sumOfFactorial;
}

console.log(factorialSum(10)) // sum of all n factorials = 4037913

let str = "Hello" + " world";
console.log(str);

console.log(str.split(" ")[1][3]);
console.log(str.replace("world", "Universe"));
console.log(str.split(" ").reverse().join(" "));

let str2 = "Hello";
console.log(str2.padStart(10, "A"));
console.log(str2.padEnd(10, "B"));
