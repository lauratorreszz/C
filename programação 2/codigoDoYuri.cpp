#include <iostream>
#include <string>
using namespace std;

int main(){

    string name,verifySex,verifyMarital;
    int age;
    float salary;
    char sex, maritalStatus;

    cout << "Set your name: "; getline(cin, name);
    cout << "Set your age: "; cin >> age;
    cout << "Set your salary: "; cin >> salary;
    cout << "Set your sex: "; cin >> sex;
    cout << "Set your marital status: "; cin >> maritalStatus;
    sex = toupper(sex);
    maritalStatus = toupper(maritalStatus);
    verifySex.append(1,sex);
    verifyMarital.append(1,maritalStatus);

    while (name.size() <= 3){
        cout << "Set your name: "; getline(cin, name);
    }

    while (0 >= age || age > 130){
        cout << "Set your age: "; cin >> age;
    }

    while (salary < 0){
        cout << "Set your salary: "; cin >> salary;
    }

    while (verifySex != "M" && verifySex != "F"){
        cout << "Set your sex: "; cin >> sex;
        sex = toupper(sex);
        verifySex = "";
        verifySex.append(1,sex);
    }
    
    while (verifyMarital != "S" && verifyMarital != "M" && verifyMarital != "D" && verifyMarital != "W"){
        cout << "Set your marital status: "; cin >> maritalStatus;
        maritalStatus = toupper(maritalStatus);
        verifyMarital = "";
        verifyMarital.append(1,maritalStatus);
    }

    cout << "\nYour name is: " << name;
    cout << "\nYour age is: " << age << "years";
    cout << "\nYour salary is: US$ " << salary;
    
    
    if (verifySex == "F"){
        cout << "\nYour sex is: Female";
    }
    else{
        cout << "\nYour sex is: Male";
    }
    
    
    if (verifyMarital == "S"){
        cout << "\nYour marital status is: Single";
    }
    if (verifyMarital == "M"){
        cout << "\nYour marital status is: Married";
    }
    if (verifyMarital == "D"){
        cout << "\nYour marital status is: Divorced";
    }
    if (verifyMarital == "W"){
        cout << "\nYour marital status is: Widower";
    }
}
