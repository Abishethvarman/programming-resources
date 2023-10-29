function jump_Search(nums, item) {
    const length = nums.length;

    // Finding block size to be jumped 
    let step = Math.floor(Math.sqrt(length));
    let lowerBound = 0;

    let sortedNum = nums.sort((a, b) => a - b);
    let count = 0;
    // Jump search logic
    while (sortedNum[Math.min(step, length) - 1] < item) {
        console.log(Math.min(step, length) - 1);
        console.log(sortedNum[Math.min(step, length) - 1]);
        console.log(item);
        console.log("step1: " + step);

        lowerBound = step;
        
        console.log(count++ + ' step: ' + step + ' lowerBound ' + lowerBound);
        step += lowerBound;
        if (lowerBound >= length) {
            return -1;
        }
        console.log("step2: " + step);
    }

    const upper_Bound = Math.min(step, length);

    // Linear search
    while (sortedNum[lowerBound] < item) {
        lowerBound++;

        // If pointer reaches next block or end of array, then item is not present
        if (lowerBound === upper_Bound) {
            return -1
        }
    }

    if (sortedNum[lowerBound] === item) {
        return lowerBound;
    }
    return -1;
}

const nums = [2, 1, 7, 13, 0, 11, 6, 5, 8, 9, 10, 11, 12];
let item = 8;
// let item = 15; // example of item not found in the array

let position = jump_Search(nums, item);

if (position != -1) {
    console.log("Number '" + item + "' is at index " + position);
} else {
    console.log("Number '" + item + "' is not in the provided array");
}
