//#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main()
{
int a=1; // начальная установка
    while (a!=40 ) // условие (если истинно то делаем то что ниже, если ложно 
    //выходим из цикла
    {
      cout<<a<<endl; // а эта сама операция
      a++; // а это шаг в данном случе равно 1
    }
    for (int b = 1;b!=40;b++)
    {
         cout<<b<<endl;
        }
      int c=1;
      do
      {
          cout<<c<<endl; 
          c++;
          }  
       while (c!=40);
    system("pause");
    return 0;
}
