x#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int main(int argc, char **argv)
{
	int n,swapped=0;
	clock_t start,end;
	start=clock();
	cout<<"Enter the size of the arrray";
	cin>>n;
	int arr[n]={0};
	cout<<"Enter the elements";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int k;
	cout<<"Enter k";
	cin>>k;
	for(int i=0;i<n-1;i++)
	{
		swapped=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=1;
			}
		}
		if(swapped==0)
			break;
	}
	for(int i=n-1;i>=n-k;i--)
		cout<<arr[i]<<"\t\t";
	end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<"\n"<<"TIME:"<<t;
	return 0;
}
