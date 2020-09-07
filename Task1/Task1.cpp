#include <iostream>
#include <string>

std::string name = "";
char initial;
int age;
long phoneNumber;
int birthMonth;
int birthDate;
int currentYear = 2020;


int main()
{
    std::cout << "What is the first letter in your name? ";
    std::cin >> initial; 
    std::cin.ignore();

    std::cout << "What is your full name? ";
    std::getline(std::cin, name);
    //std::cin.ignore();

    std::cout << "How old are you? ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Please write your phone number here: ";
    std::cin >> phoneNumber;
    std::cin.ignore();

    std::cout << "Which month is your birthday? ";
    std::cin >> birthMonth;
    std::cin.ignore();

    std::cout << "What day in the month is your birthday? ";
    std::cin >> birthDate;



    std::cout << "----------------------------\n| Name      | "<<name<<"\n| Initial   | "<<initial<<"\n| Age       | "<<age<<"\n| Phone num | "
        << phoneNumber << "\n| Birthday  | " << birthMonth << "/" << birthMonth << "/" << currentYear - age << "\n----------------------------";

    
}
