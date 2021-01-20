// Patient data program


#include <iostream>
#include <string>

enum class Sex
{
    MALE,
    FEMALE,
};

enum class PatientType
{
    ANC,
    DVD,
    GENERAL,
    HOSPITAL_STAFF,
    JSSK,
    NP_TB,
    PENSIONER,
    PNC,
    POOR_FREE,
    RSBY,
    SICKLING,
    SNCU,
    STUDENTS
};

enum class Discharge_Type
{
    ABSCONDED,
    DEATH,
    DISCHARGED,
    DOR,
    LAMA,
    REFERRED,
};

struct Patient
{
    int serial_number;
    int uhid_number;
    int ipd_number;
    std::string name;
    std::string fathers_name;
    Sex sex;
    int age;
    PatientType patType;
    Discharge_Type disType;
};

std::string showSex(Patient patient)
{
    if (patient.sex == Sex::MALE)
    {
        return "Male";
    }
    if (patient.sex == Sex::FEMALE)
    {
        return "Female";
    }
    else
    {
        return "Unknown";
    }
}

std::string showPatientType(Patient patient)
{
    if (patient.patType == PatientType::ANC)
    {
        return "ANC";
    }
    if (patient.patType == PatientType::DVD)
    {
        return "DVD";
    }
    if (patient.patType == PatientType::GENERAL)
    {
        return "General";
    }
    if (patient.patType == PatientType::HOSPITAL_STAFF)
    {
        return "Hospital Staff";
    }
    if (patient.patType == PatientType::JSSK)
    {
        return "JSSK";
    }
    if (patient.patType == PatientType::NP_TB)
    {
        return "NP - TB";
    }
    if (patient.patType == PatientType::PENSIONER)
    {
        return "Pensioner";
    }
    if (patient.patType == PatientType::PNC)
    {
        return "PNC";
    }
    if (patient.patType == PatientType::POOR_FREE)
    {
        return "Poor Free";
    }
    if (patient.patType == PatientType::RSBY)
    {
        return "RSBY";
    }
    if (patient.patType == PatientType::SICKLING)
    {
        return "Sickling";
    }
    if (patient.patType == PatientType::SNCU)
    {
        return "SNCU";
    }
    if (patient.patType == PatientType::STUDENTS)
    {
        return "Students";
    }
    else
    {
        return "Unknown";
    }
}

std::string showDischargeType(Patient patient)
{
    if (patient.disType == Discharge_Type::ABSCONDED)
    {
        return "Absconded";
    }
    if (patient.disType == Discharge_Type::DEATH)
    {
        return "Death";
    }
    if (patient.disType == Discharge_Type::DISCHARGED)
    {
        return "Discharged";
    }
    if (patient.disType == Discharge_Type::DOR)
    {
        return "DOR";
    }
    if (patient.disType == Discharge_Type::LAMA)
    {
        return "LAMA";
    }
    if (patient.disType == Discharge_Type::REFERRED)
    {
        return "Referred";
    }
    else
    {
        return "Unknown";
    }
}

void showPatientInfo(Patient patient)
{
    std::cout << "S. N.        :  " << patient.serial_number << "\n";
    std::cout << "UHID No.     :  " << patient.uhid_number << "\n";
    std::cout << "IPD No.      :  " << patient.ipd_number << "\n";
    std::cout << "Patient Name :  " << patient.name << "\n";
    std::cout << "Father's Name:  " << patient.fathers_name << "\n";
    std::cout << "Sex          :  " << showSex(patient) << "\n";
    std::cout << "Age          :  " << patient.age << "\n";
    std::cout << "Patient Type :  " << showPatientType(patient) << "\n";
    std::cout << "Discharge Type: " << showDischargeType(patient) << "\n";
}

int main()
{
    Patient kavita = {7601, 167043, 40830521, "Kavita Yadav", "Het Ram Yadav", Sex::FEMALE, 20, PatientType::JSSK, Discharge_Type::DISCHARGED};

    showPatientInfo(kavita);

    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::cin.get();

    return 0;
}