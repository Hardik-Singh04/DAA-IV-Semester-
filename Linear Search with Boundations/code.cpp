/* Given an already sorted array of positive integers, 
design an algorithm and implement it using a program to find whether a given 
key element is present in the sorted array or not. For an array arr[n], search at 
the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on. Once the interval (arr[2k
] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k
to find the element key.*/
#include<iostream> 
#include<math.h> 
using namespace std; 
bool jumpSearch(int arr[] , int n , int target) 
{ 
int i = 1,left = 0; //starting of block int 
right = pow(2,i++); // end of block 
while(arr[right] <= target && right < n)
{ 
left = right;
right = pow(2,i++); 
if(right > n-1) 
right = n; 
} 
for(int i = left ; i < right ; i++)
{ 
if(arr[i] == target) 
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
jumpSearch(arr , n , key) == true ?cout<<"key is Present" : cout<<"Key is Not Present";
return 0; 
}
