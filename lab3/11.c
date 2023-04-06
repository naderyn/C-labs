#include <stdio.h>
#include <stdlib.h>

// 1- C Program to take an array elements from user, then print them out "using 2 for loops". (Print Array)

int main()
{

  int i , arrSize;


    printf("Input the size of the array :");

    scanf("%d",&arrSize);

    int arr[arrSize];

    printf("Input %d elements in the array :\n",arrSize);

       for(i=0; i<arrSize; i++)
            {
	      printf("element - %d : ",i);

	      scanf("%d",&arr[i]);
	    }

  printf("Content of the array - \n");

  for(i=0; i<arrSize; i++)
  {
    printf("%d ",arr[i]);
  }

  return 0;
}
