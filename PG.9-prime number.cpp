#include<stdio.h>
int main()
{
    int num, i, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("\nIt's a prime number");
    else
        printf("\nIt's not a prime number");
    return 0;
}
