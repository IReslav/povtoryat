#include <stdio.h>

int main()
{
    char Text[] = "Hello, World!";
    int i = 1;

    while (i < 1000) {
        printf("%i %s %s \n", i, ".", Text);
        i++;
    }

return 0;
}
