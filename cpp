#include<iostream>
using namespace std;
int main()
{
	int size, a, b, c=0;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	int arr[size];
	for(a=0; a<size; a++)
	{
		cin>>arr[a];
		c+=arr[a];
	}
	cout<<"sum of the all element is:- "<<c;
}
