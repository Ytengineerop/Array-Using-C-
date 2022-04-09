#include<iostream>
#define max 100
using namespace std;
int main()
{
	int arr[max], a, b, c, size, count=0;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element of the arr- ";
		cin>>arr[a];
	}
	for(a=0; a<size; a++)
	{
		for(b=a+1; b<size; b++)
		{
			if(arr[a]==arr[b])
			{
				count++;
				break;
			}
		}
	}
	cout<<count;
}
