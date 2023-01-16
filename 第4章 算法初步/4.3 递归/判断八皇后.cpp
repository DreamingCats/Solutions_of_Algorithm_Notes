/*这个实在不会了，拿测试用例骗吧，或者穷举92中解判断 
下面代码输出所有解 
*/
#include <stdio.h>

int count = 1;

int notdanger(int row,int j,int (*chess)[8])
{
    int i,k;
    int flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0,flag5 = 0;

    for(i = 0; i < 8; i++) //判断列方向是否有棋子
    {
        if( *(*(chess+i)+j) != 0 )
        {
            flag1 = 1;
            break;
        }
    }

    for(i = row,k = j; i >= 0 && k >= 0; i--,k--) //判断左上方是否有棋子
    {
        if(  *(*(chess+i)+k) != 0)
        {
            flag2 = 1;
            break;
        }
    }

    for(i = row,k = j; i < 8 && k < 8; i++,k++) //判断右下方是否有棋子
    {
        if(  *(*(chess+i)+k) != 0)
        {
            flag3 = 1;
            break;
        }
    }

    for(i = row,k = j; i >= 0 && k < 8; i--,k++) //判断右上方是否有棋子
    {
        if(  *(*(chess+i)+k) != 0)
        {
            flag4 = 1;
            break;
        }
    }

    for(i = row,k = j; i < 8 && k >= 0; i++,k--) //判断左下方是否有棋子
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

void EightQueens(int row,int n,int (*chess)[8])  //row表示当前进行到第几行，n便是列数，chess表示指向某一行的指针
{
    int chess_temp[8][8],i,j;

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            chess_temp[i][j] = chess[i][j];
        }
    }

    if( 8 == row )  //递归结束
    {
        printf("第%d种\n",count++);

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
                    *(*(chess_temp+row)+i) = 0;  //将这一行的所有位置赋值为0
                }
                *(*(chess_temp+row)+j) = 1;  //将这个位置赋值1

                EightQueens(row+1,n,chess_temp);  //递归调用
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


