#include <iostream>
#include "HW_w1d1.h"
using namespace std;

struct Worker {
    char SecName[15];
    char Name[10];
    char Number[10];
    double Payment;
};

Worker AddWorker(Worker work) {
    char sd[2] = " ";
    char* s = sd;
    Worker newW = { 0,0,0,0 };
    cout << "Введите фамилию:" << endl;
    cin.getline(newW.SecName, 15);
    cout << "Введите имя:" << endl;
    cin.getline(newW.Name, 10);
    cout << "Введите номер телефона:" << endl;
    cin.getline(newW.Number, 10);
    cout << "Введите зарплату:" << endl;
    cin >> newW.Payment;
    return newW;
}
Worker* DeleteWorker(Worker* work, int choosed) {
    
}
void SearchSecName(Worker* work) {
    char comp[5], search[5];
    cin >> search;
    for (size_t i = 0; i < 25; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            comp[j] = work[i].SecName[j];
        }
        if (strcmp(comp, search) == 0) {
            cout << "Second Name: " << work[i].SecName << " Name: " << work[i].Name;
        }
    }
}
void SearchSecName(Worker* work) {
    double comp, search1, search2;
    cin >> search1;
    cin >> search2;
    for (size_t i = 0; i < 25; i++)
    {
        comp = work[i].Payment;   
        if (comp > search1 && comp < search2) {
            cout << "Second Name: " << work[i].SecName << " Name: " << work[i].Name << " Payment: " << work[i].Payment;
        }
    }
}
void Start(Worker* work) {
    int Menu = 0;
    cout << "Workers DataBase\nMenu:\n" << endl;
    switch (Menu) {
    case 1: {

    }
    case 2: {

    }
    case 3: {

    }
    case 4: {

    }
    case 5: {

    }
    case 6: {

    }
    case 7: {

    }
    case 8: {

    }
    case 0: {

    }
    }
}
int main()
{
    Worker* worker = new Worker[25];
    AddWorker(worker[0]);
    delete worker;
}
