#include <bits/stdc++.h>
using namespace std;

void pattern5(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j < N - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{   
    int N;
    
    cin >> N;

    pattern5(N);

    return 0;
}