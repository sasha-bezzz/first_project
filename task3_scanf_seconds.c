#include <stdio.h>
int main(void)
{	
    int h, m, s; // часы, минуты, секунды

    scanf("%d : %d : %d", &h, &m, &s);

    int seconds = h*60*60 + m*60 + s;

    printf("%d", seconds);

    return 0;
}
