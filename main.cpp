#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cout<<"Enter the number of integers";
	cin>>n;
	int ar[n]={0};
	cout<<"\nEnter the integers\n";
	for(int i=0;i<n;i++)
		cin>>ar[i];
	int max=-9999;
	for(int i=0;i<n;i++)
		{if(ar[i]>max)
		{
			max=ar[i];
		}
		}
	cout<<"Maximum of the integers is:";
	cout<<max;
	return 0;
}
