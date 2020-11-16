#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_answers(char a, char b, char c)
{
    ft_putchar(a + 48);
    ft_putchar(b + 48);
    ft_putchar(c + 48);
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb(void)
{
    char first_nbr;
    char second_nbr;
    char third_nbr;

    first_nbr = 0;
    while (first_nbr <= 9) {
        second_nbr = first_nbr + 1;
    while (second_nbr > first_nbr && second_nbr <= 9) {
        third_nbr = second_nbr + 1;
    while (third_nbr > second_nbr && third_nbr <= 9) {
        ft_print_answers(first_nbr, second_nbr, third_nbr);
        third_nbr++;
    }
        second_nbr++;
    }
        first_nbr++;
    }
    ft_putchar('\n');
}
