#include <stdio.h>
int string_copy(char *a, char *b)
{
    int i = 0;
    while (a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i]=a[i];
    return ++i;
}
int main()
{
    char a[7] = "hello\n";
    char b[7];
    int length = string_copy(a, b);
    printf("%d %s", length, b);
}
