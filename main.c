#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
���������ȷ��һ��0~99���������
���������������
���û�¶Գ���͸�������ʾ��
����¶��ˣ���Ϸ�ͽ�����
*/

int main()
{
    int comp = 0;
    int user = -1;

    srand(time(NULL));
    comp = rand()%100;

    printf("��Ϸ��ʼ��0~99�¸�����\n");

    while(1)
    {
        scanf("%d", &user);
        if(user == comp)
            break;
        else if(user < comp)
            printf("������\n");
        else if(user > comp)
            printf("̫...̫���ˣ�\n");
    }

    printf("��¶��ˣ���Ϸ����\n");

    while(getchar());
    return 0;
}
