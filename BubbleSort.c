#include<stdio.h>
#include<time.h>

int arr[5],n=5,i;

int bubblesort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
	}
	int k;
	for(k=0;k<5;k++)
	{
		printf("%d \t",arr[k]);
	}
	printf("\n");
}
void main()
{
    clock_t start, end;
     	double cpu_time_used;
	for(i=0;i<n;i++)
	{
		printf("Enter element %d \n",i);
		scanf("%d",&arr[i]);
	}
	printf("\nThe unsorted array is \n");
	for(int i=0;i<n;i++)
		printf("%d \t",arr[i]);
	printf("\nThe sorted array is \n");
	start = clock();
	bubblesort(arr,n);
	end = clock();
			cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("\t%f\n",cpu_time_used);

}
