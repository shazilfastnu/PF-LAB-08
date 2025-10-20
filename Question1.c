#include<stdio.h>
int main (){
    int quarter1[3][1] = {{2000},{4000},{2000}};
    int quarter2[3][1] = {{3000},{7000},{9000}};
    int combinedsales[3][1];
    int i,j, totalsales = 0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 1; j++)
        {
            printf("Quarter 1 month %d : %d",i+1,quarter1[i][j]);
        }
        printf("\n");
        
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 1; j++)
        {
            printf("Quarter 2 month %d : %d",i+1,quarter2[i][j]);
        }
        printf("\n");
    }
    

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 1; j++)
        {
            combinedsales[i][j] = quarter1[i][j] + quarter2[i][j];
            totalsales = totalsales + combinedsales[i][j]; 
        }
    }
    printf("Total sales of both quarters = %d",totalsales);
    
    return 0;
}