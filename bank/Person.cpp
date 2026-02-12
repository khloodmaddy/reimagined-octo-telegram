#include "person.h"

Person::Person() {
    id = 0;
    name = "";
    password = "";
}

Person::Person(int id, string name, string password) {
    setId(id);
    setName(name);
    setPassword(password);
}

void Person::setId(int id) {
    this->id = id;
}

void Person::setName(string name) {
    if (Validation::isValidName(name))
        this->name = name;
    else
        cout << "Invalid Name" << endl;
}

void Person::setPassword(string password) {
    if (Validation::isValidPassword(password))
        this->password = password;
}

int Person::getId() const {
    return id;
}

string Person::getName() const {
    return name;
}

string Person::getPassword() const {
    return password;
}

void Person::display() const {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}