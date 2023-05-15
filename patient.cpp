#include<iostream>
#include<stdexcept>
#include<set>
#include<algorithm>
#include "patient.h"
#include "illness.h"

Patient::Patient(std::string name, int age, const std::set<Illness> &illnesses, unsigned int wealth) :
    name(name), age(age), illnesses(illnesses), wealth(wealth) {
    if (name.size() == 0)
        throw runtime_error("name is empty");
    if (age < 0)
        throw runtime_error("age is wrong");
    if (illnesses.size() == 0)
        throw runtime_error("illnesses are empty");
}

void Patient::increase_wealth(unsigned int x) {
    wealth += x;
}

bool Patient::pay_procedure(unsigned int x) {
    if (wealth < x) return false;
    else wealth -= x;
    return true;
}

void Patient::catch_disease(const Illness& x) {
    illnesses.insert(x);
}