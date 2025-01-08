//{ Driver Code Starts

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split("\n").map(string => {
        return string.trim();
    });

    main();
});

function readLine() {
    return inputString[currentLine++];
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++){
        
        let a = parseInt(readLine());
        
        
        let b = parseInt(readLine());
        
        let obj = new Solution();
        let res = obj.gcd(a, b);
        console.log(res);
    }
}

// } Driver Code Ends



class Solution {
/**
* @param number a
* @param number b

* @returns number
*/
    gcd(a, b) {
        // code here
         while(b !=0) {
           let temp = b
           b = a % b
           a = temp
       }
       return a
    }
}
        
