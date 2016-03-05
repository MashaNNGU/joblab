
#include <iostream>
#include <ctime>
using namespace std;
 
int main()
{
    srand(time(0));
    int balance = 8; // баланс
    do // начало цикла do while
    {
     cout << "balance = " << balance << endl; // показать баланс
     int removal = rand() % 3; // переменная, для хранения вычитаемого значения
     cout << "removal = " << removal << endl; // показать вычитаемое значение
     balance -= removal; // управление условием
    }
    while ( balance > 0 ); // конец цикла do while
    system("pause");
    return 0;
}
