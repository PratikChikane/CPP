#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int roll_no;
    string dob;
    int marks;

public:
    void accept()
    {
        cout << "Enter Roll no: ";
        cin >> roll_no;
        cout << "Enter Date of Birth: ";
        cin >> dob;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    int getRollNo()
    {
        return roll_no;
    }
    void display()
    {
        cout << "Roll no: " << roll_no << endl;
        cout << "Date of Birth: " << dob << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{

    int n;
    cout << "Enter Size(n): ";
    cin >> n;

    student *detail = new student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        (detail + i)->accept();
    }

  for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (detail[j].getRollNo() > detail[j + 1].getRollNo())
            {
                student temp = detail[j];
                detail[j] = detail[j + 1];
                detail[j + 1] = temp;
            }
        }
    }
    cout << "\n--- Student Details ---" << endl;
    for (int i = 0; i < n; i++)
    {
        (detail + i)->display();
    }
    delete[] detail;
}