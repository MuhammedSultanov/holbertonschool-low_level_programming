#include "main.h"
/**
 * _strcat - check the code
 * @dest: - input of function
 * @src: - src
 *
 */
char *_strcat(char *dest, char *src)
int a = 0, b = 0;

for(a=0; dest[a]!='\0'; ++a)
{
for(b=0; src[b]!='\0'; ++b, ++a)
{
dest[a]=src[b];
}
}
dest[a]='\0';
return(dest);
}
