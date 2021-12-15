#include <stdio.h>

main()
{
    int v[2][2];
    int c, r,num;

  
    
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("inserire numero: ");
            scanf("%d", &num);
            if(num%2==0)
            {
                v[r][c]=num;
            }
            else
            {
                c--;
            }
        }
        
    }

    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            
            printf("%d ", v[r][c]);

        }
        
        printf("\n");
    }
    

}