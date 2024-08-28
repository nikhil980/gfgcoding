//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
 /*long long int merge(long long arr[],int l,int m,int r)
    {
        long long int res=0;
        int n1=m-l+1,n2=r-m;
        long long arrleft[n1];
        long long arrright[n2];
    
        for(int i=0;i<n1;i++)
        {
            arrleft[i]=arr[l+i];
         
        }
         for(int i=0;i<n2;i++)
        {
            arrright[i]=arr[m+i+1];
      
        }
        int k=l;
        int i=0,j=0;
        while(i<n1&&j<n2)
        {
            if(arrleft[i]<=arrright[j])
            {
               arr[k]= arrleft[i];
                i++;
                 k++;
            }
            else
            {
                arr[k]=arrright[j];
                j++;
                 k++;
                res=res+(n1-i);
            }
           
        }
        while(i<n1)
        {
             if(arrleft[i]<=arrright[j])
            {
                arr[k]= arrleft[i];
                k++;
                i++;
            }
        }
        while(j<n2)
        {
             if(arrright[j]<=arrleft[i])
            {
              arr[k]=arrright[j];
                j++;
                k++;
            }
        }
        return res;
    }
   long long mergeSortAndCount(long long arr[], int l, int r) {
    long long inv_count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inv_count += mergeSortAndCount(arr, l, m);
        inv_count += mergeSortAndCount(arr, m + 1, r);
        inv_count += merge(arr, l, m, r);
    }
    return inv_count;
}*/
long long mergeAndCount(long long arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    long long left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        right[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    long long inv_count = 0;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
            inv_count += (n1 - i);
        }
    }

    while (i < n1)
        arr[k++] = left[i++];

    while (j < n2)
        arr[k++] = right[j++];

    return inv_count;
}

long long mergeSortAndCount(long long arr[], int l, int r) {
    long long inv_count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inv_count += mergeSortAndCount(arr, l, m);
        inv_count += mergeSortAndCount(arr, m + 1, r);
        inv_count += mergeAndCount(arr, l, m, r);
    }
    return inv_count;
}
    long long int inversionCount(long long arr[], int n)
    {
        long long int ans=mergeSortAndCount(arr,0,n-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends