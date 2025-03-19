//{ Driver Code Starts
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());

        for (int t = 0; t < tc; t++) {
            String[] input = br.readLine().split(" ");
            int arr[] = new int[input.length];

            for (int i = 0; i < arr.length; i++) arr[i] = Integer.parseInt(input[i]);

            // Read the integer k
            int k = Integer.parseInt(br.readLine());

            // Call the solution function
            Solution obj = new Solution();
            System.out.println(obj.maxProfit(arr, k));
            System.out.println("~");
        }
    }
}
// } Driver Code Ends


class Solution {
    static int maxProfit(int prices[], int k) {

         int n = prices.length;
        if (n == 0 || k == 0) return 0;

        
        if (k >= n / 2) {
            int profit = 0;
            for (int i = 1; i < n; i++) {
                if (prices[i] > prices[i - 1]) {
                    profit += prices[i] - prices[i - 1];
                }
            }
            return profit;
        }

        int[][] dp = new int[k + 1][n];

        for (int i = 1; i <= k; i++) {
            int prevMax = -prices[0]; 
            for (int j = 1; j < n; j++) {
                dp[i][j] = Math.max(dp[i][j - 1], prices[j] + prevMax);
                prevMax = Math.max(prevMax, dp[i - 1][j] - prices[j]);
            }
        }

        return dp[k][n - 1];
    }
}