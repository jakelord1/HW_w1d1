#include <iostream>
using namespace std;

struct Worker {
    char* SecName;
    char* Name;
    char* Number;
    double Payment;
};

void AddWorker() {
    FILE* file = fopen("Data.txt", "rb+");
    Worker newW;
    cout << "Введите фамилию:" << endl;
    cin >> newW.SecName;
    cout << "Введите имя:" << endl;
    cin >> newW.Name;
    cout << "Введите номер телефона:" << endl;
    cin >> newW.Number;
    cout << "Введите зарплату:" << endl;
    cin >> newW.Payment;
    char p[10];
    fpos_t pos = fgetpos(file, &pos);
    fseek(file, pos, SEEK_END);
    sprintf(p, "%f", newW.Payment);
    fputs(newW.Name, file);
    fputs(newW.SecName, file);
    fputs(newW.Number, file);
    fputs(p, file);
    fclose(file);
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
    Worker* worker = new Worker;
    AddWorker();
    delete[] worker;
}
