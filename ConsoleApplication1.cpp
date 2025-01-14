#include <iostream>
#include <string>

 
enum class Season
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентабрь,
    Октябрь,
    Ноябрь,
    Декабрь
};
  
int main()
{
    int NumberMonth;
    setlocale(LC_ALL, "RU");
   

    while (1) 
    {
        std::cout << "Введите номер месяца:" << " ";
        std::cin >> NumberMonth;
        if(NumberMonth != 0)
        {
            switch (NumberMonth)
            {
            case static_cast<int>(Season::Январь):
                std::cout << "Январь" << std::endl;
                break;
            case static_cast<int>(Season::Февраль):
                std::cout << "Февраль" << std::endl;
                break;
            case static_cast<int>(Season::Март):
                std::cout << "Март" << std::endl;
                break;
            case static_cast<int>(Season::Апрель):
                std::cout << "Апрель" << std::endl;
                break;
            case static_cast<int>(Season::Май):
                std::cout << "Май" << std::endl;
                break;
            case static_cast<int>(Season::Июнь):
                std::cout << "Июнь" << std::endl;
                break;
            case static_cast<int>(Season::Июль):
                std::cout << "Июль" << std::endl;
                break;
            case static_cast<int>(Season::Август):
                std::cout << "Август" << std::endl;
                break;
            case static_cast<int>(Season::Сентабрь):
                std::cout << "Сентабрь" << std::endl;
                break;
            case static_cast<int>(Season::Октябрь):
                std::cout << "Октябрь" << std::endl;
                break;
            case static_cast<int>(Season::Ноябрь):
                std::cout << "Ноябрь" << std::endl;
                break;
            case static_cast<int>(Season::Декабрь):
                std::cout << "Декабрь" << std::endl;
                break;
            default:
                std::cout << "Неправильный номер!" << std::endl;

            }
        }
        else 
        {
            std::cout << "До свидания " << std::endl;
            break;
        }
            
        
        
       
      
    }
    






}

    

