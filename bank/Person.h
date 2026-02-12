#pragma once
#include <iostream>
#include <string>
#include "Validation.h"
using namespace std;

class Person {
protected:
    int id;
    string name;
    string password;

public:
    Person();
    Person(int id, string name, string password);

    void setId(int id);
    void setName(string name);
    void setPassword(string password);

    int getId() const;
    string getName() const;
    string getPassword() const;

    virtual void display() const;
};