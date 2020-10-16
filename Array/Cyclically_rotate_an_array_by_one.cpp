// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int size=0;
	cin>>size;
	int arr[size];
	cout<<"Enter elements in array\n";
	for(int i=0;i<size;i++)
	{
	    cin>>arr[i];
	}
	for(int i=size-1;i>0;i--)
	{
	    swap(arr[i],arr[i-1]);
	}
	for(int k=0;k<size;k++)
	{
	    cout<<arr[k]<<" ";
	}
	return 0;
}
