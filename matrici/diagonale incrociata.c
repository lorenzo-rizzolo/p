#include <stdio.h>

main()
{
    int b,r,c;
    
    printf("inserire dimensione matrice:");
    scanf("%d", &b);
    printf("l matrice è %dx%d\n", b, b);
    
    for(r=0;r<b;r++)
    {
        for(c=0;c<b;c++)
        {
            if(r+c==b-1 || r==c)
            {
                printf("1 ");

            }
            else
            {
                printf("0 ");
            }

        }
        printf("\n");
    }



}