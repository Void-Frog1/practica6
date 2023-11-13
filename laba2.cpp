#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
    int n;
    cout << "Введите значение n: ";
    cin >> n;   
    int sum = (n * (n + 1)) / 2;    
    cout << "Сумма чисел от 1 до " << n << " равна: " << sum << endl;
    return 0;
}
