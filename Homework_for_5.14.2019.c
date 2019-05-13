#include <stdio.h>
void print(int *p, int size)
{
    for (int i = 0; i <= size; i++)
    {
        printf("%d\n", p[i]);
    }
}
void reverse(int *p, int size)
{
    int b = 0;
    int z = size;
    while (1)
    {
        if (b >= z)
        {
            return;
        }
        int a = p[b];
        p[b] = p[z];
        p[z] = a;
        b++;
        z--;
    }
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = (sizeof(a) / sizeof(int)) - 1;
    reverse(a, i);
    print(a, i);
}