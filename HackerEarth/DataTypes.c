

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
    char c[100];

    // Read and save an integer, double, and String to your variables.
    printf("Enter int: ");
    scanf("%d", &a);
    printf("Enter number: ");
    scanf("%lf", &b);
    printf("Enter String: ");
    scanf("%s", c);
    printf("%s\n", c);

    a += i;
    b += d;

    char conk[200];
    strcpy(conk ,s);
    strcat(conk, c);

    // Print the sum of both integer variables on a new line.
    printf("%d\n", a);

    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", b);

    // Concatenate and print the String variables on a new line
    for (int j = 0; conk[j] != '\0'; j++)
        printf("%c", conk[j]);
    
    printf("\n");

    return 0;
}
