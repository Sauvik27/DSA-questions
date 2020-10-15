//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter size of array\n";
	int n=0;
	cin>>n;
	int arr[n];
	cout<<"Enter values\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"Max is "<<max<<endl;
	cout<<"Min is "<<min<<endl;
}