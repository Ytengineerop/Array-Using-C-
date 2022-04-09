#include<iostream>
using namespace std;
int main()
{
	int arr[100], size, a, b, c,max1,max2;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cin>>arr[a];
		if(arr[a]>max1)
		{
			max2=max1;
			max1=arr[a];
		}
		else if(arr[a]>max2)
		{
			max2=arr[a];
		}
	}
	cout<<"Max1 is:- "<<max1<<endl<<"max2 is:- "<<max2;
}
