#include <iostream>
#include <map>
#include<string>

bool isValidDate(int day, int month, int year)
{
    if (month <= 0 || month > 12)
    {
        std::cout << "The month " << month << " is not valid" << std::endl;
        return false;
    }

    int minPossibleDay = 1;
    int maxPossibleDay = 31;
    if (day < minPossibleDay || day > maxPossibleDay)
    {
        std::cout << "The day " << day << " is not valid" << std::endl;
        return false;
    }

    if (year < 1909 || year > 2026)
    {
        std::cout << "The year " << year << " is not valid" << std::endl;
        return false;
    }

    return true;
    //std::map<std::string, int> monthsToDays =
    //{
    //    {"January", 31},
    //            {"January", 31},
    //    {"January", 31},
    //    {"January", 31},
    //    {"January", 31},

    //}
}

int calculateAge(int birthDay, int birthMonth, int birthYear, int currentDay, int currentMonth, int currentYear)
{
    int age = 0;
    if (currentMonth > birthMonth)
    {
        age = currentYear - birthYear;
    }

    else
    {
        age = currentYear - birthYear;
    }
    return age;
}

int main()
{
    int birthDay = 0, birthMonth = 0, birthYear = 0;

    while (isValidDate(birthDay, birthMonth, birthYear) == false)
    {
        std::cout << "Enter your Birth day (ex: 5th day type 5)" << std::endl;
        std::cin >> birthDay;

        std::cout << "Enter your birth month (ex:october type 10)" << std::endl;
        std::cin >> birthMonth;

        std::cout << "Enter your Birth year (ex: 1999 or 2000)" << std::endl;
        std::cin >> birthYear;
    }

    int currentDay = 22;
    int currentMonth = 10;
    int currentYear = 2026;

    int age= calculateAge(birthDay, birthMonth, birthYear, currentDay, currentMonth, currentYear);
    std::cout << "Your age is " << age << std::endl;
}
