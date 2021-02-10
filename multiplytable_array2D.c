#include <stdio.h>

int main()
{
    int i, j, arr[10][10];
    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<10 ; j++)
        {
            arr[i][j]=(i+1)*(j+1);
            printf("\t%dx%d=%d", i+1, j+1, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
