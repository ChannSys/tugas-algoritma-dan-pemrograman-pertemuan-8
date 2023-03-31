// Soal Nomor 3 a
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukan Nilai N : ";
    cin >> n;
    
    if (n > 50) {
        n = n + 25;
        cout << "N = " << n << endl;
    } else {
        n = n + 10;
        cout << "N = " << n << endl;
    }
    
    return 0;
}

// Soal Nomor 3 b
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukan Nilai N : ";
    cin >> n;
    
    if (n > 50) {
        n = n + 10;
        n = n + 10;
        cout << "N = " << n << endl;
    } else {
        n = n + 10;
        cout << "N = " << n << endl;
    }
    
    return 0;
}
