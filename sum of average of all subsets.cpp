#include<bits/stdc++.h>
using namespace std;
int nCr(int n,int k)
{
    int C[n+1][k+1];
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=min(i,k);j++)
        {
            if(j==0 || j==i)
            {
                C[i][j]=1;
            }
            else
            {
                C[i][j]=C[i-1][j-1]+C[i-1][j];
            }
        }
    }
    return C[n][k];
}
double resultOfAllSubsets(int a[],int n)
{
    double result=0.0;
    int sum;
    for(int i=0;i<=n;i++)
    {
        sum+=a[i];
    }
    for(int j=1;j<=n;j++)
    {
        result+=(double)(sum*(nCr(n-1,j-1)))/n;
    }
    return result;
}
int main()
{
     int arr[] = { 2, 3, 5, 7 };
    int N = sizeof(arr) / sizeof(int);
    cout << resultOfAllSubsets(arr, N) << endl;
    return 0;
}
