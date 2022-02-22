#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int count=0,n=0,flag=1;
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
				cout<<"Present "<<flag;
				count++;
			}
			flag++;
		}
		if(count==0)
		{
			cout<<"Not Present "<<n;
		}
	}
}
