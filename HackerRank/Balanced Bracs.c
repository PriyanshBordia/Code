#include <stdio.h>

void push(char ch);
char pop();

int top;
char stack[1000];

int main()
{
    int ans = -1;
    char s[1000];

    push('#');

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", s);

        int j = 0;
        char c = s[j++];
        while (c != '\0')
        {
            if (c == '{' || c == '[' || c == '(')
            {
                push(c);
                ans = 0;
            }

            else if (c == '}')
            {
                char temp = pop();
                if (temp == '{')
                    ans = 1;
                else
                {
                    ans = 0;
                    break;
                }
            }

            else if (c == ']')
            {
                char temp = pop();
                if (temp == '[')
                    ans = 1;
                else
                {
                    ans = 0;
                    break;
                }
            }

            else if (c == ')')
            {
                char temp = pop();
                if (temp == '(')
                    ans = 1;
                else
                {
                    ans = 0;
                    break;
                }
            }

            c = s[j++];

        }

        if (ans == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

}

void push(char ch)
{
    stack[top++] = ch;
}

char pop()
{
    return stack[--top];
}
