//{ Driver Code Starts
// Driver code
const readline = require('readline');
const rl = readline.createInterface({input : process.stdin, output : process.stdout});

let inputLines = [];
let currentLine = 0;

rl.on('line', (line) => { inputLines.push(line.trim()); });

rl.on('close', () => { main(); });

function readLine() { return inputLines[currentLine++]; }

function main() {
    let tc = parseInt(readLine());
    while (tc > 0) {
        let arr = readLine().split(' ').map(Number);
        let ob = new Solution();
        let ans = ob.findSum(arr);
        console.log(ans);
        // colsole.log("~");
        tc--;
    }
}
// } Driver Code Ends


// User function Template for javascript

class Solution {
    findSum(arr) {
        // code here
        let s=new Set();
        let ans=0;
        for(let i =0;i<arr.length;i++)
        {
            if(s.has(arr[i]))
            {
                continue;
            }
            ans+=arr[i];
            s.add(arr[i]);
        }
        return ans;
    }
}