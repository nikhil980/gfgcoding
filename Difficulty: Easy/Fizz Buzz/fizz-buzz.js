//{ Driver Code Starts

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split("\n").map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {

        let n = parseInt(readLine());

        let obj = new Solution();
        let res = obj.fizzBuzz(n);

        let S_res = '';
        for (let i = 0; i < res.length; i++) {
            S_res += (res[i]);
            S_res += ' ';
        }
        console.log(S_res);
        console.log("~");
    }
}

// } Driver Code Ends



class Solution {
    /**
    * @param number n

    * @returns string[]
    */
    fizzBuzz(n) {
        // code here
        let ans=[];
        for(let i=1;i<=n;i++)
        {   
              (i%3!==0)&&(i%5!==0)&&ans.push(i);
               (i%3===0)&&(i%5===0)&&ans.push("FizzBuzz")||
              (i%3===0)&&ans.push("Fizz")||
              (i%5===0)&& ans.push("Buzz");
             
            
        }
        return ans;
    }
}
