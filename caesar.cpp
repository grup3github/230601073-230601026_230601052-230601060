#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ifade[1024], sifrelenmisIfade[1024];
    int anahtar = 0, i = 0;
    char c;

    cout << "Şifrelenecek metni giriniz: ";
    cin.getline(ifade, 1024); // Boşluklu metni getline ile alın

    cout << "Anahtar giriniz: ";
    cin >> anahtar;

    while (i < strlen(ifade)) {
        c = ifade[i];
        if (c != ' ') { // Boşluk karakterini atla
            sifrelenmisIfade[i] = (char)(((int)c) + anahtar);
        } else {
            sifrelenmisIfade[i] = c; // Boşluk karakterini koru
        }
        i++;
    }
    sifrelenmisIfade[i] = '\0'; // Diziyi sonlandır

    cout << "Şifrelenmiş ifade: " << sifrelenmisIfade;

    return 0;
}