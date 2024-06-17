#include <bits/stdc++.h>
using namespace std;

void pattern6(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
          cout << " *";
        }
        for (int j = 0; j < N - i - 1; j++)
        {
          cout << "  ";
        }
        cout << endl;
    }
}

void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * N - (2 * i + 1); j++)
        {
          cout << " *";
        }
        for (int j = 0; j < i; j++)
        {
          cout << "  ";
        }
        cout << endl;
    }
}


int main()
{   
    int N;
    
    cin >> N;

    pattern7(N);
    
    pattern6(N);

    return 0;
}