#include<bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    
  int fibb[1000];
  int fibb[0]=0;
  int fibb[1]=1;

    for(int i=2;i<=n;i++)fibb[i]=fibb[i-1]+fibb[i-2];
   for(int i=1;i<=n;i++)cout<<fibb[i]<<' ';

   
}