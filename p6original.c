#include <stdio.h>
#include <stdlib.h>
void input_string(char a[])
{
    printf("Enter the word\n");
    scanf("%s", a);
}
char *str_reverse(char a[])
{
    char *s;
    s=(char *)malloc(15 *sizeof(char));
    int c=0,i;
    for(i=0;a[i]!='\0';i++)
        c++;
    c-=1;
    for(i=0;a[i]!='\0';i++)
        s[i]=a[c-i];
    return s;
}
void output(char a[], char *rev)
{
    printf("The reverse of word %s is %s\n",a,rev);
}
int main()
{
    char a[15], *r;
    input_string(a);
    r = str_reverse(a);
    output(a, r);
    return 0;
}