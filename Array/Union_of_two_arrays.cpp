//https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int size1;
	int size2;
	cin>>size1;
	cin>>size2;
	int arr1[size1];
	int arr2[size2];
	for(int i=0;i<size1;i++)
	{
	    cin>>arr1[i];
	}
	for(int i=0;i<size2;i++)
	{
	    cin>>arr2[i];
	}
	int count=0;
	for(int k=0;k<size1;k++)
	{
	    bool result=binary_search(arr2,arr2+size2,arr1[k]);
	    if(result)
	    {
	        count++;
	    }
	}
	int value1=size1-count;
	int value2=size2-count;
	int endvalue=value1+value2+count;
	cout<<endvalue<<endl;
	return 0;
}
