#include <stdio.h>

void main()
{
	int size;
	double *array;

	printf("Enter the numbers of elements: ");
	scanf("%d",&size);//to get the number of elements
	array=malloc(size*sizeof(double));//to allocate memory for an array of the size
	for(int i=0;i<size;i++)//to input elements into the array
	{
		printf("Enter element %d: ",i);
		scanf("%lf",&array[i]);
	}
	printf("\n\nUnsorted array:\n\n");
	for(int i=0;i<size;i++) printf("%.2lf ",array[i]);//to print the unsorted array
	for(int i=1;i<size;i++)//insertion sorting the array, biggest number first
	{
		for(int j=i;j>0 && array[j-1]<array[j];j--)
		{
			double temp=array[j];
			array[j]=array[j-1];
			array[j-1]=temp;
		}
	}
	printf("\n\nSorted array:\n\n");
	for(int i=0;i<size;i++) printf("%.2lf ",array[i]);//to print the sorted array
	free(array);//to free the memory that was allocated to the array
}