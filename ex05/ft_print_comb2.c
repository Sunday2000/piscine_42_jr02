#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_answers(char c[])
{
    ft_putchar(c[0] + 48);
    ft_putchar(c[1] + 48);
    ft_putchar(' ');
    ft_putchar(c[2] + 48);
    ft_putchar(c[3] + 48);
    ft_putchar(',');
    ft_putchar(' ');
}

void ft_print_comb2(void)
{
    char comb[4];

    comb[0] = 0;
    while (comb[0] <= 9) {
        while (comb[1] <= 9) {
            comb[3] = comb[1] + 1;
            while (comb[2] <= 9) {
                while (comb[3] <= 9) {
                    if ( comb[2] * 10 + comb[3] > comb[0] * 10 + comb[1] )
                        ft_print_answers(comb);
                        comb[3]++; }
                comb[2]++;
                comb[3] = 0;
            }
            comb[1]++;
            comb[2] = 0;
        }
        comb[0]++;
        comb[1] = 0;
    }
    ft_putchar('\n');
}
