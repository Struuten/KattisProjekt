#include <iostream>

using namespace std;

int main()
{
    int G;
    int N;
    int pos{2};
    int a;
    int b;
    cin >> G;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        cin >> b;
        if (pos==a)
        {
            pos = b;
            continue;
        }
        if(pos==b) pos = a;

    }
    if (pos != G) {
        cout << pos << endl << G;
        return 0;
    }
    else{
        if (G != 1) cout << 1 << endl;
        if (G != 3) cout << 3 << endl;
        if (G != 2) cout << 2 << endl;
    }
}