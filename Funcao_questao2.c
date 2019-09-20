#include <stdio.h>

char *strrchr2(char *str, char c)
{
    int i;
    char *aloca =NULL;
    for (i = 0; str[i] != '\0'; i++) {
	
		if (str[i] == c) aloca = &str[i];
   }	
    return aloca;
}
void main()
{
    char *point = strrchr2("mmmmms", 's');
    printf("%p aponta para %c\n", point, *point);

    point = strrchr2("mmmmms", 'a');
    printf("%p aponta para %c\n", point, *point);

    
    point = strrchr2("mmms", 'c');
    printf("%p\n", point);
    
    
}
