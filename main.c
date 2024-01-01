#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
程序先随机确定一个0~99的随机数。
我们来猜这个数字
如果没猜对程序就给我们提示。
如果猜对了，游戏就结束。
*/

int main()
{
    int comp = 0;
    int user = -1;

    srand(time(NULL));
    comp = rand()%100;

    printf("游戏开始，0~99猜个数字\n");

    while(1)
    {
        scanf("%d", &user);
        if(user == comp)
            break;
        else if(user < comp)
            printf("不够大！\n");
        else if(user > comp)
            printf("太...太大了！\n");
    }

    printf("你猜对了！游戏结束\n");

    while(getchar());
    return 0;
}
