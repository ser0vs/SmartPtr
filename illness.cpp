#include "illness.h"
#include<vector>
#include<string>
#include<iostream>

vector<string> strMsArray = {
        "Cardiology","Dermatology","Endocrinology","Gynecology",
        "Neurology", "Oncology","Pathology","Pediatrics","Pulmonology","Urology"
};

std::ostream& operator<<(std::ostream& o, Medical_Specialty m) {
    return o << strMsArray[static_cast<int>(m)];
}

Illness::Illness(Medical_Specialty med, const std::string &name) : med(med), name(name) {
    if (name.size() == 0)
        throw runtime_error("name is empty");
}

Medical_Specialty Illness::get_specialty() const {
    return med;
}

string Illness::get_name() const {
    return name;
}

std::ostream& operator<<(std::ostream& o, const Illness& ill) {
    return o << "[" << ill.get_specialty() << ", " << ill.get_name() << "]";
}

bool Illness::operator==(Illness &other) {
    if (other.med == med && other.name == name) return true;
    else return false;
}

bool Illness::operator<(const Illness &other) const {
    if (med < other.med) return true;
    if (med == other.med)
        if (name < other.name)
            return true;
    return false;
}