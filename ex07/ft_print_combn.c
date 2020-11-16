#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_array(int array[], int index)
{
    int i;

    i = 0;
    while (i <= index) {
        ft_putchar(array[i++] + 48);
    }
}

int my_loop(int prev_values[], int i, int value)
{
    int index;

    index = i + 1;
    prev_values[index] = prev_values[i] + 1;
    while (prev_values[index] <= 9) {
        if (value > 1) {
            my_loop(prev_values, index, value - 1);
        } else {
            ft_print_array(prev_values, i);
            ft_putchar(prev_values[index] + 48);
            ft_putchar(',');
            ft_putchar(' ');
        }
        prev_values[index]++;
    }
}

void ft_print_combn(int n)
{
    int tab[9];
    int i;

    i = 0;
    tab[0] = 0;
    if (n > 0 && n < 10)
    {
        n--;
        while ( tab[0] <= 9) {
            my_loop(tab, i, n);
            tab[0]++;
        }
        ft_putchar('\n');
    }

}
