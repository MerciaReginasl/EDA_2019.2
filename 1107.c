#include <stdio.h>
void main()
{
    int a, camada, i, j, buracos, ant, temp;
    while (1)
    {
        scanf("%d %d", &a, &camada);
        if (a == 0 && camada == 0)
            break;
        buracos = ant = temp = 0;
        for(i = 0; i < camada; i++){
            scanf("%d", &temp);

            if(a-temp > ant){
                buracos+=(a -temp)-ant;
            }

            ant = a-temp;
        }
        printf("%d\n", buracos);
    }
}
