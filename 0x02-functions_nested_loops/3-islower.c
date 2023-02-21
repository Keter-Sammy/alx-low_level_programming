#include "main.h"
/**
*_islower - controls if a character is in lowercase
*
*Return: return 1 if c is lower, 0 otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
