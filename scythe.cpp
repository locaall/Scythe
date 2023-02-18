#include <iostream>
#include <string>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>

std::string name, surname;
int age, day, month, year;


std::string NameSurname(std::string name, std::string surname) {
    int count = 0;
    char answer = 'y';

    
    std::string hello = "Hello. I am small robot called 'Scythe'. This is small, yet efficient test to refresh my data.\nI will ask You some personal questions and you will be required to answer them correctly, please :)\n";
    while (hello[count] != '\0') {
        std::cout << hello[count];
        Sleep(25 + rand() % 25);
        count++;
    };
    questions:
    Sleep(2000); system("CLS");
    std::cout << "Okay. What is your first name? "; std::cin >> name;
    std::cout << "Okay. What is your second name (surname)? "; std::cin >> surname;
    std::cout << "So, your full-name is: " << name << " " << surname << ", right? (Y/N) "; std::cin >> answer;
    if (answer == 'y' || answer == 'Y') {
        Sleep(2000); system("CLS");
        std::cout << "Nice to meet you, " << name << " " << surname << "!" << std::endl;
    } else {
        goto questions;
    };
    std::cout << "How old are you? "; std::cin >> age;
    std::cout << "Can you now enter your birthdate?" << std::endl;
    std::cout << "Day: "; std::cin >> day;
    std::cout << "Month: "; std::cin >> month;
    std::cout << "Year: "; std::cin >> year; std::cout << std::endl;
    std::cout << "Okay, here's your data: " << std::endl;
    std::cout << "First name: " << name << std::endl;
    std::cout << "Last name: " << surname << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Birthdate: " << day << " " << month << " " << year << std::endl;
}
    

int main() {
    std::string input = NameSurname(name, surname);
    return 0;
}