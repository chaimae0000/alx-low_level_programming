#include"main.h"
 /**
   * The strlen(): function calculates the length of the string pointed to by s
   * @s: string
   * Return: length of string
   */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
