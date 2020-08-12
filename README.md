# Assignment3-CS340
first we have to swap the the number of elements which is x and y.
void swap(int *x, int *y)
{
	int temp; 
	temp = *x;
	*x = *y;
	*y = temp;
}
After that we have to divide number of elements on the basis of values at high as pivot value.
and then it will get the index of pivot.
for(i=low; i < high; i++)
	{
		if(x[i] < x[pivot])
		{
			swap(&x[i], &x[index]);
			index++;
		}
	}
and than it will swap the all values at high and at the index which is obtained.
swap(&x[pivot], &x[index]);
In the next function it will rendomly select the pivot. in other words like it will pick any two values and make it groups.
int RandomPivotPartition(int x[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
	// Randomizing the pivot value in the given subpart of array.
	pvt = low + n%(high-low+1);
 
	 
 
	return Partition(x, low, high);
}
Using the following function it will rendomize the pivot values which is the sub part of array.

	pvt = low + n%(high-low+1)
 And using another following function it will swap the pivot values So, the pivot value will be taken as pivot while separating.
	swap(&x[high], &x[pvt])
  In third stage we have to implement the quicksort algoritham.
  After that it will separate the array using randomized pivot.
		pindex = RandomPivotPartition(x, low, high)
    Finally we have to wtite the function for user input and output.
