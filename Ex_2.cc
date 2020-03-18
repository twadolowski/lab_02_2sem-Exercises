#include <iostream>
#include <string>
using namespace std;

class student {
private:

public:
    void printDescr();
    student();
    string Descr = "student of group";
};

class chairman {
public:
    void printDescr();
    chairman();
    string Descr = "chairman of a group";
};

student::student()
{
    cout << "Creating an object of the student class named: " << Descr << endl;
}

void student::printDescr()
{ cout << "Descr: " << Descr << endl; }

chairman::chairman()
{
    cout << "Creating an object of the chairman class named: " << Descr <<endl;
}
    void chairman::printDescr()
    {cout << "Descr: " << Descr << endl; }

int main()
{
    student st;
    st.printDescr();
    chairman ch;
    ch.printDescr();
}
