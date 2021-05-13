#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a = 0;
    double b = 0;
    char c[50];
    char z;

    // Read and save an integer, double, and String to your variables.
    scanf("%d", &a);
    scanf("%lf", &b);
    scanf("%c", &z);
    scanf("%[^\n]%s", c);

    // Print the sum of both integer variables on a new line.
    a += i;
    printf("%d\n", a);

    // Print the sum of the double variables on a new line.
    b += d;
    printf("%.1lf\n", b);

    // Concatenate and print the String variables on a new line
    char conk[250];
    strcpy(conk ,s);
    strcat(conk, c);

    printf("%s\n", conk);
    // for (int j = 0; conk[j] != '\0'; j++)
        // printf("%c", conk[j]);

    return 0;
}
