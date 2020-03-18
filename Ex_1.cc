#include <iostream>
#include <string>
using namespace std;

class student {
private:
    
public:
void printDescr();
    student();
    string Descr_ = "student of group";
};

class chairman : public student {
public:
    string Descr_ = "chairman of a group";
};

student::student()
{
    cout << "Creating an object of the student class named: " << Descr_ << endl;
}

void student::printDescr() { cout << "Descr: " << Descr_ << endl; }
int main()
{
    student stud;
    stud.printDescr();
    chairman chairm;
    chairm.printDescr();
}
