#include <iostream>
using namespace std;
int main() {
	setlocale(0,"");
    int n;    
    cout << "Введите размер последовательности: ";
    cin >> n;
    int minNumber = INT_MAX;
    int count = 0;
 for (int i = 0; i < n; ++i) {
        int number;
        cout << "Введите число " << i + 1 << ": ";
        cin >> number;
        if (number < minNumber) {
            minNumber = number;
            count = 1;
        }
        else if (number == minNumber) {
            count++;
        }
    }  
    cout << "Минимальное число: " << minNumber << endl;
    cout << "Количество повторений: " << count << endl;
    return 0;
}
