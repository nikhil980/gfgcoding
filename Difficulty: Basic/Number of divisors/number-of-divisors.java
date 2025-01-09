//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.count_divisors(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution{
    static long count_divisors(int N){
        // code here
          if(N%3!=0){
            return 0;
        }
        long count=0;
        for(int i=3;i<=(N/2);i+=3){
            if(N%i==0){
                count++;
            }
            
        }
        count++;
        return count;
    }
}