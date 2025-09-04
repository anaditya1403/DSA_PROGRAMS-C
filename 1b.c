#include<stdio.h>
#include<ctype.h>
int main()
{
    char reg[11];
    int i, valid = 1;
    printf("ADITYA ASHOK NAIK\n");
    printf("ENG24AD0001\n");
    printf("eng24ad0001@dsu.edu.in\n");
    printf("Enter the registration number: ");
    scanf("%s", reg);
    for(i = 0; i<2 ; i++)
    {
        if(!isalpha(reg[i]) || !isupper(reg[i]))
        {
            valid = 0;
            break;
        }
    }
    for(i = 2; i<4 ; i++)
    {
        if(!isdigit(reg[i]))
        {
            valid = 0;
            break;
        }
    }
    for(i = 4; i<6 ; i++)
    {
        if(!isalnum(reg[i]) || !isupper(reg[i]))
        {
            valid = 0;
            break;
        }
    }
    for(i = 6; i<10 ; i++)
    {
        if(!isdigit(reg[i]))
        {
            valid = 0;
            break;
        }
    }
    if(valid && reg[10] == '\0')
        printf("Valid registration number\n");
    else
        printf("Invalid registration number\n");
    return 0;
}
// This code is contributed by Aditya Ashok Naik.