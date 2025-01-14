

#include <iostream>

struct Bank
{
    int NUmberczet;
    std::string Name;
    double Money;

}; 

int invoiceBank() 
{
    Bank bank;
    Bank* P_bank = &bank;
    std::cout << "Введите номер счёта: ";
    std::cin >> P_bank->NUmberczet;
    std::cout << "Введите имя владельца: ";
    std::cin >> P_bank->Name;
    std::cout << "Введите баланс: ";
    std::cin >> P_bank->Money;
    std::cout << "Введите новый баланс: ";
    std::cin >> P_bank->Money;
    std::cout << "Ваш счёт: " << P_bank->NUmberczet << ", " << P_bank->Name << ", " << P_bank->Money;
}


int main()
{
    setlocale(LC_ALL, "Ru");
    invoiceBank();
  

}

