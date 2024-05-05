
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    cout << "enter elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mode, number, max, count;
    max= 0;
    for (int i = 0; i < n; i++) {
        number = arr[i];
        count = 0;
        for (int j = 0; j < n; j++) {
            if (number == arr[j]) {
                count++;
            }
            if (count > max) {
                max = count;
                mode = number;
            }
        }
    }

    cout << "frequency of the no." << max << " mode" << mode << endl;
    return 0;
}

