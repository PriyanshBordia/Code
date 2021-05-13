#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;

    int i = 0;
    while (temp != 0)
    {
        int z = pow(2, i);
        temp = temp / z;

        i++; 
    }

    int v[i];

    for (int k = i-1; k >= 0; k--)              
    {                                           
        int div = pow(2, k);                    
        if (temp % div == 0)
            v[k] = 1;
        else
            v[k] = 0;
        temp = temp / div;
    }

    int j = 0;
    int count = 0;
    int max_count = 0;

     
    
    // while (j < i)
    // {
    //     if (v[j] == 1 && j == i-1)
    //     {
    //         count++;
    //         max_count = count;
    //     }
    //     else if (v[j] == 1)
    //     {
    //         count++;
    //     }
        
    //     else
    //     {
    //         max_count = count;
    //         count = 0;
    //     }
            
    //     j++;
    // }
    
    cout << max_count <<"\n";

    return 0;
}