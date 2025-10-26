#include<stdio.h>
int main (){
    int i,j,n,m;
    int zerocount = 0;
    int nonzerocount =0;
    printf("Enter the dimensions of your matrix.\n");
    scanf("%d",&n);
    printf("*\n");
    scanf("%d",&m);
    int matrix[n][m];

    for ( i = 0; i < n; i++)
    {
        printf("Enter elements for row %d\n",i+1);
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&matrix[i][j]);
            if (matrix[i][j] == 0)
            {
                zerocount += 1;
            }
            else
            {
                nonzerocount += 1;
            }
        }
        printf("\n");
    }

    if (zerocount > nonzerocount)
    {
        printf("This is a sparse matrix.\n");
    }
    else if ( nonzerocount > zerocount)
    {
        printf("This is a dense matrix.\n");
    }
    else {
        printf("The matrix is neither sparse nor dense.");
    }
    return 0;
}