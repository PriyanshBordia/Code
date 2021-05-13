#include <stdio.h>

int main()
{
    int c1, c2;
    int x, y;
    int price[4];
    
    scanf("%d %d %d %d\n", &x, &y, &c1, &c2);
    int cherry = y - x;
    
    if ( cherry % 2 == 0)
    {
        price[0] = cherry * c1;
        price[1] = cherry * c2;
    }
    else
    {
        price[2] = (cherry - 1) * c2 + c1;
        price[3] = cherry * c1;
    }
    int min = price[0];
    for (int i = 1; i < 4; i++)
    {
        if (price[i] < min)
            min = price[i];
    }
    printf("%d\n", min);
    
}
