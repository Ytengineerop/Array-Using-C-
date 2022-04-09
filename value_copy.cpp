#include<iostream>
using namespace std;
int main()
{
	int size, a, b, c,ne=0;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	int arr1[size], arr[100];
	for(a=0; a<size; a++)
	{
		cin>>arr[a];
		arr1[a]=arr[a];
	}
	a=0;
	do
	{
		cout<<arr1[a]<<ends;
		a++;
	}while(a!=size);
}
