#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    cout << "Unesite cijeli broj x (5 <= x <= 100): ";
    cin >> x;

    // Provjera valjanosti unosa
    if (x < 5 || x > 100) {
        cout << "Neispravan unos! Broj x mora biti u rasponu od 5 do 100." << endl;
        return 0;
    }

    int brojac = 0;

    // Dovoljne su dvije ugnijezdene petlje za a i b
    for (int a = 2; a < x; a++) {
        for (int b = a + 1; b < x; b++) {
            int c2 = a * a + b * b;
            int c = round(sqrt(c2)); // Izracun potencijalnog c

            // Provjera je li c cijeli broj (c*c == c2) i je li unutar granica (b < c <= x)
            if (c * c == c2 && c > b && c <= x) {
                cout << "(" << a << ", " << b << ", " << c << ")" << endl;
                brojac++;
            }
        }
    }

    cout << "Ukupan broj pronadenih trojki: " << brojac << endl;

    return 0;
}

