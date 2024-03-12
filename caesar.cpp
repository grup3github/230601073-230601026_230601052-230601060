#include <iostream>
#include <cstring>
using namespace std;

int main() {
    while (true) {
        char ifade[1024], sifrelenmisIfade[1024];
        int anahtar = 0, i = 0;
        char c;

        cout << "Şifrelenecek metni giriniz: ";
        cin.getline(ifade, 1024); // Boşluklu metni getline ile alın

        while (true) {
            cout << "Anahtar giriniz: ";
            cin >> anahtar;

            if (anahtar == 0) { // Eğer anahtar 0 ise çıkış yap
                return 0;
            }

            cin.ignore(); // Önceki cin'in new line'ı tüketmesi için

            if (anahtar > 0) {
                break;
            } else {
                cout << "Anahtar pozitif olmalıdır. Lütfen pozitif bir anahtar giriniz." << endl;
            }
        }

        i = 0; // Döngü başında i'yi sıfırla

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

        cout << "Şifrelenmiş ifade: " << sifrelenmisIfade << endl;
    }

    return 0;
}