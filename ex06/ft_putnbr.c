#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    int tmp;
    int answers[10];
    int i;

    i = 0;
    if (n < 0) {
        n *= -1;
        ft_putchar('-');
    }
    tmp = n;
    while ( tmp > 0 ) {
        answers[i++] = tmp % 10;
        tmp /= 10;
    }

    while ( i > 0)
    {
        ft_putchar(answers[--i] + 48);
    }
    ft_putchar('\n');
}
