#pragma once
#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Employee : public Person {
protected:
    double salary;

public:
    Employee() {}

    Employee(int id, string name, string password, double salary)
        : Person(id, name, password) {
        setSalary(salary);
    }

    void setSalary(double salary) {
        if (salary >= 5000)
            this->salary = salary;
        else
            cout << "Invalid Salary! Minimum is 5000\n";
    }

    double getSalary() {
        return salary;
    }

    virtual void display() {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};