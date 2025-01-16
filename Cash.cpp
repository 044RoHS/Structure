

#include <iostream>

struct Bank
{
    int NUmberczet;
    std::string Name;
    double Money;

}; 

void invoiceBank(Bank* b, int* a) 
{
    b->NUmberczet;
    b->Name;
    b->Money;
    int Money = *a;
  
   
}


int main()
{
    setlocale(LC_ALL, "Ru");
    int NewMoney;
    Bank bank;
    std::cout << "Введите номер счёта: ";
    std::cin >> bank.NUmberczet;
    std::cout << "Введите имя владельца: ";
    std::cin >> bank.Name;
    std::cout << "Введите баланс: ";
    std::cin >>bank.Money;
    std::cout << "Введите новый баланс: ";
    std::cin >>  NewMoney;
    invoiceBank(&bank,&NewMoney);
    std::cout << "Ваш счёт: " << bank.NUmberczet << ", " << bank.Name << ", " << NewMoney;

}

