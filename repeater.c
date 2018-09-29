#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Ver 1.1 by Marshmallow
void fudu(void);
int main(void)
{
    double power=100.00000;
    double addpower;
    printf("此时一位复读机高调经过\n");
    while (1)
    {
       fudu();
       srand((unsigned)time(0));
       power=power-(rand()%100+1)/10;
       if (power<1)
       {
            printf("复读机低电量！要充电吗？（输入0不充电）\n");
            scanf ("%lf",&addpower);
            power=power+addpower;
       }
        if (power<1)
            break;
    }
    return 0;
}
void fudu(void)
{
    printf("小火汁，想不到你也是个复读机\n");
}
