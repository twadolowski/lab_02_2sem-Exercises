#include <iostream>
#include <string>
using namespace std;

class student {
private:
  
public:
    string name_surname_ = "NO_NAME";
    unsigned int id_number_ = 0;
    student(string name_surname, unsigned int id_number);
    string Descr_ = "student of group";
    void printDescr();
    void printData()
    {
        cout << " Method printData() of the base class" << endl;
        cout << " name surname " << name_surname_ << endl;
        cout << " id number " << id_number_ << endl;
    }
};

class chairman : public student {
public:
    string email_ = "no@noemail";
    chairman(string name_surname, unsigned int id_number, string email);
    string Descr_ = "chairman of a group";
    void printData()
    {
        cout << " Method printData() of the chariman class" << endl;
        cout << " name surname " << this->name_surname_ << endl;
        cout << " id number " << this->id_number_ << endl;
        cout << " email " << this->email_ << endl;
    }
};

chairman::chairman(string name_surname, unsigned int id_number, string email)
    : student(name_surname, id_number)
    , email_(email)
{
    cout << "Creating an object of the chairman class named: " << Descr_ << endl;
}

student::student(string name_surname, unsigned int id_number)
    : name_surname_(name_surname)
{
    id_number_ = id_number;
    cout << "Creating an object of the student class named: " << Descr_ << endl;
}

void student::printDescr()
{
    cout << "Descr: " << Descr_ << endl;
}

int main()
{
    student stud("Jan Kowalski", 7);
    stud.printDescr();
    cout << "Data:" << stud.name_surname_ << " " << stud.id_number_ << endl;
    chairman chair("Aleksandra Nowak", 999, "mail@nomail.dot");
    chair.printDescr();
    cout << "Data:" << chair.name_surname_ << " " << chair.id_number_ << endl;
    chair.printData();
}
