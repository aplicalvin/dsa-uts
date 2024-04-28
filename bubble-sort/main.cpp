#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel.
    int temp;
    // Deklarasi Array
    int size = 5; 
    int Arr[size] = {12,7,9,11,3};

    // output array sebelum di sorting
    cout << "Array sebelum di sorting : ";
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;

    // Prosess
    for(int g = 0; g < size; g++) {
        for(int j = 0; j < size; j++) {
            if (Arr[j] > Arr[j+1]) {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }


    // Output hasil setelah di sorting
    cout << "Array setelah di sorting : ";
    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }
    cout << endl;


    return 0;
}