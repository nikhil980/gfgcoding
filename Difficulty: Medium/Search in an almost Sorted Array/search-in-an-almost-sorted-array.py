#{ 
 # Driver Code Starts

# } Driver Code Ends

#User function Template for python3
class Solution:
    def findTarget(self, arr, target):
        # code here
        if arr:
            elements_count = len(arr)
            if elements_count == 1:
                if target == arr[0]:
                    return 0
            else:
                left = 0
                right = elements_count - 1
                while left <= right:
                    
                    mid = left + (right-left)//2
                    # print(arr[left:right+1], mid)
                    if arr[mid] == target:
                        return mid
                    else:
                        mid_left = mid_right = mid_val = arr[mid]
                        if mid !=0:
                            mid_left = arr[mid-1]
                            if mid_left == target:
                                return mid - 1
                        if mid != elements_count - 1:
                            mid_right = arr[mid+1]
                            if mid_right == target:
                                return mid + 1
                        if target < sorted([mid_left ,mid_right ,mid_val])[1]:
                            right = mid -2
                        else:
                            left = mid + 2
                            
            
        return -1
        # code here


#{ 
 # Driver Code Starts.

if __name__ == "__main__":
    t = int(input())  # Number of test cases

    for _ in range(t):
        arr = list(map(int, input().strip().split()))  # Read the array
        target = int(input().strip())  # Read the target

        sln = Solution()
        ans = sln.findTarget(arr, target)
        print(ans)
        print("~")
# } Driver Code Ends