#include<iostream>
#define max 100
using namespace std;
int main()
{
	int arr[max], times[max], count, a, b, c, size, val;
	cout<<"Enter the size of the arr:- ";
	cin>>size;
	for(a=0; a<size; a++)
	{
		cout<<"Enter the element of the arr:- ";
		cin>>arr[a];
		times[a]=-1;
	}
	for(a=0; a<size; a++)
	{
		count=1;
		for(b=a+1; b<size; b++)
		{
			if(arr[a]==arr[b])
			{
				count++;
				times[b]=0;
			}
		}
		
		if(times[a]!=0)
		{
			times[a]=count;
		}
	}

	for(a=0; a<size; a++)
	{
		if(times[a]!=0)
		{
			cout<<"arr of:- "<<arr[a]<<"times :- "<<times[a]<<endl;
		}
	}
}
