#include<iostream>
#include<time.h>

using namespace std;

int i,n,l,r,largest;
int a[50000];
clock_t startTime, endTime;

void printArray(int a[],int n)
{
  for(int i=0;i<n;++i)
  {
    cout<<a[i]<<" ";
  }
}

void heapify(int a[],int n,int i)
 {
   l=(2*i)+1;
   r=(2*i)+2;
   largest=i;
   if (l < n && a[l] > a[largest])
     largest = l;
   if (r < n && a[r] > a[largest])
     largest = r;
   if (largest != i)
   {
     swap(a[i], a[largest]);
     heapify(a, n, largest);
   }
 }

 void heapSort(int a[], int n)
{
   for (int i = n / 2 - 1; i >= 0; i--)
     heapify(a, n, i);
   for (int i=n-1; i>=0; i--)
   {
     swap(a[0], a[i]);
     heapify(a, i, 0);
   }
}

int main()
{
  cout<<"Enter the number of elements \n";
  cin>>n;
  for(i=0;i<n;++i)
	{
	//	cin>>a[i];
    a[i]=rand()%1000;
	}
  startTime=clock();
  cout<<"The entered array is: \n";
  printArray(a,n);
  cout<<"\n";
  int TotalRoots=(n-1)/2;
  for(i=0;i<TotalRoots;++i)
  {
    heapSort(a,n);
  }
  endTime=clock();
  double diff=(endTime-startTime);
  cout<<"Sorted heap is: \n";
  printArray(a,n);
  cout<<"Time taken is: "<<(diff/CLOCKS_PER_SEC)<<endl;
}
