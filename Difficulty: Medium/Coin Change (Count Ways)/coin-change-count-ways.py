class Solution:
    
     def count(self, coins, Sum):
        dp = [0] * (Sum + 1)
        dp[0] = 1
        for coin in coins:
            for sub_sum in range(coin, Sum + 1):
                dp[sub_sum] += dp[sub_sum - coin]
        return dp[-1]


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys

sys.setrecursionlimit(10**6)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):

        coins = list(map(int, input().strip().split()))
        sum = int(input())
        ob = Solution()
        print(ob.count(coins, sum))

        print("~")

# } Driver Code Ends