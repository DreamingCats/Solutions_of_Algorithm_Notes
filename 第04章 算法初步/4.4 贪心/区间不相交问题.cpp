//总是先选择左端点最大的区间 
 
#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 10001;

struct openInterval
{
    int x, y;
    bool operator< (const openInterval &a) const
    {
        if (a.x != x) return x > a.x;
        else return y < a.y;
    }
    
}I[MAXN];

int main()
{
    int n;

    cin>>n;
    
    for (int i = 0; i < n; i ++)
            cin>>I[i].x>>I[i].y;
    
    sort(I, I + n);
    
    int cnt = 0, lastX = 100001;
    for (int i = 0; i < n; i ++)
        if (I[i].y <= lastX)
        {
            lastX = I[i].x;
            cnt ++;
        }
    
    cout<<cnt;
    
    return 0;
}
