
#include <iostream>
#include <ctime>
using namespace std;
 
int main()
{
    srand(time(0));
    int balance = 8; // ������
    do // ������ ����� do while
    {
     cout << "balance = " << balance << endl; // �������� ������
     int removal = rand() % 3; // ����������, ��� �������� ����������� ��������
     cout << "removal = " << removal << endl; // �������� ���������� ��������
     balance -= removal; // ���������� ��������
    }
    while ( balance > 0 ); // ����� ����� do while
    system("pause");
    return 0;
}
