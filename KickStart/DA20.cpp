#include <iostream>

using namespace std;

int main()
{
   int t; cin >> t;

   for (int j = 1; j <= t; j++)
    {
        int N;
        cin >> N;
    
        int a[N];
        for (int i = 0; i < N; i++)
            cin >> a[i];
    
    	int ans = 0;
        int max = a[0];

    	if (N == 1)
    		ans++;

    	else
		{    
	        for (int i = 0; i < N - 1; i++)
	        {
	        	if ((i == 0) && (a[0] > a[1]))
	            	ans++;

	            else if (a[i] > a[i + 1] && a[i] > max)
	            {
	                max = a[i];
	                ans++;
	            }

	            if (a[i] > max)
	                max = a[i];
	        }
	        
	        if (a[N - 1] > max)
	            ans++;
		}        

        cout << "Case #" << j << ": " << ans << endl;
    }
    return 0;
}