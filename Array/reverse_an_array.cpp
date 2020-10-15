//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include <iostream>
#include <algorithm>
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
	int k=n-1;
	for(int j=0;j<n;j++)
	{

		if(j==k)
		{
			break;
		}
		swap(arr[j],arr[k]);
		k--;
	}
	for(int l=0;l<n;l++)
	{
		cout<<arr[l]<<"---";
	}
	return 0;
}