#include<iostream>

using namespace std;

int main() {

    int mat[3][3];
    int i, j;

    cout << "Enter the matrix values: " << endl;
    for ( i = 0; i < 3; i++ ) {

        for ( j = 0; j < 3; j++ ) {

             cout << "mat[" << i << "][" << j << "] : ";

             cin >> mat[i][j];       }    }

    cout << "You have entered the matrix :- " << endl;

    for ( i = 0; i < 3; i++ ) {
            for ( j = 0; j < 3; j++ ) {

                 cout << mat[i][j] << " ";       }
    cout << endl;    }

    cout << " " << endl;

    cout << "Product Array" << endl;

    for ( i = 0; i < 3; i++ ) {
            for ( j = 0; j < 3; j++ ) {

                mat[i][j]=mat[i][j]*5;

                 cout << mat[i][j] << " ";       }

    cout << endl;    }



     return 0; }

