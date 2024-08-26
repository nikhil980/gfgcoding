//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.lang.*;
import java.util.*;


// } Driver Code Ends
// User function Template for Java

class Solution {
    int maxRepeating(int k, int[] arr) {
        int n=arr.length;
     int a[]=new int[k];
        for(int i=0;i<n;i++){
            a[arr[i]]++;
        }
        int countmax=0;
        int maxelement=0;
         for(int i=0;i<k;i++){
             if(a[i]>countmax){
                 countmax=a[i];
                 maxelement=i;
             }
         }
         return maxelement;
    }
}

//{ Driver Code Starts.

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            int k = Integer.parseInt(br.readLine());
            String line = br.readLine();
            String[] tokens = line.split(" ");

            // Create an ArrayList to store the integers
            ArrayList<Integer> array = new ArrayList<>();

            // Parse the tokens into integers and add to the array
            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }

            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;
            Solution obj = new Solution();
            int res = obj.maxRepeating(k, arr);

            System.out.println(res);
        }
    }
}
// } Driver Code Ends