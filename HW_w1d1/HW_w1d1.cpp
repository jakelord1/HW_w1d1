#include <iostream>
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
