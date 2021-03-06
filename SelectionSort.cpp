#include<stdlib.h>
#include<iostream>
#include<time.h>

using namespace std;

int loopCounter=0,swapCounter=0,compCounter=0;;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    swapCounter++;
}

int main()
{
	int i,j,n=100,a[100];
	clock_t startTime,endTime;;
	cout<<"Enter the elements \n";
	for(i=0;i<n;++i)
	{
	//	cin>>a[i];
    a[i]=rand()%1000;
	}
  startTime=clock();
	cout<<"\nThe entered elements are: \n";
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<endl;
	}
  int min_idx;
  for (i = 0; i < n-1; i++,loopCounter++)
  {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (a[j] < a[min_idx])
        {
          min_idx = j;
          compCounter++;
        }
        else
        compCounter++;
        swap(&a[min_idx], &a[i]);
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
