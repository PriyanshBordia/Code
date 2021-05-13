#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int j = 1; j <= t; j++)
    {
        int N;
        cin >> N;
    
        int a[N];
        for (int i = 0; i < N; i++)
            cin >> a[i];

        int ans = 0;

        cout << "Case #" << j << ": " << ans << endl;
    }

    return 0;
}