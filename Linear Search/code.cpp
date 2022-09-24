/* Program to Implement Linear Search Method and also find
Total No of Comparisons.*/
#include<iostream> 
using namespace std; 
bool linearSearch(int arr[] , int n , int key) 
{ 
for(int i = 0 ; i < n ; i++)
{ 
if(arr[i] == key) 
return true; 
} 
return false; 
} 
int main()
{ 
int n , key; 
cin>>n; 
int arr[n]; 
for(int i=0 ; i < n ; i++) 
cin>>arr[i]; 
cout<<"Enter an key "; 
cin>>key; 
linearSearch(arr , n , key) == true ?cout<<"key is Present" : cout<<"Key is Not Present"; 
return 0; 
}
