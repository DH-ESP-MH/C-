#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    
    string occupation;
    double height;

    void printInfo()
    {
        cout << name << " is " << age << " years old." << endl;
        cout << "Occupation: " << occupation << endl;
        cout << "Height: " << height << " meters" << endl;
    }
};

int main()
{
    Person person;
    person.name = "Harry";
    person.age = 23;
    person.occupation = "Engineer";
    person.height = 1.75;

    cout << "Meet " << person.name << endl;
    person.printInfo();

    // Доступ до додаткових учасників
    person.name = "Victor";
    person.age = 19;
    person.occupation = "Cleaner";
    person.height = 1.78;

    cout << "Meet " << person.name << endl;
    person.printInfo();

    return 0;
}