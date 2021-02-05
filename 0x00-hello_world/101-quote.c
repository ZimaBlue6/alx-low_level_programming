#include <stdio.h>
#include <unistd.h>
/**
 *main - using anything but printf and puts
 *Return: Always 1
 */

int main(void)
{
char _g[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, _g, sizeof(_g));
return (1);
}
