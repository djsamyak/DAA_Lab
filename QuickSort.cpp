#include<stdlib.h>
#include<iostream>
#include<time.h>

using namespace std;

int loopCounter=0,swapCounter=0,compCounter=0;
int low, high;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    swapCounter++;
}

int partition (int a[], int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++,loopCounter++)
    {
      compCounter++;
        if (a[j] < pivot)
        {
            compCounter++;
            i++;
            swap(&a[i], &a[j]);
        }
        else
        compCounter++;
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
        compCounter++;
    }
    else
    compCounter++;
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
  quickSort(a, 0, n - 1);
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
