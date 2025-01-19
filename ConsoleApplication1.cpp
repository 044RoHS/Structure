#include <iostream>
#include <string>

 
enum class Season
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
  
int main()
{
    int input = 0;
    const int end_input = 0;
    setlocale(LC_ALL, "RU");


    while (true)
    {
        std::cout << "Введите номер месяца или 0 для выхода: ";
        std::cin >> input;
        if (input > static_cast<int>(Season::December))
        {
            std::cout << "Месяца с таким номером не существует!" << std::endl;
            continue;
        }
        else if (input == end_input)
        {
            std::cout << "До встречи!" << std::endl;
            break;
        }
        Season m = static_cast<Season>(input);

        switch (m)
        {
        case (Season::January):
            std::cout << "Январь" << std::endl;
            break;
        case (Season::February):
            std::cout << "Февраль" << std::endl;
            break;
        case (Season::March):
            std::cout << "Март" << std::endl;
            break;
        case (Season::April):
            std::cout << "Апрель" << std::endl;
            break;
        case (Season::May):
            std::cout << "Май" << std::endl;
            break;
        case (Season::June):
            std::cout << "Июнь" << std::endl;
            break;
        case (Season::July):
            std::cout << "Июль" << std::endl;
            break;
        case (Season::August):
            std::cout << "Август" << std::endl;
            break;
        case (Season::September):
            std::cout << "Сентабрь" << std::endl;
            break;
        case (Season::October):
            std::cout << "Октябрь" << std::endl;
            break;
        case (Season::November):
            std::cout << "Ноябрь" << std::endl;
            break;
        case(Season::December):
            std::cout << "Декабрь" << std::endl;
            break;

        }

    }
}

    

    

