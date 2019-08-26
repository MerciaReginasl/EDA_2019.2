#include <stdio.h>
#include <string.h>

int main()

{

    char str1[1000],str2[1000];

    int i,j,k,l,m;

    scanf("%d",&m);

    getchar();

    while(m--)

    {

        gets(str1);

        j = strlen(str1);

        k=0;

        for(i=0;i<j;i++)

        {

            if(i == 0 && str1[0]!=' ') {

               str2[k] = str1[0];

               k++;

            }

           if(str1[i]==' ' && str1[i+1] == ' ')

            continue;


           if(str1[i]==' ' && str1[i+1] != ' ')

                {

                   str2[k] = str1[i+1];

                   k++;

                }



        }

        str2[k] = '\0';

        printf("%s\n",str2);
        
      
    }

}
