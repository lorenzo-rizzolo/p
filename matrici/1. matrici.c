#include <stdio.h>

main()
{
    int Ma[2][3];
    int a, i, f;

    for(i=0;i<2;i++)
    {
        for(a=0;a<3;a++)
        {
            printf("inserire numero: ");
            scanf("%d", &Ma[i][a]);
        }
        
    }

    for(i=0;i<2;i++)
    {
        for(a=0;a<3;a++)
        {
            f=(Ma[i][a])*(Ma[i][a]);
            printf("%d ", f);

        }
        
        printf("\n");
    }

}