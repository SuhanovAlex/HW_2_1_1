#include <iostream>

enum class months{
  Jan = 1,
  Feb,
  Mar,
  Apr,
  May,
  Jun,
  Jul,
  Aug,
  Sep,
  Oct,
  Nov,
  Dec
};

//функция проверяет, что введенное число в диапазоне от 1 (включительно) до 12 (включительно)
bool inputIsCorrect (int monthInput){
  return monthInput >= 1 && monthInput <= 12;
}

int main() {
  int monthInput {0};
  do{
    std::cout << "Введите номер месяца: ";
    std::cin >> monthInput;
    if (!inputIsCorrect(monthInput) && monthInput !=0){
      std::cout << "Неправильный номер!" << std::endl;
    }
    else if (monthInput ==0){
      std::cout << "До свидания";
    }
    else{
        months month = static_cast<months>(monthInput);
        switch (static_cast<int>(month)){
          case 1: std::cout << "Январь" << std::endl; break;
          case 2: std::cout << "Февраль" << std::endl; break;
          case 3: std::cout << "Март" << std::endl; break;
          case 4: std::cout << "Апрель" << std::endl; break;
          case 5: std::cout << "Май" << std::endl; break;
          case 6: std::cout << "Июнь" << std::endl; break;
          case 7: std::cout << "Июль" << std::endl; break;
          case 8: std::cout << "Август" << std::endl; break;
          case 9: std::cout << "Сентябрь" << std::endl; break;
          case 10: std::cout << "Октябрь" << std::endl; break;
          case 11: std::cout << "Ноябрь" << std::endl; break;
          case 12: std::cout << "Декабрь" << std::endl; break;
          default: std::cout << "Что-то пошло не так!" << std::endl; 
      }
    }
  }
    while (monthInput != 0);
 return 0;
}