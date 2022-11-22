#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, *arr, *backupArr, i;
	
	scanf("%d", &num);
	
	arr = (int *) malloc(num*sizeof(int));
	backupArr = (int *)malloc(num*sizeof(int));
	
	for(i = 0; i < num; i++) 
	{
		scanf("%d", arr + i);
		
		*(backupArr + i) = *(arr + i);
	}
	
	/* Write the logic to reverse the array. */
	for(i = 0; i < num; i++)
		*(arr + i) = *(backupArr + num - 1 - i);
	
	for(i = 0; i < num; i++)
		printf("%d ", *(arr + i));
	
	free(arr);
	free(backupArr);
	
	return 0;
}
