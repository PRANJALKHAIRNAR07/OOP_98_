/*PROBLEM STATEMENT: Develop a program in C++ to create a database of an employee's information system containing the following fields:
Name, employee ID, Department, Date of Joining, Contact address, Telephone number etc.
Construct the database with suitable member functions to accept and print employee details. 
Make use of constructor types, destructor, static members, inline function and dynamic memory allocation using operators-new and delete.*/


#include<iostream>
using namespace std;
class employee{
    string name;
    int id;
    string department;
    string date;
    string contact; // changed from int to string
    long long telephone_no;
    static int count;
public:
   employee(employee &p);
   employee();//default
   employee(string n,int i, string dep, string d, string con, long long no);
    inline void title(){
        cout<<"------------------Welcome-----------------!"<<endl;
    }
    void display();
    static void showcount(void){
        cout<<"count"<<count << endl;
    }
  ~employee()
  {
   cout<<endl<<"This is destructor"<<count;
   count--;
  }
};
employee::employee(){
   cout<<endl;
   cout<<"\nDefault constructor"<<endl;
   name="sonar";
   id=9890;
   department="Electrical";
   date="12/06/2025";
   contact="Pune";
   telephone_no=6598745698;
   count++;
};
employee::employee(string n,int i, string dep, string d, string con, long long no){
   cout<<endl;
   cout<<"This is parameterized constructor"<<endl;
   name=n;
   id=i;
   department=dep;
   date=d;
   contact=con;
   telephone_no=no;
   count++;
};
employee::employee(employee &p){
   cout<<endl;
   cout<<"This is copy constructor"<<endl;
   name=p.name;
   id=p.id;
   department=p.department;
   date=p.date;
   contact=p.contact;
   telephone_no=p.telephone_no;
   count++;
}
int employee::count;
int main(){
    employee obj1;
    obj1.title();
    obj1.display();
    obj1.showcount();
    string n,dep,d,con;
    int i,no;
    cout<<endl;
   cout<<"Enter a name: ";
   cin>>n;
   cout<<"Enter a id: ";
   cin>>i;
   cout<<"Enter department: ";
   cin>>dep;
   cout<<"Enter date: ";
   cin>>d;
   cout<<"Enter contact address: ";
   cin>>con;
   cout<<"Enter telephone no: ";
   cin>>no;
   employee obj2( n,i,dep,d,con,no);
   obj2.display();
   obj2.showcount();
   employee obj3(obj2);
   obj3.display();
   obj3.showcount();
   employee *emp2=new employee("abc",3445,"it","12/12/12","Pimpri",9098832145);
   emp2->title();
   emp2->display();
   delete emp2;
}
void employee:: display(){
    cout << "Customer Name: " << name << endl;
    cout << "Employee ID:" <<id<<endl;
    cout << "Department :" <<department<<endl;
    cout << "Date:" <<date<<endl;
    cout << "contact address :" <<contact<<endl;
    cout << "telephone no:" <<telephone_no<<endl;
}

