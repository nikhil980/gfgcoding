//{ Driver Code Starts
// Initial Template for Java

import java.util.Scanner;


// } Driver Code Ends
// User function Template for Java
class Solution {
    // Method to calculate the area (assuming it's a circle with the given radius)
    public double calculateArea(double r) {
        // code here
        return (double)Math.PI*r*r;
    }
}

//{ Driver Code Starts.

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Reading the number of test cases
        int t = sc.nextInt();

        // Loop through each test case
        while (t-- > 0) {
            // Reading the radius
            double number = sc.nextDouble();

            // Create a Solution object and calculate the area
            Solution ob = new Solution();
            double ans = ob.calculateArea(number);

            // Print the result with 5 decimal places
            System.out.printf("%.5f\n", ans);
            System.out.printf("~\n");
        }

        sc.close();
    }
}

// } Driver Code Ends