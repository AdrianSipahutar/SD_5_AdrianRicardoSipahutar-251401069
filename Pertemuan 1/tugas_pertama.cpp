#include <iostream>
using namespace std;

int main(){
    system ("cls");
    int x = 0;
    int m1[3][3][4];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                cout << "masukkan angka :";
                cin >> x;
                m1[i][j][k] = x;
            }
        }
        cout << endl;
    }

    cout << "Isi Array: \n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                cout << m1[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;

}
