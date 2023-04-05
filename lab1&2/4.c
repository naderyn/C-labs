#include <stdio.h>

int main() {

    int x,y,z;

    printf("Enter two integers:");
    scanf("%d %d",&x,&y);

    z=x+y;

    printf("%d+%d=%d", x, y, z);
    return 0;
}
