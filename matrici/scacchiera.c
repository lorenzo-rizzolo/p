#include <stdio.h>

int main()
{
    int v[5][5];
    int c, r,num ,f;

    printf("scacchiera matrice partendo da 0.\n");
    v[0][0]=0;
    
    
    for(r=0;r<5;r++)
    {
        for(c=1;c<=5;c++)
        {
            printf("inserire numero: ");
            scanf("%d", &num);
            if(num==0 || num==1)
            {
                f=c-1;
                if(num!=v[r][f])
                {
                    printf("102");
                    v[r][c]=num;
                }
                else
                { 
                    printf("non e' una scacchiera.");
                    return 0;
                }
                
            }
            else
            { 
                printf("non e' una scacchiera.");
                return 0;
            }
        }
        
    }

    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            
            printf("%d ", v[r][c]);

        }
        
        printf("\n");
    }
    printf("E' una scacchiera.");
    
return 0 ;
}
