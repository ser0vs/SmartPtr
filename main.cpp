#include <iostream>
#include <iostream>
#include "illness.h"
#include "hcp.h"
#include "patient.h"
#include "hospital.h"

#include<vector>
#include<stdexcept>
#include<memory>
#include<algorithm>
#include <experimental/iterator>

using namespace std;

int main()
{
    Medical_Specialty m = Medical_Specialty::Pathology;
    cout << (m < Medical_Specialty::Pediatrics) << endl;
    return 0;
}
