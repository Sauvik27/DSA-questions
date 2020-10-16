// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t; //Number of test cases
	cin>>t;
	int n; //size
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int j=0;j<n;j++)
	{
	    cout<<arr[j]<<" ";
	}
	return 0;
}
