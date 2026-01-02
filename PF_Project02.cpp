#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Structure to store patient details
struct Patient {
    int id;
    string name;
    int age;
    string disease;
    string doctor;
};

// Table dimensions
const int totalWidth = 100, idWidth = 10, nameWidth = 25, ageWidth = 5, diseaseWidth = 25, doctorWidth = 25;

// Initialize array for patients
Patient patients[100] = {
    {101, "Alice Smith", 30, "Flu", "Dr. Johnson"},
    {102, "Bob Brown", 45, "Diabetes", "Dr. Lee"},
    {103, "Charlie Green", 28, "Fracture", "Dr. Patel"}
};

// Automatically calculate number of preloaded patients
int patientCount = sizeof(patients) / sizeof(patients[0]);

// Function prototypes
void addPatient();
void displayPatients();
void searchPatient();
void updatePatient();
void deletePatient();
void printTableHeader();
void printPatientRow(const Patient &p);

int main() {
    int choice;

    do {
        cout << "\n========== Hospital Management System ==========\n"
             << "1. Add Patient\n"
             << "2. Display All Patients\n"
             << "3. Search Patient\n"
             << "4. Update Patient\n"
             << "5. Delete Patient\n"
             << "0. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice) {
            case 1: addPatient(); break;
            case 2: displayPatients(); break;
            case 3: searchPatient(); break;
            case 4: updatePatient(); break;
            case 5: deletePatient(); break;
            case 0: cout << "\nExiting program. Goodbye!\n"; break;
            default: cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}

// Print table header
void printTableHeader() {
    cout << "\n" << string(totalWidth, '=') << endl;
    cout << left
         << setw(idWidth) << "ID"
         << "| " << setw(nameWidth) << "Name"
         << "| " << setw(ageWidth) << "Age"
         << "| " << setw(diseaseWidth) << "Disease"
         << "| " << setw(doctorWidth) << "Doctor Assigned" << endl;
    cout << string(totalWidth, '=') << endl;
}

// Print single patient row
void printPatientRow(const Patient &p) {
    string name = (p.name.length() > nameWidth - 1) ? p.name.substr(0, nameWidth - 4) + "..." : p.name;
    string disease = (p.disease.length() > diseaseWidth - 1) ? p.disease.substr(0, diseaseWidth - 4) + "..." : p.disease;
    string doctor = (p.doctor.length() > doctorWidth - 1) ? p.doctor.substr(0, doctorWidth - 4) + "..." : p.doctor;

    cout << left
         << setw(idWidth) << p.id
         << "| " << setw(nameWidth) << name
         << "| " << setw(ageWidth) << p.age
         << "| " << setw(diseaseWidth) << disease
         << "| " << setw(doctorWidth) << doctor << endl;
}

// Add a new patient
void addPatient() {
    Patient p;
    cout << "\nAdding new patient..." << endl;
    cout << "Enter patient ID: "; cin >> p.id; cin.ignore(1000, '\n');
    cout << "Name: "; getline(cin, p.name);
    cout << "Age: "; cin >> p.age; cin.ignore(1000, '\n');
    cout << "Disease: "; getline(cin, p.disease);
    cout << "Doctor Assigned: "; getline(cin, p.doctor);

    patients[patientCount++] = p;
    cout << "Patient added successfully!" << endl;
}

// Display all patients
void displayPatients() {
    if (patientCount == 0) {
        cout << "\nNo patient records found.\n";
        return;
    }

    printTableHeader();
    for (int i = 0; i < patientCount; i++) {
        printPatientRow(patients[i]);
    }
    cout << "\nTotal Patients: " << patientCount << endl;
    cout << string(totalWidth, '=') << endl;
}

// Search patient by ID
void searchPatient() {
    if (patientCount == 0) {
        cout << "\nNo patient records found.\n";
        return;
    }

    int id;
    bool found = false;
    cout << "\nEnter Patient ID to search: ";
    cin >> id;

    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            if (!found) {
                printTableHeader();
                found = true;
            }
            printPatientRow(patients[i]);
        }
    }

    if (!found)
        cout << "\nPatient with ID " << id << " not found.\n";
    else
        cout << string(totalWidth, '=') << endl;
}

// Update patient info
void updatePatient() {
    int id;
    bool found = false;
    cout << "\nEnter Patient ID to update: ";
    cin >> id; cin.ignore(1000, '\n');

    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            found = true;
            cout << "\nCurrent Details:\n";
            printTableHeader();
            printPatientRow(patients[i]);
            cout << string(totalWidth, '=') << endl;

            string newName, newDisease, newDoctor, ageInput;
            int newAge;

            cout << "\nEnter new details (press Enter to skip):\n";

            cout << "New Name: ";
            getline(cin, newName);
            if (!newName.empty()) patients[i].name = newName;

            cout << "New Age: ";
            getline(cin, ageInput);
            if (!ageInput.empty()) patients[i].age = stoi(ageInput);

            cout << "New Disease: ";
            getline(cin, newDisease);
            if (!newDisease.empty()) patients[i].disease = newDisease;

            cout << "New Doctor Assigned: ";
            getline(cin, newDoctor);
            if (!newDoctor.empty()) patients[i].doctor = newDoctor;

            cout << "\nPatient record updated successfully.\n";
            break;
        }
    }

    if (!found)
        cout << "\nPatient with ID " << id << " not found.\n";
}

// Delete patient
void deletePatient() {
    int id;
    bool found = false;
    char confirm;

    cout << "\nEnter Patient ID to delete: ";
    cin >> id;

    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == id) {
            found = true;
            cout << "\nPatient Found:\n";
            printTableHeader();
            printPatientRow(patients[i]);
            cout << string(totalWidth, '=') << endl;

            cout << "\nAre you sure you want to delete this patient? (y/n): ";
            cin >> confirm;

            if (confirm == 'y' || confirm == 'Y') {
                for (int j = i; j < patientCount - 1; j++) {
                    patients[j] = patients[j + 1];
                }
                patientCount--;
                cout << "\nPatient deleted successfully.\n";
            } else {
                cout << "\nDeletion cancelled.\n";
            }
            break;
        }
    }

    if (!found)
        cout << "\nPatient with ID " << id << " not found.\n";
}
