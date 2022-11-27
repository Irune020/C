#include <unistd.h>

void ft_print_numbers(void)
{
    int number;
    number = '0';

    while(number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
}

int main()
{
    ft_print_numbers();
}

/*void ft_print_numbers2(void)
{
    write(1, "0123456789", 10);
}*/