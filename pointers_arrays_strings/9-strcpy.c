#include "main.h"
/**
 * reset_to_98 - check the code
 * @n: - input of function
 *
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++ )
{
dest[i] = src[i];
}
dest[i] = '\0';
return(dest);
}
