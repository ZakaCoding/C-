#include <iostream>
#include <string>

using namespace std;

// Global
int A[3][3] = {};
int B[3][3] = {};
int array_matriks[3][3] = {};
int hasilKali = 0;

// Make matriks
void make_matriks(string matriks)
{
    int el_matriks;

    for(int i = 0; i < 3; i++)
    {
        // Matriks A and B
        for(int x = 0; x < 3; x++)
        {
            cout << "Input data matriks " << matriks<< "[" << i << "][" << x << "] : "; cin >> el_matriks;

            if (matriks == "A")
            {   
                // Array Matriks A
                A[i][x] = {el_matriks};
            }

            if (matriks == "B")
            {   
                // Array Matriks A
                B[i][x] = {el_matriks};
            }
        }
    }
}

// Show matriks
void show_matriks(string matriks){
    cout << "Matriks " << matriks << "\n";
    for(int i = 0; i < 3; i++)
    {
        for (int y = 0; y < 3; y++)
        {   
            // Matriks A
            if(matriks == "A")
            {
                /*
                | You can print without "if"
                | like this --->   if(A[i][y] < 10)
                | you can remove the line code 
                | and use this --> cout << "          " << A[i][y];
                | Code "if" just for UI in Output program
                | I hope you understand with my describe :)
                | { www.zakacoding.com / github.com/ZakaCoding }
                | Happy Coding...
                */
                
                if(A[i][y] < 10)
                    cout << "          " << A[i][y];
                else
                    cout << "         " << A[i][y];

            }

            // Matriks B
            if(matriks == "B")
            {
                if(B[i][y] < 10)
                    cout << "          " << B[i][y];
                else
                    cout << "         " << B[i][y];
            }
        }
        cout << endl;
    }
}

void perkalian_transpose(int index, int values, string condition)
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            array_matriks[i][j]=0;
            for (int k=0;k< 3;k++)
            {
                array_matriks[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    // cetak hasil
    for(int i = index; i < values; i++)
    {
        for(int x = index; x < values; x++)
        {
            if(condition == "n")
            {
                cout << "           " << array_matriks[i][x];
            }

            if(condition == "y")
            {
                cout << "           " << array_matriks[x][i];
            }
        }
        cout << endl;
    }
}

// Main function
int main()
{
    cout << "=======================================\n";
    cout << "Program perkalian dan Transpose Matriks\n";
    cout << "=======================================\n";


    cout << endl;
    make_matriks("A");
    cout << endl;
    make_matriks("B");

    cout << "\n\n=========== { Detail Matriks } ===========\n\n";

    show_matriks("A");
    show_matriks("B");

    cout << endl;
    cout << "Matriks A x B\n";
    perkalian_transpose(0,3,"n");

    cout << endl;
    cout << "Transpose Matriks A x B\n";
    perkalian_transpose(0,3,"y");


    cin.get();
    cout << endl;
    return 0;   
}