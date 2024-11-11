// Bai7_Chuyensothanhchu.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
int main() {
int so;
cout << "Nhap so : "; cin >> so;
if (so == 0) {
    cout << "day la so khong\n";
}
else if (so == 1) {
    cout << "day la so mot\n";
}
else if (so == 2) {
    cout << "day la so hai\n";
}
else if (so == 3) {
    cout << "day la so ba\n";
}
else if (so == 4) {
    cout << "day la so bon\n";
}
else if (so == 5) {
    cout << "day la so nam\n";
}
else if (so == 6) {
    cout << "day la so sau\n";
}
else if (so == 7) {
    cout << "day la so bay\n";
}
else if (so == 8) {
    cout << "day la so tam\n";
}
else if (so == 9) {
    cout << "day la so chin\n";
}
else if (so == 10) {
    cout << "day la so muoi\n";
}
else {
    cout << "so da vuot qua gioi han 1-10\n";
}


cout << "So thong qua switch: ";
switch (so) 
{
case 0 :
        cout << "Khong\n";
        break;
case 1:
    cout << "Mot\n";
    break;
case 2:
    cout << "Hai\n";
    break;
case 3:
    cout << "Ba\n";
    break;
case 4:
    cout << "Bon\n";
    break;
case 5:
    cout << "Nam\n";
    break;
case 6:
    cout << "Sau\n";
    break;
case 7:
    cout << "Bay\n";
    break;
case 8:
    cout << "Tam\n";
    break;
case 9:
    cout << "Chin\n";
    break;
case 10:
    cout << "Muoi\n";
    break;

}

system("pause");
return 0;
}
