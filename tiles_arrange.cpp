#include <iostream>
using namespace std;
void count(int n, int &t)
{
    if (n == 0)
    {
        t++;
        return;
    }
    if (n - 2 >= 0)
    {
        count(n - 2, t);
    }
    if (n - 1 >= 0)
    {
        count(n - 1, t);
    }
}
int tilingways(int n)
{
    int t = 0;
    count(n, t);
    return t;
}
int main()
{
   
        int n;
        cin >> n;
        cout << tilingways(n)<<endl;
    

    return 0;
}
