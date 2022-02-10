#include <stdio.h>
#include <string.h>
void input_string(char *a)
{
    printf("enter the string\n");
    scanf("%s", a);
}
void str_reverse(char *a, char *re)//actually u cant do it like that .
{
    int n = strlen(a);

    for (int i = 0, j = n - 1; j >= 0; i++, j--)
    {
        re[i] = a[j];
    }
    re[n] = '\0';
}
void output(char *a, char *re)
{
    printf("the reverse of %s is %s\n", a, re);
}
int main()
{
    char a[10], re[10];
    input_string(a);
    str_reverse(a, re);
    output(a, re);
    return 0;
}