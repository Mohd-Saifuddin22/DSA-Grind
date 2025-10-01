#include <iostream>
#include <vector>
using namespace std;

void printReverse(int index, const vector<int>& arr) {
    if (index < 0) {
        return;
    }
    cout << arr[index] << " ";
    printReverse(index - 1, arr);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "original array= {";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "}" << endl << "reversed array= {";
    if (n > 0) {
        printReverse(n - 1, arr);
    }
    
    cout << "}";
    return 0;
}