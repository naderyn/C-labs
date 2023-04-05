#include <stdlib.h>

int main()
{

    int sum  , value =0;

    while(sum < 100)
    {

        printf("enter new number:");

        scanf("%d", &value);

        sum = sum + value;

        printf("\n The sum is %d.", sum);


    }

    return 0;

}
