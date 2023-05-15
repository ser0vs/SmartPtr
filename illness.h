#ifndef ILLNESS_H
#define ILLNESS_H

#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;

enum class Medical_Specialty{ Cardiology,Dermatology,Endocrinology,Gynecology,
    Neurology, Oncology,Pathology,Pediatrics,Pulmonology,Urology};

std::ostream& operator<<(std::ostream&, Medical_Specialty);

class Illness {
private:
    Medical_Specialty med;
    string name;
public:
    Illness(Medical_Specialty,const std::string&);
    Medical_Specialty get_specialty() const;
    std::string get_name() const;
    bool operator==(Illness&);
    bool operator<(const Illness&) const;
};

std::ostream& operator<<(std::ostream&, const Illness&);

#endif