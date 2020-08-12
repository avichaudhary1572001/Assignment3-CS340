#include<iostream>
#include<cstdlib>
 
using namespace std;
 

void swap(int *x, int *y)
{
	int temp; 
	temp = *x;
	*x = *y;
	*y = temp;
}
 

int Partition(int x[], int low, int high)
{
	int pivot, index, i;
	index = low;
	pivot = high;
 
	
	for(i=low; i < high; i++)
	{
		if(x[i] < x[pivot])
		{
			swap(&x[i], &x[index]);
			index++;
		}
	}
	
	swap(&x[pivot], &x[index]);
 
	return index;
}
 

int RandomPivotPartition(int x[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
	
	pvt = low + n%(high-low+1);
 
	
	swap(&x[high], &x[pvt]);
 
	return Partition(x, low, high);
}
 

int QS(int x[], int low, int high)
{
	int pindex;
	if(low < high)
	{
		
		pindex = RandomPivotPartition(x, low, high);
		
		QS(x, low, pindex-1);
		QS(x, pindex+1, high);
	}
	return 0;
}
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element which you want to sort: ";
	cin>>n;
 
	int array[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>array[i];
	}
 
	QuickSort(array, 0, n-1);
 
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        	cout<<"=>"<<array[i];
 
	return 0;
}