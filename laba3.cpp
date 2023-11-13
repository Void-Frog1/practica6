#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int n = 15;
    int i;
    int chet;
    cout << "15!=";
    chet = 1;
    for (int i = 1; i<=n; i++)
    {
        chet = chet * i;
    }
    cout<< chet;
    return 0;
}
