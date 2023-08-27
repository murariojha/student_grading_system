#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    void setName(string studentName) {
        name = studentName;
    }

    void setScore(int studentScore) {
        score = studentScore;
    }

    string getName() const {
        return name;
    }

    int getScore() const {
        return score;
    }
};

int main() {
    const int numStudents = 3;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        string name;
        int score;

        cout << "Enter name for student " << i + 1 << ": ";
        cin >> name;
        students[i].setName(name);

        cout << "Enter score for student " << i + 1 << ": ";
        cin >> score;
        students[i].setScore(score);

        cout << endl;
    }

    cout << "\nStudent Report:\n";
    cout << "---------------------------------\n";
    cout << setw(20) << left << "Name" << setw(10) << right << "Score" << endl;
    cout << "---------------------------------\n";

    for (int i = 0; i < numStudents; ++i) {
        cout << setw(20) << left << students[i].getName() << setw(10) << right << students[i].getScore() << endl;
    }

    return 0;
}