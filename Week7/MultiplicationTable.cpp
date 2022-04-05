#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int row = 0;
    int column = 0;

    cout << "    ";
    for(row = 1; row <=10; row ++){
    cout << setw(4) << row << " ";
    }
    cout <<endl;
    cout  << "   __________________________________________________";
    cout <<endl;

    for(row = 1; row <=10; row ++){
        if(row < 10)
            cout  << row << setw(2)<< "|";
        else
            cout << row << setw(1) << "|";

        for(column = 1; column <= 10; column++){
            cout << right << setw(4)  <<   row*column<< "|" ;
        }
        cout << endl;
        cout  << "   __________________________________________________";
        cout << endl;
    }


    return 0;
}