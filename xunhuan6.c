#include<stdio.h>
int main()
{
    int n, b = 0, i = 0;
    char a;                        
    scanf("%d %c", &n, &a);
       for ( i= 0; i < n;i++)
    {
        if(2*i*i-1>n)
        {
            i = i - 1; break;
        }
    }                            
    n = n - 2*i * i + 1;         
    
    for (int j = i; j > 0; j--)
    {
        for (int k = 0; k < i - j; k++)
        {
            putchar(' ');
        }
        for (int k = 1; k < 2 * j; k++)
        {
            printf("%c", a);
        }
        printf("\n");
    }                                      
    
    for (int j = 2; j <= i; j++)
    {
        for (int k = 0; k < i - j; k++)
        {
            putchar(' ');
        }
        for (int k = 1; k < 2 * j; k++)
        {
            printf("%c", a);
        }
        printf("\n");
    }                                  
    printf("%d", n);                   
    return 0; 
}