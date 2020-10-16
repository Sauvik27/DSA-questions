//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size=0;
    //cout<<"Enter the size of array\n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int end=size-1;
    int start=0;
    //We can also use quick sort instead of below method.
    while(start<end)
    {
        if(arr[start]>=0)
        {
            if(arr[end]>=0)
            {
                end--;
            }
            else
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
        else
        {
            start++;
        }
    }
    for(int l=0;l<size;l++)
    {
        cout<<arr[l]<<" ";
    }
	return 0;
}
