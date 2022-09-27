/* Given a sorted array of positive integers, design an 
algorithm and implement it using a program to find three indices i, j, k such 
that arr[i] + arr[j] = arr[k]. Your Program Should run for T no of Test cases 
inputed by user.*/
#include<bits/stdc++.h> 
using namespace std; 
void sum(int arr[],int n) 
{ 
bool flag=true; 
for(int k=0;k<n;k++) 
{ int i=0; int 
j=n-1; 
while(i<j)
{
if(arr[i]+arr[j] == arr[k])
{ 
if(flag) 
flag=false; 
cout<<"Sequence: "<<i<<" "<<j<<" "<<k<<endl; 
i++; 
j--; 
} 
if(arr[i]+arr[j] <arr[k]) 
i++; 
else 
j--; 
} 
} 
if(flag) 
{ 
cout<<"No Sequence found"<<endl; 
} 
} 
int main() 
{ int n; 
cin>>n; 
int arr[n]; 
for(int i=0;i<n;i++) 
{ 
cin>>arr[i]; 
} 
sum(arr,n); 
return 0; 
} 
