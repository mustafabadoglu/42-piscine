#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void)
{
    char i;

    i = '0';
    while(i <= '9')
    {
        write(1, &i, 1);
        i++;
    }
}

