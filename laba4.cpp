#include <iostream>
using namespace std;
int main() {
	setlocale(0, ""); 
    const int MAX_SIZE = 100; 
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    if (n <= 0 || n > MAX_SIZE) {
        cout << "Некорректный размер массива." << endl;
        return 1;
    }
    int X[MAX_SIZE];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "X[" << i << "]: ";
        cin >> X[i];
    }
    int maxElement = X[0];
    int minElement = X[0];
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (X[i] > maxElement) {
            maxElement = X[i];
            maxIndex = i;
        }
        if (X[i] < minElement) {
            minElement = X[i];
            minIndex = i;
        }
    }   
    cout << "Максимальный элемент: " << maxElement << " (индекс " << maxIndex << ")" << endl;
    cout << "Минимальный элемент: " << minElement << " (индекс " << minIndex << ")" << endl;
    return 0;
}
