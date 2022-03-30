#include <iostream>
#include <string>
using namespace std;

int main(){
    int numStudents, numTests;
    char repeat = 'y';
    int score;
    int total;
    int low;
    char grade;
    string name;
    cout << "Welcome to Grade Book with nested loops! <3"<<endl;

    
    do{
        cout << "How many students are in your class? (1-35)" <<endl;
        cin >> numStudents;

        while(numStudents <1 || numStudents > 35){
            cout << "Invalid amount of students, please reenter the amount (1-35): \n";
            cin >> numStudents;
        }

        for(int i = 0; i < numStudents;i++){
            total =0;
            low = INT_MAX;

            cout << "\nWhat is the students name?\n";
            cin.ignore();
            getline(cin, name);

            cout << "How many tests did " << name << " take? (2-5)\n";
            cin >> numTests;

            while(numTests < 2 || numTests > 5){
                cout << "Invalid amount of students, please reenter the amount (2-5): \n";
                cin >> numStudents;
            }

            for(int j = 0; j < numTests; j++){
                cout << "Score " << j+1 << ": ";
                cin >> score;
                total += score;

                if(low > score)
                    low = score;
            }

            total = total - low;

            total = total/(numTests-1);

            if(total >= 90)
                grade = 'A';
            else if(total >= 80)
                grade = 'B';
            else if(total >= 70)
                grade = 'C';
            else if(total >= 60)
                grade = 'D';
            else
                grade = 'F';
            cout << name << " has an average test score of " << total <<endl;
            cout << "So, " << name << "'s grade is a " << grade <<endl;
        }

        cout << "\nThose are all the students";
        cout <<"\n\nWould you like to repeat the program?" <<endl;
        cin >> repeat;
    }while(repeat == 'Y' || repeat == 'y');

    cout << "Thank you for using Grade Book with nested loops! :)\n";

    return 0;
}