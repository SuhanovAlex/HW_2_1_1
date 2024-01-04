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
        switch (month){
          case months::Jan: std::cout << "Январь" << std::endl; break;
          case months::Feb: std::cout << "Февраль" << std::endl; break;
          case months::Mar: std::cout << "Март" << std::endl; break;
          case months::Apr: std::cout << "Апрель" << std::endl; break;
          case months::May: std::cout << "Май" << std::endl; break;
          case months::Jun: std::cout << "Июнь" << std::endl; break;
          case months::Jul: std::cout << "Июль" << std::endl; break;
          case months::Aug: std::cout << "Август" << std::endl; break;
          case months::Sep: std::cout << "Сентябрь" << std::endl; break;
          case months::Oct: std::cout << "Октябрь" << std::endl; break;
          case months::Nov: std::cout << "Ноябрь" << std::endl; break;
          case months::Dec: std::cout << "Декабрь" << std::endl; break;
          default: std::cout << "Что-то пошло не так!" << std::endl; 
      }
    }
  }
    while (monthInput != 0);
 return 0;
}