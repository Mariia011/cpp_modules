#include <stdio.h>

int main()
{
	int arr[5] = {0, 1, 2, 3, 4};
	for(int i = 0; i < 5; i++)
		printf("%d", arr[i]);
	printf("\n");
	for(int i = 0; i < 5; i++)
	{	
		int tmp = arr[i];
		arr[i] = arr[4];
		arr[4] = tmp;
		printf("%d", arr[i]);
	}
	return 0;
}
