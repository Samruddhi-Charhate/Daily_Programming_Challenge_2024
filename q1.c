#include<stdio.h>
int main()
{
	int arr[10],n;
	printf("Enter the number of elements : " );
	scanf("%d",&n);
	printf("Array elements : \n");
	for(int i=0;i<n;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	int low = 0, mid = 0, high = n - 1;

    
   	while (mid <= high)
	{
        	if (arr[mid] == 0)
		{
			int temp = arr[low];
           	 	arr[low] = arr[mid];
            		arr[mid] = temp;
            		low++;
            		mid++;
       		} 
		else if (arr[mid] == 1)
		{
           		 mid++;
       		} 
		else
		{
            		int temp = arr[mid];
            		arr[mid] = arr[high];
            		arr[high] = temp;
            		high--;
        	}
	}
	
	printf("\nSorted array : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
	
	return 0;
}
	
	
