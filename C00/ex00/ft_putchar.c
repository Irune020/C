#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putchar2()
{
    write(1, "\n", 1);
}

int main()
{
    char letra = 'a';
    ft_putchar(letra);
    ft_putchar2();
}
