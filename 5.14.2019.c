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
       // printf("1b%d\n", p[b]);
      //  printf("1z%d\n", p[z]);
        int a = p[b];
        p[b] = p[z];
        p[z] = a;
        //printf("2b%d\n", p[b]);
       // printf("2z%d\n", p[z]);
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