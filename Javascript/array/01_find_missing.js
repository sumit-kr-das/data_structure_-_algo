// we have an array, and the array contains odd number 1 to n and array is sorted. 
// between this array of element one number will missing. 
// find the missing number.
// const arr = [5,7,9,11,15,17]
// const output = 13

const arr = [5,7,9,11,15,17]

// My Approach [not right]
let temp = []
for(let i = 1; i <= arr[arr.length-1]; i++) {
    if(i % 2 != 0) {
        if(i>=arr[0] && i<=arr[arr.length-1]){
            if(!arr.includes(i)){
                temp.push(i);
            }
        }
    }
}
console.log(temp)

// Optimize Approach
for(let i = 0; i < arr.length; i++) {
    let current = arr[i];
    let next = current + 2;
    if(arr[i+1] !== next) {
        console.log(next)
        break;
    }
}

// note: Binary search is not applicable for the question, 
// because we dont know know the number