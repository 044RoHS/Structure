
#include <iostream>

struct Adress
{
    std::string City;
    std::string Street;
    int NumberHome;
    int NumberApartment;
    int Index;
};

void InputStructer(Adress* ad) {
   
    std::cout << "Город: " << ad->City << "\n" << "Улица: " << ad->Street << "\n" << "Номер дома: " << ad->NumberHome << "\n" << "Номер квартиры:" << ad->NumberApartment << "\n" << "Индекс: " << ad->Index << std::endl;
}


int main()
{
    setlocale(LC_ALL, "Ru");
    Adress a;
    Adress* p_ad = &a;
    std::cin >> p_ad->City;
    std::cin >> p_ad->Street;
    std::cin >> p_ad->NumberHome;
    std::cin >> p_ad->NumberApartment;
    std::cin >> p_ad->Index;

    InputStructer(p_ad);
}


