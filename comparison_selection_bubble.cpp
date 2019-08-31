#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int m=0,b=0,s=0;
int main(int argc, char **argv)
{
	int n,min;
	/*clock_t start,end;
	start=clock();*/
	cout<<"Enter the size of the arrray";
	cin>>n;
	int arr[n]={0};
	cout<<"Enter the elements";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	/*int k;
	cout<<"Enter k";
	cin>>k;*/
	cout<<"Selection sort";
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i;j<n;j++)
		{
			s++;
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int t=arr[i];
		arr[i]=arr[min];
		arr[min]=t;
	}
	
	cout<<"\nComparison:"<<s;
	cout<<"\nBubble sort\n";
	int swapped=0;
	for(int i=0;i<n-1;i++)
	{
		swapped=0;
		for(int j=0;j<n-i-1;j++)
		{
			b++;
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
	
	cout<<"Comparisons:"<<b;
}
	/*
	void merge(int b[],int c[],int a[])
	{
	int i=0,j=0,k=0;
 while(i<len(b) and j<len(c))
 {
	 m++;
        if b[i]<c[j]{
            a[k]=b[i]
		i+=1}
        else{
            a[k]=c[j]
		j+=1}
        k+=1
 }    
    while (i<len(b)){
                a[k]=b[i]
                i+=1
	k+=1}
    while j<len(c){
		a[k]=c[j]
                j+=1
	k+=1}
void mergesort(int a[]){
    if(len(a)>1):
        m=len(a)//2
        l1=a[:m]
        l2=a[m:]
        mergesort(l1)
        mergesort(l2)
        merge(l1,l2,a)
}*/