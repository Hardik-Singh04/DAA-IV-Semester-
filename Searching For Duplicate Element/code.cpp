/* Given a sorted array of positive integers containing few 
duplicate elements, design an algorithm and implement it using a program to 
find whether the given key element is present in the array or not. If present, 
then also find the number of copies of the given key.*/
#include <iostream> using 
namespace std; 
int main()
{
int n, key;
cout << "Enter array size and key element: " << endl; 
cin >> n >> key; 
int arr[n];
cout << "Enter array elements"<< endl; 
for (int i = 0; i < n; i++) 
cin >> arr[i];
int count = 0, low = 0, high = n - 1, mid; 
while (low <= high)
{
mid = (low + high) / 2; 
if (arr[mid] == key)
{
count++;
low = mid + 1;
}
else if (arr[mid] < key) 
low = mid + 1;
else
high = mid - 1;
}
if (count == 0) cout << "Element not found";
else 
cout << "Element found " << count << " times";
return 0;
}
