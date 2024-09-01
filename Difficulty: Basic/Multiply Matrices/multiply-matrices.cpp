//{ Driver Code Starts
#include<iostream>
#include<stdio.h>
using namespace std; 
void multiply(int A[][100], int B[][100], int C[][100], int N);
int main()
{
	int t;
	cin>>t;
	while(t--){
	    int N;
		cin>>N;
		int A[100][100],B[100][100],C[100][100];
		int i, j;
		for(int i = 0; i < N; i++)
		    for(int j = 0 ; j < N; j++)
		        cin>>A[i][j];
		for(int i = 0; i < N; i++)
		    for(int j = 0; j < N; j++)
		        cin>>B[i][j];
		multiply(A, B, C, N);
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			   cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
 
    return 0;
}
// } Driver Code Ends


/*Complete the function below*/
void multiply(int A[][100], int B[][100], int C[][100], int n)
{
    int h=0,g,d,e,f;
   for(d=0;d<n;d++)
    {
     for(e=0;e<n;e++)
     {
         h=0;
       for(f=0;f<n;f++)
       {
         g=A[d][f]*B[f][e];
          h=h+g;
       }
       C[d][e]=h;
     }
    }
}