#include<iostream>
#define max 100
using namespace std;
int main()
{
	int fre[max], count, arr[max], size, a, b, c;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[a];
		fre[a]=-1;
	}
	for(a=0; a<size; a++)
	{
		count=1;
		for(b=a+1; b<size; b++)
		{
			if(arr[a]==arr[b])
			{
				count++;
				fre[b]=0;
			}
		}
		if(fre[a]!=0)
		{
			fre[a]=count;
		}
	}
	for(a=0; a<size; a++)
	{
		if(fre[a]==1)
		{
			cout<<arr[a]<<":- "<<fre[a]<<endl;
		}
	}
}
