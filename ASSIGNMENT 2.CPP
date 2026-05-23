#include <iostream>
using namespace std;

int totalMarks(int x, int y, int z)
{
    return x + y + z;
}

void studentResult(string name, int total, float average)
{
    cout << "\nStudent: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    if (average >= 50)
        cout << "Final Result: Passed" << endl;
    else
        cout << "Final Result: Failed" << endl;
}

int main()
{
    string name;
    int markA, markB, markC;
    int total;
    float average;
    char option;

    do
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Mark 1: ";
        cin >> markA;

        cout << "Enter Mark 2: ";
        cin >> markB;

        cout << "Enter Mark 3: ";
        cin >> markC;

        total = totalMarks(markA, markB, markC);

        average = total / 3.0;

        studentResult(name, total, average);

        cout << "\nContinue? (y/n): ";
        cin >> option;

    } while (option == 'y' || option == 'Y');

    return 0;
}