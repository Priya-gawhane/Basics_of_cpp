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

void pattern9(int N)
{
    for (int i = 1; i <= 2 * N - 1; i++)
    {
        int stars = i;
        if (i > N) stars = 2 * N - i;
        for (int j = 1; j <= stars; j++)
        {
          cout << " *";
        }
        cout << endl;
    }
}

int main()
{   
    int N;
    
    cin >> N;

    pattern9(N);

    return 0;
}