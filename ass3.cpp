/*PROBLEM STATEMENT:
Design an educational Institution that maintains a database of all staff members where the database is
segregated into a number of classes having hierarchical relationships. Define all classes with suitable
data members and required member functions to build the database and fetch individual details .*/
#include<iostream>
using namespace std;
class Staff {
public:
    string name;
    int ID, salary, yearsOfExp;


    void get_info() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Staff ID: ";
        cin >> ID;
        cout << "Enter staff salary: ";
        cin >> salary;
        cout << "Enter staff's years of experience: ";
        cin >> yearsOfExp;
    }


    void put_info() {
        cout << "Name of staff: " << name << '\n';
        cout << "Staff ID: " << ID << '\n';
        cout << "Salary: " << salary << '\n';
        cout << "Years of experience: " << yearsOfExp << '\n';
    }
};


class Administrator : public Staff {
public:
    string department;


    void get_info1() {
        get_info();
        cout << "Enter department: ";
        cin >> department;
    }


    void put_info1() {
        put_info();
        cout << "Department: " << department << '\n';
    }
};


class Teacher : public Staff {
public:
    string subject;


    void get_info2() {
        get_info();
        cout << "Enter subject: ";
        cin >> subject;
    }


    void put_info2() {
        put_info();
        cout << "Subject: " << subject << '\n';
    }
};
class SupportStaff : public Staff {
public:
    string areaOfSupport;


    void get_info3() {
        get_info();
        cout << "Enter area of support: ";
        cin >> areaOfSupport;
    }


    void put_info3() {
        put_info();
        cout << "Area of support: " << areaOfSupport << '\n';
        }
};


int main() {
    int n, i;


    // Administrator data
    cout << "Enter number of administrators: ";
    cin >> n;
    Administrator ad[n];
    cout << "Enter details of administrators ->\n";
    for (i = 0; i < n; i++) {
        ad[i].get_info1();
    }
    cout << "Details of administrators ->\n";
    for (i = 0; i < n; i++) {
        ad[i].put_info1();
    }


    // Teacher data
    cout << "Enter number of teachers: ";
    cin >> n;
    Teacher t[n];
    cout << "Enter details of teachers ->\n";
    for (i = 0; i < n; i++) {
        t[i].get_info2();
    }
    cout << "Details of teachers ->\n";
    for (i = 0; i < n; i++) {
        t[i].put_info2();
    }


    // Support staff data
    cout << "Enter number of support staff: ";
    cin >> n;
    SupportStaff s[n];
    cout << "Enter details of support staff ->\n";
    for (i = 0; i < n; i++) {
        s[i].get_info3();
    }
    cout << "Details of support staff ->\n";
    for (i = 0; i < n; i++) {
        s[i].put_info3();
    }
    return 0;
}











