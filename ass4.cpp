/*PROBLEM STATEMENT: Implement a class Complex which represents the Complex Number.
Implement the following functions Using Operator Overloading:
1. Constructors ( Include all constructor types)
2. Overload operator + to add two complex numbers using member function
3. Overload operator * to multiply two complex numbers using friend function
4. Overload operators << and >> to output and accept Complex Numbers*/

#include<iostream>
using namespace std;
class complex {
    float real, img;
public:
    complex() {
		real=0;
		img=0;
		}
    friend complex operator * (complex c1, complex c2);
    friend istream & operator >> (istream &in, complex &obj); //input
    friend ostream & operator << (ostream &out, const complex &obj); //output
    complex operator + (complex c) {    // Overloading the +
        complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};
istream & operator >> (istream & in, complex &obj) { //// Overload >> 
    cout << "Enter a real part: ";
    in >> obj.real;
    cout << "Enter the imaginary part: ";
    in >> obj.img;
    return in;
}
ostream & operator << (ostream & out, const complex &obj) {   // Overload << operator 
    out << obj.real << " + " << obj.img << "i";
    return out;
}
complex operator * (complex c1, complex c2) {   
    complex result;
    result.real = c1.real * c2.real - c1.img * c2.img;
    result.img = c1.real * c2.img + c1.img * c2.real;
    return result;
}
int main() {
    complex c1, c2, c3;
    cout << "Enter first complex number:" << endl;
    cin >> c1;

    cout << "Enter second complex number:" << endl;
    cin >> c2;

    c3 = c1 + c2;
    cout << "The result of addition is: " << c3 << endl;

    complex c4 = c1 * c2;
    cout << "The result of multiplication is: " << c4 << endl;
    return 0;
}
