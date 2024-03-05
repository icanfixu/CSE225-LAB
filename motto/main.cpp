#include <iostream>
#include "unsortedtype.h"
#include "UnsortedType.cpp"

using namespace std;

class studentInfo
{
 public:
    int studentID;
    string name;
    double cgpa;
    studentInfo(int id, string n, double gpa)
    {
         studentID = id;
         name = n;
        cgpa= gpa;
    }
    studentInfo() {
        studentID = 0;
        name = "";
        cgpa = 0.0;
    }
    void printInfo() const {
        cout << studentID << ", " << name << ", " << cgpa << endl;
    }
    bool operator==(studentInfo a)
    {
        studentInfo t(studentID,name,cgpa);

        return t.studentID==a.studentID;
    }
    bool operator < (studentInfo a)
    {
        studentInfo t(studentID,name,cgpa);

        return t.cgpa<a.cgpa;
    }
    bool operator!=(studentInfo a)
    {
        studentInfo t(studentID,name,cgpa);

        return t.studentID!=a.studentID;
    }

};


int main() {
    // task 1
    UnsortedType<int> intList;
    //task 2 - insertto four items
    intList.InsertItem(5);
    intList.InsertItem(7);
    intList.InsertItem(6);
    intList.InsertItem(9);
    //task 3 - print za list
    int item;
    for (int i = 0; i < intList.LengthIs(); i++) {
        intList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    //task 4 - print thy length of za list
    cout << intList.LengthIs() << endl;

    //task 5 - insert uno itemm
    intList.InsertItem(1);
    cout<<endl;
    //task 6 - print za listo
    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++)
    {
        intList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;
    //retrieving tasktsu 7 to 10
    int num = 4;
    bool found;
    intList.RetrieveItem(num, found);
    cout << "Item is " << (found ? "found" : "not found") << endl;
    num = 5;
    intList.RetrieveItem(num, found);
    cout << "Item is " << (found ? "found" : "not found") << endl;
    num = 9;
    intList.RetrieveItem(num, found);
    cout << "Item is " << (found ? "found" : "not found") << endl;
    num = 10;
    intList.RetrieveItem(num, found);
    cout << "Item is " << (found ? "found" : "not found") << endl;
    //task 11 - full list or nah
    cout << "List is " << (intList.IsFull() ? "full" : "not full") << endl;
    //task 12 - dewete 5
    intList.DeleteItem(5);
    //task 13 - full list or nah
    cout << "List is " << (intList.IsFull() ? "full" : "not full") << endl;
    //task 14 - dewete 1
    intList.DeleteItem(1);
    //task 15 - pwoinky listto
    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++)
    {
        intList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;
    //task 16 - dewete 1
    intList.DeleteItem(6);
    //task 17 - pwonky list again huh
    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++) {
        intList.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    // Define a list of studentInfo objects
    UnsortedType<studentInfo> studentList;

    studentList.InsertItem(studentInfo(15234, "Jon", 2.6));
    studentList.InsertItem(studentInfo(13732, "Tyrion", 3.9));
    studentList.InsertItem(studentInfo(13569, "Sandor", 1.2));
    studentList.InsertItem(studentInfo(15467, "Ramsey", 3.1));
    studentList.InsertItem(studentInfo(16285, "Arya", 3.1));


    // Delete the record with ID 15467
    studentList.DeleteItem(studentInfo(15467, "Ramsey", 3.1));

    bool frownUpon;
    // Retrieve the record with ID 13569 and print
    studentInfo foundStudent(13569, "Sandor", 1.2);
    studentList.RetrieveItem(foundStudent, frownUpon);
    if (frownUpon) {
        cout << "Item is found" << endl;

        foundStudent.printInfo();
    } else {
        cout << "Item is not found" << endl;
    }

    cout << "List of students:" << endl;
    studentList.ResetList();

    studentInfo student;
    for (int i = 0; i < studentList.LengthIs(); ++i) {
        studentList.GetNextItem(student);
        student.printInfo();
    }


    return 0;
}
