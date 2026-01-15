#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct doctor_available {
int id;
string Doctor_specialty;
string name;
string time;
string phone;

};

void show_doctor_available() {
doctor_available da1;
da1.id=1;
da1.name="Ahmed";
da1.Doctor_specialty="Gynecology & Obstetrics";
da1.phone="123154556";
da1.time="Monday from 9am to 1pm";

doctor_available da2;
da2.id=2;
da2.name="Mohamed";
da2.Doctor_specialty="Family Medicine";
da2.phone="123154556";
da2.time="Tuesday from 4pm to 8pm";

doctor_available da3;
da3.id=3;
da3.name="Ali";
da3.Doctor_specialty="Dermatology";
da3.phone="123154556";
da3.time="Wednesday from 10am to 2pm";

doctor_available da4;
da4.id=4;
da4.name="Fouad";
da4.Doctor_specialty="Psychiatry";
da4.phone="123154556";
da4.time="Thursday from 5pm to 9pm";

doctor_available da5;
da5.id=5;
da5.name="Habisha";
da5.Doctor_specialty="Internal Medicine";
da5.phone="123154556";
da5.time="Friday from 8am to 12pm";

doctor_available da6;
da6.id=6;
da6.name="Alia";
da6.Doctor_specialty="General Medicine";
da6.phone="123154556";
da6.time="Saturday from 6pm to 9pm";

doctor_available da7;
da7.id=7;
da7.name="Fatema";
da7.Doctor_specialty="Emergency Medicine";
da7.phone="123154556";
da7.time="Sunday from 1pm to 5pm";

doctor_available da8;
da8.id=8;
da8.name="Ahmed";
da8.Doctor_specialty="Ophthalmology";
da8.phone="123154556";
da8.time="Monday from 3pm to 7pm";

doctor_available da9;
da9.id=9;
da9.name="Mohamed";
da9.Doctor_specialty="Cardiology";
da9.phone="123154556";
da9.time="Tuesday from 9am to 11am";

doctor_available da10;
da10.id=10;
da10.name="Ali";
da10.Doctor_specialty="Otolaryngology (ENT)";
da10.phone="123154556";
da10.time="Wednesday from 7pm to 10pm";

cout << "=========================================================================================================================================================\n";
    cout << " ID: 1                                     ID: 2                       ID: 3                    ID: 4                   ID: 5\n";
    cout << " Name: Ahmed                               Name: Mohamed               Name: Ali                Name: Fouad             Name: Habisha\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << " Specialty: Gynecology & Obstetrics   Specialty: Family Medicine   Specialty: Dermatology   Specialty: Psychiatry   Specialty: Internal Medicine\n";
    cout << "   Time: Monday 9am-1pm               Time: Tuesday 4pm-8pm       Time: Wednesday 10am-2pm   Time: Thursday 5pm-9pm     Time: Friday 8am-12pm\n";
    cout << "=====================================================================================================================================================\n\n";
    cout << "=====================================================================================================================================================\n";
    cout << " ID: 6                                      ID: 7                        ID: 8                      ID: 9                      ID: 10\n";
    cout << " Name: Alia                                 Name: Fatema                 Name: Ahmed                Name: Mohamed              Name: Ali\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << " Specialty: General Medicine     Specialty: Emergency Medicine   Specialty: Ophthalmology   Specialty: Cardiology   Specialty: Otolaryngology (ENT)\n";
    cout << " Time: Saturday 6pm-9pm          Time: Sunday 1pm-5pm            Time: Monday 3pm-7pm      Time: Tuesday 9am-11am   Time: Wednesday 7pm-10pm\n";
    cout << "======================================================================================================================================================\n";

};

class Person {
protected:
    int id;
    string name;
    int age;
    string phone;
    string injury;

public:
    void setData() {
         cout << "\n-------------------------------\n";
        cout << " Enter Patient Data\n";
        cout << "-------------------------------\n";

        cout << "Name: ";
        getline(cin, name);

        cout << "Age: ";
        cin >> age;
        cin.ignore();

        cout << "Phone: ";
        getline(cin, phone);

        cout << "Injury Type: ";
        getline(cin, injury);
    }

    void setDataNoInjury() {
         cout << "\n-------------------------------\n";
        cout << " Enter Doctor Data\n";
        cout << "-------------------------------\n";

        cout << "Name: ";
        getline(cin, name);

        cout << "Age: ";
        cin >> age;
        cin.ignore();

        cout << "Phone: ";
        getline(cin, phone);
    }

    void showData() {
        cout << "----------------------------------\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
        cout << "Injury: " << injury << endl;
    }

    void showDataNoInjury() {
        cout << "----------------------------------\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
    }

    int getId() { return id; }
};

class Doctor : public Person {
private:
    string specialization;

public:
    void setDoctor() {
        cout << "\n========== ADD NEW DOCTOR ==========\n";
        cout << "Doctor ID: ";
        cin >> id;
        cin.ignore();

        setDataNoInjury();
        cout << "Specialization: ";
        getline(cin, specialization);
    }

    void showDoctor() {
        showDataNoInjury();
        cout << "Specialization: " << specialization << endl;
        cout << "==================================\n";
    }
};

class Patient : public Person {
public:
    void setPatient(int autoId) {
         cout << "\n========== ADD NEW PATIENT ==========\n";
        id = autoId;
        cout << "Patient ID : " << id << endl;
        setData();
    }

    void showPatient() {
        showData();
        cout << "==================================\n";
    }
};

class Session {
private:
    int sessionId;
    int doctorId;
    int patientId;
    string date;

public:
    void setSession(int autoSessionId) {
        cout << "\n========== CREATE SESSION ==========\n";
        sessionId = autoSessionId;
        cout << "Session ID : " << sessionId << endl;

        cout << "Doctor ID: ";
        cin >> doctorId;

        cout << "Patient ID: ";
        cin >> patientId;
        cin.ignore();

        cout << "Date: ";
        getline(cin, date);
    }

    void showSession() {
        cout << "----------------------------------\n";
        cout << "Session ID: " << sessionId << endl;
        cout << "Doctor ID: " << doctorId << endl;
        cout << "Patient ID: " << patientId << endl;
        cout << "Date: " << date << endl;
        cout << "----------------------------------\n";
    }

    int getSessionId() { return sessionId; }
};

class HospitalSystem {
private:
    vector<Doctor> doctors;
    vector<Patient> patients;
    vector<Session> sessions;

    bool isAdmin;
    int patientCounter = 0;
    int sessionCounter = 0;

    vector<string> adminEmails;
    vector<string> adminPasswords;

public:
    HospitalSystem() {
        isAdmin = false;
    }

    bool login() {
        int adminType;
        cout << " ========================================" << endl;
        cout << " ==========      WELCOME        =========" << endl;
        cout << " ========================================" << endl;

        cout << "\n1. Admin\n2. User\n3. Exit\n\nChoice: ";
        cin >> adminType;
        cin.ignore();

        if (adminType == 1) {
            return adminLogin();
        }
        else if (adminType == 2) {
            isAdmin = false;
            return true;
        }
        else if (adminType == 3) {
            return false;
        }
        else {
            cout << "Invalid choice! try again\n";
            return false;
        }
    }

    bool adminLogin() {
        int choice;

        while(true) {
            cout << "\n==================================\n";
            cout << "\n-- ADMIN ACCESS --\n";
            cout << "\n==================================\n";
            cout << "1. Create New Account\n";
            cout << "2. Sign In\n";
            cout << "3. Back to Main\n\n";
            cout << "----------------------------------\n";
            cout<<"Choice: ";
            cin >> choice;
            cin.ignore();

            switch(choice) {
                case 1: {
                    string email, password;
                    cout << "\n==================================\n";
                    cout << "\n-- CREATE ADMIN ACCOUNT --\n";
                    cout << "\n==================================\n";
                    cout << "Email: ";
                    getline(cin, email);
                    cout << "Password: ";
                    getline(cin, password);

                    adminEmails.push_back(email);
                    adminPasswords.push_back(password);
                    cout << "----------------------------------\n";
                    cout << "Admin account created successfully!\n\n";
                    break;
                }

                case 2: {
                    string email, password;
                    cout << "\n==================================\n";
                    cout << "\n-- ADMIN SIGN IN --\n";
                    cout << "\n==================================\n";
                    cout << "Email: ";
                    getline(cin, email);
                    cout << "Password: ";
                    getline(cin, password);

                    if (adminEmails.empty()) {
                        if (email == "admin" && password == "123") {
                            isAdmin = true;
                            cout << "Welcome Admin!\n";
                            cout << "----------------------------------\n";
                            return true;
                        }
                    }

                    for(int i = 0; i < adminEmails.size(); i++) {
                        if(adminEmails[i] == email && adminPasswords[i] == password) {
                            isAdmin = true;
                            cout << "Welcome Admin!\n";
                            return true;
                        }
                    }
                    cout << "----------------------------------\n";
                    cout << "Invalid email or password!\n\n";
                    break;
                }

                case 3:
                    return false;

                default:
                    cout << "Invalid choice! Please enter 1, 2 or 3\n";
                    cout << "----------------------------------\n";
            }
        }
    }

    void addDoctor() {
        Doctor d;
        d.setDoctor();
        doctors.push_back(d);
        cout << "Doctor added\n";
        cout << "------------------\n";
    }

    void addPatient() {
        Patient p;
        patientCounter++;
        p.setPatient(patientCounter);
        patients.push_back(p);
        cout << "Patient added\n";
        cout << "------------------\n";
    }

    void createSession() {
        Session s;
        sessionCounter++;
        s.setSession(sessionCounter);
        sessions.push_back(s);
        cout << "Session created\n";
        cout << "------------------\n";
    }

    void showDoctors() {
        if (doctors.empty()) {
            cout << "No doctors found!\n";
            cout << "------------------\n";
            return;
        }
        for (int i = 0; i < doctors.size(); i++) {
            cout << "\nDoctor " << i + 1 << endl;
            doctors[i].showDoctor();
            show_doctor_available();
            return;
            cout << "------------------\n";
        }
    }

    void showPatients() {
        if (patients.empty()) {
            cout << "No patients found!\n";
            return;
        }
        for (int i = 0; i < patients.size(); i++) {
            cout << "\nPatient " << i + 1 << endl;
            patients[i].showPatient();
            cout << "------------------\n";
        }
    }

    void showSessions() {
        if (sessions.empty()) {
            cout << "No sessions found!\n";
            return;
        }
        for (int i = 0; i < sessions.size(); i++) {
            cout << "\nSession " << i + 1 << endl;
            sessions[i].showSession();
            show_doctor_available();
            return;
            cout << "------------------\n";
        }
    }

    void deleteSession() {
        if (sessions.empty()) {
            cout << "No sessions found!\n";
            cout << "------------------\n";
            return;
        }

        int id;
        cout << "Enter Session ID: ";
        cin >> id;

        for (int i = 0; i < sessions.size(); i++) {
            if (sessions[i].getSessionId() == id) {
                sessions.erase(sessions.begin() + i);
                cout << "Session deleted\n";

                return;
            }
        }
        cout << "Session not found\n";
        cout << "------------------\n";
    }

    void adminMenu() {
        int choice;
        do {

            cout << " --ADMIN MENU-- \n";
            cout<<"*=*=*=*=*=*=*=*=*=*=*"<<endl;
            cout <<"* 1. Add Doctor     *"<<endl;
            cout<<"*===================*"<<endl;
            cout <<"* 2. Add Patient    *"<<endl;
            cout<<"*===================*"<<endl;
            cout <<"* 3. Create Session *"<<endl;
            cout<<"*===================*"<<endl;
            cout <<"* 4. Show Doctors   *"<<endl;
            cout<<"*===================*"<<endl;
            cout <<"* 5. Show Patients  *"<<endl;
            cout<<"*===================*"<<endl;
            cout <<"* 6. Show Sessions  *"<<endl;
            cout<<"*===================*"<<endl;
            cout <<"* 7. Delete Session *"<<endl;
            cout<<"====================*"<<endl;
            cout <<"* 8. Logout         *"<<endl;
            cout<<"*=*=*=*=*=*=*=*=*=*=*"<<endl;
            cout <<"\nChoice: ";
            cin >> choice;

            switch (choice) {
                case 1: addDoctor(); break;
                case 2:
                    cin.ignore();
                    addPatient();
                    break;
                case 3: createSession(); break;
                case 4: showDoctors(); break;
                case 5: showPatients(); break;
                case 6: showSessions(); break;
                case 7: deleteSession(); break;
                case 8:
                    cout << "Logging out...\n";
                    isAdmin = false;
                    break;
                default: cout << "Invalid choice! try again\n";
                cout << "------------------\n";
            }
        } while (choice != 8);
    }

    void userMenu() {
        int choice;
        do {
            cout << " --USER MENU-- \n\n";
            cout << "1. Show Doctors"<<endl;
            cout<<"*===================*"<<endl;
            cout <<"2. Create Session"<<endl;
            cout<<"*===================*"<<endl;
            cout << "3. Show Available sessions"<<endl;
            cout<<"*===================*"<<endl;
            cout <<"4. Logout"<<endl;
            cout<<"*===================*"<<endl;
            cout << "Choice: ";
            cin >> choice;

            switch (choice) {
                case 1: showDoctors(); break;
                case 2: createSession(); break;
                case 3: show_doctor_available(); break;
                case 4: cout << "Logging out...\n"; break;
                default: cout << "Invalid choice! try again\n";
            }
        } while (choice != 4);
    }

    void menu() {
        if (isAdmin)
            adminMenu();
        else
            userMenu();
    }
};




int main() {
    HospitalSystem system;
    int choice;

    do {
        cout << "\n*===========================================================================================================*\n";
        cout << "                                             WELCOME TO HOSPITAL SYSTEM                                       \n";
        cout << "*============================================================================================================*\n\n";

        cout << "1. Enter System\n";
        cout << "2. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if (system.login()) {
                    system.menu();
                }
                break;
            case 2:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! try again\n";
        }
    } while(choice != 2);

    return 0;


}
