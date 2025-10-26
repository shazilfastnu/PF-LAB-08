#include<stdio.h>
int main (){
    int i,j,n;
    int identitymatrix = 1;
    printf("Enter Number of students.\n");
    scanf("%d",&n);
    int matrix[n][n];
    printf("Enter 1 if student is sitting on correct seat else enter 0.\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if ( i == j && matrix[i][j] != 1 )
            {
                identitymatrix = 0;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                identitymatrix = 0;
                break;
            }
        }
        if (identitymatrix = 0)
        break;
    }
    if (identitymatrix =1)
    printf("This is an Identity matrix, Everybody is sitting on correct seat.\n");
    else{
    printf("This is not an Identity matrix.Students are not sitting according to their seat no's.");
    }
    
    return 0;
}