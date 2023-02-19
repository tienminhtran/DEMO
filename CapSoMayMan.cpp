#include <stdio.h>
#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("D:\\LAPTRINHC\\TINHOCTRE\\CapSoMayMan.INP", "r");
    int n1, n2;
    do
    {
        fscanf(f, "%d%d", &n1, &n2);
        if ((n1 + n2) % 3 == 0)
        {
            printf("(%d, %d)", n1, n2);
        }
    } while (f == NULL);
}