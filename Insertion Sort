#include<stdlib.h>
#include<iostream>
#include<time.h>

using namespace std;

int main()
{
	int i,j,n=100,a[100],key,loopCounter=0,swapCounter=0,compCounter=0;
	clock_t startTime,endTime;
	startTime=clock();
	cout<<"Enter the elements \n";
	for(i=0;i<n;++i)
	{
		a[i]=rand()%1000;
	//	cin>>a[i];
	}
	cout<<"\nThe entered elements are: \n";
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<endl;
	}
	for(i=0;i<n;++i,loopCounter++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			compCounter++;
			a[j+1]=a[j];
			swapCounter++;
			j--;
			loopCounter++;
		}
		a[j+1]=key;
		swapCounter++;
	}
	endTime=clock();
	cout<<"The sorted array is: \n"<<endl;
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<endl;
	}
	cout<<"The loop counter is: "<<loopCounter<<endl;
	cout<<"Execution time is: "<<endTime-startTime<<" clocks. \n";
	cout<<"Comparision is:"<<compCounter<<endl;
	cout<<"Swaps is: "<<swapCounter<<endl;
	return 0;
}
