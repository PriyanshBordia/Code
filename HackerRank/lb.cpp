#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> vect;
vector<int> q;
long int n;

void filling(vector<int> &v, int N);
int checking(int a);

int main() 
{
    cin >> n;

    filling(vect, n);
    int query;
    cin >> query;

    filling(q, query);

    for (int i = 0; i < query; i++)
    {
        auto itr = lower_bound(vect.begin(), vect.end(), q[i]);
        int lower = (itr - vect.begin());

        if (checking(q[i]))
        {        
            cout << "Yes "; 
        }
        else
        {
            cout << "No ";      
        }
        cout << lower+1 << "\n";
    }
    
    return 0;
}

void filling(vector<int> &v, int N)
{
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}


int checking(int a)
{
    int count = 0;
    for (int i = 0; i < n && vect[i] <= a; i++)
    {        
        if (vect[i] == a)
        {
            count++;
            break;
        }
    }

    if (count > 0)
        return  1;
    else 
        return 0;
}
