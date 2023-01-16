/*���ʵ�ڲ����ˣ��ò�������ƭ�ɣ��������92�н��ж� 
�������������н� 
*/
#include <stdio.h>

int count = 1;

int notdanger(int row,int j,int (*chess)[8])
{
    int i,k;
    int flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0,flag5 = 0;

    for(i = 0; i < 8; i++) //�ж��з����Ƿ�������
    {
        if( *(*(chess+i)+j) != 0 )
        {
            flag1 = 1;
            break;
        }
    }

    for(i = row,k = j; i >= 0 && k >= 0; i--,k--) //�ж����Ϸ��Ƿ�������
    {
        if(  *(*(chess+i)+k) != 0)
        {
            flag2 = 1;
            break;
        }
    }

    for(i = row,k = j; i < 8 && k < 8; i++,k++) //�ж����·��Ƿ�������
    {
        if(  *(*(chess+i)+k) != 0)
        {
            flag3 = 1;
            break;
        }
    }

    for(i = row,k = j; i >= 0 && k < 8; i--,k++) //�ж����Ϸ��Ƿ�������
    {
        if(  *(*(chess+i)+k) != 0)
        {
            flag4 = 1;
            break;
        }
    }

    for(i = row,k = j; i < 8 && k >= 0; i++,k--) //�ж����·��Ƿ�������
    {
        if(  *(*(chess+i)+k) != 0)
        {
            flag5 = 1;
            break;
        }
    }

    if(flag1 || flag2 || flag3 || flag4 || flag5)
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}

void EightQueens(int row,int n,int (*chess)[8])  //row��ʾ��ǰ���е��ڼ��У�n����������chess��ʾָ��ĳһ�е�ָ��
{
    int chess_temp[8][8],i,j;

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            chess_temp[i][j] = chess[i][j];
        }
    }

    if( 8 == row )  //�ݹ����
    {
        printf("��%d��\n",count++);

        for(i = 0; i < 8; i++)
        {
            for(j = 0; j < 8; j++)
            {
                printf("%d ",*(*(chess_temp+i)+j));
            }
            printf("\n");
        }
        printf("\n");
    }
    else 
    {
        for(j = 0; j < n; j++) 
        {
            if( notdanger(row,j,chess))
            {
                for(i = 0; i < 8; i++)
                {
                    *(*(chess_temp+row)+i) = 0;  //����һ�е�����λ�ø�ֵΪ0
                }
                *(*(chess_temp+row)+j) = 1;  //�����λ�ø�ֵ1

                EightQueens(row+1,n,chess_temp);  //�ݹ����
            }
        }
    }

}

int main(int argc, char *argv[])
{
    int chess[8][8] = {0};

    EightQueens(0,8,chess);
    
    return 0;
}


