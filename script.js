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
