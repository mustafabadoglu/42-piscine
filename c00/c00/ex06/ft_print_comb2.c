#include <stdio.h>

void ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;
    a =0;
    b=0;
    c=0;
    d=0;
    while(a <='9')
    {
        while(b <='9')
        {
            while(c <='9')
            {
                while(d <='9')
                {
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, & c, 1);
                    write(1, &d, 1);
                        d++;
                }
                c++;
            }   
            b++;
        }
        a++;
    }


}

int main()
{
    ft_print_comb2();
    return 0;
}