#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{   
    int query;
    cin >> query;

    set<int> s;
    for (int i = 0; i < query; i++)
    {
        int x, y;
        cin >> y >> x;
        
        if (y == 1)
        {
        	s.insert(x);
        }

        if (y == 2)
        {
        	s.erase(x);
        }
        
        if (y == 3)
        {
            auto itr = s.find(x);
            if (itr == s.end())
                cout << "No\n";
            else 
                cout << "Yes\n";
        }
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



