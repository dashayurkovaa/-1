#include <iostream>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::cout << "       Прізвище : Yurkova \n";
    std::cout << "           Ім`я : Daria \n";
    std::cout << "    По батькові : Vladimirovna \n";
    std::cout << "          Стать : Woman \n";
    std::cout << "Дата народження : 2006-09-17 \n";    
    std::cout << "         Адреса : Butova 240,Dnepr city \n";
    std::cout << " Номер телефону : +380976491163 \n";
    std::cout << " Місце навчання : MMF, DNU named after Oles Gonchar \n";
    std::cout << "          Група : MA-23-1 \n";
    std::cout << "           Хобі : I love to draw and sing \n";
    system("pause");
}
