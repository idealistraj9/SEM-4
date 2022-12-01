#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = 0;
        while (x < 5)
        {
            int d = a ^ x + b ^ x;
            int e = c ^ x;
            if (d == e)
            {
                cout << "YES" << endl;
                break;
            }
            else{
                x++;
            }
        }
        if (x == 5){
            cout << "NO" << endl;
        }
    }
}