#include<iostream>
using namespace std;
int main()
{
	int arr[100], size, a, b, c,odd=0,even=0;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cin>>arr[a];
		if(a & 1)
		{
			odd++;
		}
		else
		{
			even++;
		}
	}
	cout<<"odd is:- "<<odd<<endl<<"even is:- "<<even;
}
