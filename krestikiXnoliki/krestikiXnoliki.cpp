#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    const int width = 5;
    const int height = 5;
    char down = '_';
    char side = '|';
    char tmp = ' ';
    int move{};
    bool IsRunning = true;

    vector<vector<char>> arr (width, vector<char>(height));

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            if (i % 2 != 0)
                arr[i][j] = down;
            else if (j % 2 != 0)
                arr[i][j] = side;
            else
                arr[i][j] = tmp;
        }
    }

    arr[0][0] = '1';
    arr[0][2] = '2';
    arr[0][4] = '3';
    arr[2][0] = '4';
    arr[2][2] = '5';
    arr[2][4] = '6';
    arr[4][0] = '7';
    arr[4][2] = '8';
    arr[4][4] = '9';

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            if (i % 2 != 0)
                arr[i][j] = down;
            else if (j % 2 != 0)
                arr[i][j] = side;
            else
                arr[i][j] = tmp;
        }
    }

    while (IsRunning) {
        char zxc{};
        int num{};

        if (move % 2 == 0) {
            zxc = '*';
        }
        else{
            zxc = 'o';
        }
        cin >> num;

        if (num == 1) {
            arr[0][0] = zxc;
        }
        else if (num == 2) {
            arr[0][2] = zxc;
        }
        else if (num == 3) {
            arr[0][4] = zxc;
        }
        else if (num == 4) {
            arr[2][0] = zxc;
        }
        else if (num == 5) {
            arr[2][2] = zxc;
        }
        else if (num == 6) {
            arr[2][4] = zxc;
        }
        else if (num == 7) {
            arr[4][0] = zxc;
        }
        else if (num == 8) {
            arr[4][2] = zxc;
        }
        else if (num == 9) {
            arr[4][4] = zxc;
        }

        for (int i = 0; i < width; i++) {
            for (int j = 0; j < height; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }

        if (arr[0][0] == '*' && arr[0][2] == '*' && arr[0][4] == '*') {
            cout << "Krestiki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][2] == '*' && arr[2][2] == '*' && arr[2][4] == '*') {
            cout << "Krestiki WIN!!!";
            IsRunning = false;
        }
        else if (arr[4][0] == '*' && arr[4][2] == '*' && arr[4][4] == '*') {
            cout << "Krestiki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][0] == '*' && arr[2][0] == '*' && arr[4][0] == '*') {
            cout << "Krestiki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][2] == '*' && arr[2][2] == '*' && arr[4][2] == '*') {
            cout << "Krestiki WIN!!!";
            IsRunning = false;
        }
        else if (arr[4][0] == '*' && arr[4][2] == '*' && arr[4][4] == '*') {
            cout << "Krestiki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][0] == '*' && arr[2][2] == '*' && arr[4][4] == '*') {
            cout << "Krestiki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][4] == '*' && arr[2][2] == '*' && arr[4][0] == '*') {
            cout << "Krestiki WIN!!!";
            IsRunning = false;
        }

        if (arr[0][0] == 'o' && arr[0][2] == 'o' && arr[0][4] == 'o') {
            cout << "Noliki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][2] == 'o' && arr[2][2] == 'o' && arr[2][4] == 'o') {
            cout << "Noliki WIN!!!";
            IsRunning = false;
        }
        else if (arr[4][0] == 'o' && arr[4][2] == 'o' && arr[4][4] == 'o') {
            cout << "Noliki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][0] == 'o' && arr[2][0] == 'o' && arr[4][0] == 'o') {
            cout << "Noliki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][2] == 'o' && arr[2][2] == 'o' && arr[4][2] == 'o') {
            cout << "Noliki WIN!!!";
            IsRunning = false;
        }
        else if (arr[4][0] == 'o' && arr[4][2] == 'o' && arr[4][4] == 'o') {
            cout << "Noliki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][0] == 'o' && arr[2][2] == 'o' && arr[4][4] == 'o') {
            cout << "Noliki WIN!!!";
            IsRunning = false;
        }
        else if (arr[0][4] == 'o' && arr[2][2] == 'o' && arr[4][0] == 'o') {
            cout << "Noliki WIN!!!";
            IsRunning = false;
        }

        move++;

    }
}
