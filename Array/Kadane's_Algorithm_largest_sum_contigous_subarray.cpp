//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include <iostream>
using namespace std;

int main() {
	//code
	int T=0;
	cin>>T;
	for(int i=0;i<T;i++)
	{
    	int size=0;
	    cin>>size;
	    int arr[size];
	    for(int i=0;i<size;i++)
	    {
	        cin>>arr[i];
	    }
	    int max=arr[0];
	    int sum=0;
	    for(int k=0;k<size;k++)
	    {
	        sum=sum+arr[k];
	        if(max<sum)
	        {
	            max=sum;
	        }
	        if(sum<0)
	        {
	            sum=0;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
