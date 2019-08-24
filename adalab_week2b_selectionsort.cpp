
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int main(int argc, char **argv)
{
	int n,min;
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
		min=i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int t=arr[i];
		arr[i]=arr[min];
		arr[min]=t;
	}
	for(int i=n-1;i>=n-k;i--)
		cout<<arr[i]<<"\t";
	end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<"\n"<<"TIME:"<<t;
	return 0;
}
