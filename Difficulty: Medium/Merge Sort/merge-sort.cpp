//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
       vector<int>temp;
         int i=l,j=m+1;
        int n1 = m;
        int n2 = r;
         while(i<=n1&&j<=n2)
         {
             if(arr[i]<=arr[j])
             {
                 temp.push_back(arr[i]);
                 i++;
                 continue;
             }
             if(arr[i]>=arr[j])
             {
                 temp.push_back(arr[j]);
                 j++;
                 continue;
             }
         }
         while(i<=n1)
         {
           temp.push_back(arr[i]);
                 i++;
         }
         while(j<=n2)
         {
             temp.push_back(arr[j]);
                 j++;
         }
           
         for(int a=l;a<=r;a++)
         {
             arr[a]=temp[a-l];
             
         }
         

    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r)
        {
            int mid=l+(r-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends