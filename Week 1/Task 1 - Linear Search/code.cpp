#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int count=1,n=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int checknum=0;
		cin>>checknum;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==checknum)
			{
				cout<<"Present "<<count;
			}
			count=count+1;
		}
		if((count-1)==n)
		{
			cout<<"Not Present "<<(count-1);
		}
	}
}
