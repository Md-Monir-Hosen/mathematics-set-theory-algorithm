#include<bits/stdc++.h>
using namespace std;
void subsetDifference(int n)
{
   int s=n*(n+1)/2;
   if(n%4==0)
   {
       cout<<"First subset sum = "<<s/2<<"\nSecond subset sum = "<<s/2<<"\nDifference = " <<0;
   }
   else
   {
       if(n%4==1 || n%4==2)
       {
           cout<<"First subset sum = "<<s/2<<"\nSecond subset sum = "<<s/2+1<<"\nDifference = " <<1;
       }
       else
       {
           cout<<"First subset sum = "<<s/2<<"\nSecond subset sum = "<<s/2<<"\nDifference = " <<0;
       }
   }
}
int main()
{
    int n = 6;
    subsetDifference(n);
    return 0;
}
