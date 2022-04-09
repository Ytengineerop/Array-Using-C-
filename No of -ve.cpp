#include<iostream>
using namespace std;
int main()
{
	int arr[100], size, a, b, c,ne=0;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cin>>arr[a];
		if(arr[a]<0)
		{
			ne++;
		}
	}
	cout<<"All -ve element is:- "<<ne;
}
