#include <iostream>
using namespace std;

int main(void)
{
    int n = 0, num ,x[] = {0, };

    cin >> n;
    cin >> num;
    x[n];

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(x[i] < num)
        {
            cout << x[i];
        }
    }
}
