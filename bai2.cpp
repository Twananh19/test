#include <iostream> 

using namespace std;

int main (){
    int sex;
    cout << "Select your sex: " << endl << "1- Male\n" << "2-Female\n";
    cin >> sex;
    double height;
    cout << "CHieu cao cua ban la(m): ";
    cin >> height;
    switch (sex)
    {
    case 1/* constant-expression */:
        /* code */
        cout << "Ket qua chieu cao cua ban la: " << ((height < 1.70) ? "Short" : (height > 1.85) ? "Tall" : "Normal");
        break;
    case 2:
        cout << "Ket qua chieu cao cua ban la: " << ((height < 1.60) ? "Short" : (height > 1.75) ? "Tall" : "Normal");
        break;
    
    default:
        cout << "Wrong default number of sex. Please choose the right number!";
        break;
    }
}