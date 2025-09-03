#include<stdio.h>
int main()
{
    int n;
    printf("ADITYA ASHOK NAIK\n");
    printf("ENG24AD0001\n");
    printf("eng24ad0001@dsu.edu.in\n");        
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of the array: \n",n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The elements stored in the array are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }   
    
    return 0;   
}

// This code is contributed by Aditya Ashok Naik.