#include <iostream>
using namespace std;

int getNumber(long long lISBN,int inum);
long long power (int num, int sp);

int main() {
    long long isbn;
    int check_num = 0;

    cout << "輸入ISBN:";
    cin >> isbn;

    for (int i = 10; i > 1; i--) {
        int num = getNumber(isbn,i);

        check_num = check_num + num*(11-i);
    }

    check_num = check_num % 11;

    if (check_num == getNumber(isbn,1)) {
        cout << "ISBN正確";
    } else {
        cout << "ISBN錯誤";
    }
     
}

int getNumber(long long lISBN,int inum) {
    long long res = 0;
    res = lISBN % power(10,inum);
    res = res / power(10,inum - 1);
    return res; 
}

long long power (int num, int sp) {
    long long res = 1;
    for (int i = 0; i < sp; i++) {
        res *= num;
    }
    return res;
}

// 650275 杜心妍
