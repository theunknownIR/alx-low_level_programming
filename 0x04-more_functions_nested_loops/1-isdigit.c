#include "main.h"
/**
*_isdigit - function that checks for a digit (0 through 9)
*@c: tested input
*Return: returns 1 if it is digit , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
