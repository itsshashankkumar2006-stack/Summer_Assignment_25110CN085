#include <stdio.h>

int main()
{
    int start, end, i, j, prime;

    printf("enter starting number: ");
    scanf("%d", &start);
    
    
    printf("enter ending number: ");
    scanf("%d", &end);
    {
        prime = 1;

        if(i <= 1)
            prime = 0;
        
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
            
        }
        
        if(prime == 1)
        {

            printf("%d ", i);
        }    

    
    }


    return 0;
}
    
    
