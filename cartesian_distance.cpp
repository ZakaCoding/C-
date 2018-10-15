#include <bits/stdc++.h>
using namespace std;

int x;
int y;

// Main function
int main()
{
    int titik;
    float distance = 0;

    repeat:
    cout << "Masukan Jumlah titik yang dilintasi : "; cin >> titik;
    
    if(titik <= 1)
    {
        cout << "Jumlah titik minimal adalah 2. Masukan kembali\n";
        goto repeat;
    }

    int array_x[titik];
    int array_y[titik];

    // membuat perulangan untuk memasukan semua titik X dan Y
    for(int i = 1; i <= titik; i++)
    {   
        cout << "\nTitik ke-" << i << endl;
        cout << "Masukan X : "; cin >> x;
        array_x[i] = {x};
        cout << "Masukan Y : "; cin >> y;
        array_y[i] = {y};

        cout << endl;
    }
    
    for(int i = titik - 1; i > 0; i--)
    {
        distance += sqrt(pow(array_x[i + 1] - array_x[i], 2) + pow(array_y[i + 1] - array_y[i], 2));
    }

    cout << "Jarak total yang di tempuh adalah : " << distance;

    cout << endl;
    return 0;
}

// Code and algorithm by zakacoding
// github.com/ZakaCoding | www.zakacoding.com
// Thanks to God and Happy Coding :) :)