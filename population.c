#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int st;
    do
    {
        st = get_int("Start size: ");
    }
    while (st < 9);

    // TODO: Prompt for end size
    int ed;
    do
    {
        ed = get_int("End size: ");
    }
    while (ed < st);

    // TODO: Calculate number of years until we reach threshold
    int x = st;
    int cont = 0;
    while (x < ed)
    {
        x = x + (x / 3) - (x / 4);
        cont++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", cont);
}
