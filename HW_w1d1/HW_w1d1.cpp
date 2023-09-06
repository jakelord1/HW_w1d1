#include <iostream>
#include "HW_w1d1.h"
using namespace std;

struct Worker {
    char SecName[15];
    char Name[10];
    char Number[12];
    double Payment;
};

Worker AddWorker(Worker work);
void WorkerShower(Worker work);
Worker* DeleteWorker(Worker* work, int choosed);
void SearchSecName(Worker* work);
void SearchPayment(Worker* work);
void quickSortP(Worker* work, int N);
void WorkerLib(Worker* work);
void Start(Worker* work);

int pos = 0;
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
    for (size_t i = 0; i < 12; i++)
    {
        if (i == 0) {
            for (size_t j = 11; j > i; j--)
            {
                newW.Number[j] = newW.Number[j - 1];
            }
            newW.Number[i] = '(';
        }
        else if (i == 4) {
            for (size_t j = 11; j > i; j--)
            {
                newW.Number[j] = newW.Number[j - 1];
            }
            newW.Number[i] = ')';
        }
    }
    cout << "Введите зарплату:" << endl;
    cin >> newW.Payment;
    return newW;
}
void WorkerShower(Worker work) {
    cout << work.SecName << "\t" << work.Name << "\t" << work.Number << "\t" << work.Payment << "$";
}
Worker* DeleteWorker(Worker* work, int choosed) {
    int c = 0;
    cout << "Подтвердите удаление работника\n1 - Подтверждаю\t0 - Отмена";
    cin >> c;
    switch (c) {
    case 1: {
        for (size_t i = 0; i < 25; i++)
        {
            if (i >= choosed) {
                work[i] = work[i + 1];
            }
        }
        break;
    }
    default: {
        break;
    }
    }
    return work;
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
void SearchPayment(Worker* work) {
    double comp, search1, search2;
    cin >> search1;
    cin >> search2;
    for (size_t i = 0; i < 25; i++)
    {
        comp = work[i].Payment;   
        if (comp > search1 && comp < search2) {
            WorkerShower(work[i]);
        }
    }
}
void quickSortP(Worker* work, int N) {
    long i = 0, j = N - 1;
    Worker temp, p;
    p = work[N >> 1];
    do {
        while (work[i].SecName[0] < p.SecName[0]) i++;
        while (work[j].SecName[0] > p.SecName[0]) j--;

        if (i <= j) {
            temp = work[i]; work[i] = work[j]; work[i] = temp;
            i++; j--;
        }
    } while (i <= j);

    if (j > 0) quickSortP(work, j);
    if (N > i) quickSortP(work + i, N - i);
}
void WorkerLib(Worker* work) {
    for (size_t i = 0; i < 25; i++)
    {
        WorkerShower(work[i]);
    }
}
void Start(Worker* work) {
    int Menu = 0;
    cout << "Workers DataBase\nMenu:\n" << endl;
    cout << "1 - Select worker\t2 - Add Worker\t3 - Delete selected worker\t4 - Show all workers\t5 - Search workers by sec. name\t6 - Search workers by payment\t7 - Sort worker list\t0 - Exit" << endl;
    switch (Menu) {
    case 1: {
        cin >> pos;
        break;
    }
    case 2: {
        for (size_t i = 0; i < 25; i++)
        {
            if (work[i].Name == 0) {
                AddWorker(work[i]);
            }
        }
        system("cls");
        break;
    }
    case 3: {
        DeleteWorker(work, pos);
        break;
    }
    case 4: {
        WorkerLib(work);
        break;
    }
    case 5: {
        SearchSecName(work);
        break;
    }
    case 6: {
        SearchPayment(work);
        break;
    }
    case 7: {
        quickSortP(work, 25);
        break;
    }
    case 0: {
        delete work;
        exit(0);
    }
    default: {
        break;
    }
           
    }
    system("cls");
}
int main()
{
    Worker* worker = new Worker[25];
    while (1) {
        Start(worker);
    }
}
