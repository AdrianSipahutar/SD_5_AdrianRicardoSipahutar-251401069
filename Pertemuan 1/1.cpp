//dynamic array 1
#include <iostream>
using namespace std;

int main(){
    system("cls");
    int var;
    int arra[5];

    // for (int i = 0; i <= 5; i++){
    //     cout << "masukkan nilai array elemn ke -" << i + 1 << ":";
    //     cin >> var;
    //     arr[i] = var;
    // }
    // for (int i = 0; i <= 5; i++){
    //     cout << "Elemen ke-:" << i + 1 << "=" << arr[i]<< "\n";
    // }

    cout << "masukkan ukuran array :";
    cin >> var;

    int* arr = new int[var];


    cout << "masukkan " << var << " angka : \n";
    for (int i = 0; i < var; i++) {
        cin >> arr[i];
    }


    cout << "Isi Array: ";
    for (int i = 0; i < var; i++) {
        cout << arr[i] << " ";
    }

    delete[]arr;
    

    return 0;
}

