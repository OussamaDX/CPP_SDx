/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:15:50 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/20 03:00:38 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <string>

// class Contact
// {
// private:
//     std::string first_name;
//     std::string last_name;
//     std::string nickname;
//     std::string phonenumber;
//     std::string dark_secret;

// public:
//     std::string getFirstName();
//     std::string getLastName();
//     std::string getNickname();
//     std::string getPhoneNumber();
//     std::string getDarkSecret();

//     void fillContact();
//     void displayContact();
//     std::string truncateText(const std::string& text, int width);
// };
#include "contact.hpp"
#include "phonebook.hpp"

// class Phonebook
// {
// private:
//     static const int MAX_CONTACTS = 8;
//     Contact contacts[MAX_CONTACTS];
//     int len;

// public:
//     Phonebook()
//     {
//         len = 0;
//     }
//     void addContact();
//     void displayContacts();
//     void searchContact();
// };

// std::string Contact::getFirstName()
// {
//     return first_name;
// }

// std::string Contact::getLastName()
// {
//     return last_name;
// }

// std::string Contact::getNickname()
// {
//     return nickname;
// }

// std::string Contact::getPhoneNumber()
// {
//     return phonenumber;
// }

// std::string Contact::getDarkSecret()
// {
//     return dark_secret;
// }

// void Contact::fillContact()
// {
//     std::cout << "Please enter contact info:\n";
//     std::cout << "First Name: ";
//     getline(std::cin, first_name);
//     std::cout << "Last Name: ";
//     getline(std::cin, last_name);
//     std::cout << "Nickname: ";
//     getline(std::cin, nickname);
//     std::cout << "Phone Number: ";
//     getline(std::cin, phonenumber);
//     std::cout << "Dark Secret: ";
//     getline(std::cin, dark_secret);
// }

// void Contact::displayContact()
// {
//     std::cout << "First Name: " << first_name << "\n";
//     std::cout << "Last Name: " << last_name << "\n";
//     std::cout << "Nickname: " << nickname << "\n";
//     std::cout << "Phone Number: " << phonenumber << "\n";
//     std::cout << "Dark Secret: " << dark_secret << "\n";
//     std::cout << std::endl;
// }

// std::string Contact::truncateText(const std::string& text, int width)
// {
//     int a = text.length();
//     if (a <= width)
//         return text;
//     else
//         return text.substr(0, width - 1) + ".";
// }

// Phonebook class implementation
// void Phonebook::addContact()
// {
//     if (len >= MAX_CONTACTS)
//     {
//         std::cout << "Phonebook is full. Cannot add more contacts.\n";
//     }
//     else
//     {
//         Contact newContact;
//         newContact.fillContact();
//         contacts[len] = newContact;
//         len++;
//     }
// }

// void Phonebook::displayContacts()
// {
//     if (len == 0)
//     {
//         std::cout << "Phonebook is empty.\n";
//     }
//     else
//     {
//         std::cout << "Contacts in Phonebook:\n";
//         std::cout << "----------------------------------\n";
//         std::cout << "| Index |  First Name | Last Name  | Nickname   |\n";
//         std::cout << "----------------------------------\n";
//         for (int i = 0; i < len; i++)
//         {
//             std::cout << "| ";
//             std::cout.width(6);
//             std::cout << std::left << i + 1 << " |";
//             std::cout.width(12);
//             std::cout << std::right << contacts[i].truncateText(contacts[i].getFirstName(), 10) << " |";
//             std::cout.width(12);
//             std::cout << std::right << contacts[i].truncateText(contacts[i].getLastName(), 10) << " |";
//             std::cout.width(12);
//             std::cout << std::right << contacts[i].truncateText(contacts[i].getNickname(), 10) << " |\n";
//         }
//         std::cout << "----------------------------------\n";
//     }
// }

// void Phonebook::searchContact()
// {
//     if (len == 0)
//     {
//         std::cout << "Phonebook is empty.\n";
//         return;
//     }

//     std::string index;
//     std::cout << "Enter the index of the contact you want to display: ";
//     std::getline(std::cin, index);
//     int a = std::stoi(index);
//     std::cout <<"this is a = " << a << std::endl;
//     if (a < 1 || a > len)
//     {
//         std::cout << "Invalid index. Please try again.\n";
//     }
//     else
//     {
//         std::cout << "Contact Information:\n";
//         std::cout << "----------------------------------\n";
//         contacts[a - 1].displayContact();
//     }
// }

int main()
{
    Phonebook book;
    std::string input;

    while (true)
    {
        std::cout << "Enter a command : ";
        getline(std::cin, input);

        if (input == "ADD")
        {
            book.addContact();
        }
        else if (input == "SEARCH")
        {
            book.displayContacts();
            book.searchContact();
        }
        else if (input == "EXIT")
        {
            exit(0);
        }
        else
        {
            std::cout << "Invalid command. Please try again.\n";
        }
    }

    return 0;
}