#ifndef PATIENT_H
#define PATIENT_H

#include<iostream>
#include<stdexcept>
#include<set>
#include<string>
#include "illness.h"

using namespace std;

class Patient {
private:
    std::string name;
    int age;
    std::set<Illness> illnesses;
    unsigned wealth;
public:
    Patient(std::string,int,const std::set<Illness>&,unsigned = 200);
    void increase_wealth(unsigned);
    bool pay_procedure(unsigned);
    void catch_disease(const Illness&);
};



#endif