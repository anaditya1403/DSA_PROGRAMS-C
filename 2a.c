#include<stdio.h>
int main()
{
    // int n;
    printf("ADITYA ASHOK NAIK\n");
    printf("ENG24AD0001\n");
    printf("eng24ad0001@dsu.edu.in\n");
    int m,n,p,q;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d",&p,&q);

    if(n!=p)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    int a[m][n],b[p][q],res[m][q];

    printf("Enter the elements of first matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of second matrix: \n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j]=0;
            for(int k=0;k<n;k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("The resultant matrix is: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}   
// This code is contributed by Aditya Ashok Naik.