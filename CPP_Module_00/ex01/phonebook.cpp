/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 02:57:28 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/20 05:49:13 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <cctype>
#include <iostream>
#include <cstring>

void Phonebook::addContact()
{
    if (len >= MAX_CONTACTS)
    {
        std::cout << "Phonebook is full. Cannot add more contacts.\n";
    }
    else
    {
        Contact newContact;
        newContact.fillContact();
        contacts[len] = newContact;
        len++;
    }
}

#include <iomanip> // Include the <iomanip> header for setw

// // ...

// void Phonebook::displayContacts()
// {
//     if (len == 0)
//     {
//         std::cout << "Phonebook is empty.\n";
//         return;
//     }

//     std::cout << "Contacts in Phonebook:\n";
//     std::cout << "----------------------------------\n";
//     std::cout << "| Index |  First Name | Last Name  | Nickname   |\n";
//     std::cout << "----------------------------------\n";

//     for (int i = 0; i < len; i++)
//     {
//         std::cout << "| " << std::right << std::setw(6) << i + 1 << " |"
//                   << std::right << std::setw(12) << contacts[i].truncateText(contacts[i].getFirstName(), 10) << " |"
//                   << std::right << std::setw(12) << contacts[i].truncateText(contacts[i].getLastName(), 10) << " |"
//                   << std::right << std::setw(12) << contacts[i].truncateText(contacts[i].getNickname(), 10) << " |\n";
//     }

//     std::cout << "----------------------------------\n";
// }

void Phonebook::displayContacts()
{
    if (len == 0)
    {
        std::cout << "Phonebook is empty.\n";
    }
    else
    {
        std::cout << "Contacts in Phonebook:\n";
        std::cout << "-------------------------------------------------\n";
        std::cout << "| Index |  First Name | Last Name  | Nickname   |\n";
        std::cout << "------------------------------------------------|\n";
        for (int i = 0; i < len; i++)
        {
            std::cout << "| ";
            std::cout.width(5);
            std::cout << std::left << i + 1 << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getFirstName(), 10) << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getLastName(), 10) << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getNickname(), 10) << " |\n";
        }
        std::cout << "------------------------------------------------|\n";
    }
}


// void Phonebook::searchContact()
// {
//     if (len == 0)
//     {
//         std::cout << "Phonebook is empty.\n";
//         return;
//     }

//     while (true)
//     {
//         bool isValidIndex = true;
//         std::string index;
//         std::cout << "Enter the index of the contact you want to display: ";
//         std::getline(std::cin, index);
//         int s = index.length();
//         for (int i = 0; i < s; i++)
//         {
//             if (!isdigit(index[i]))
//             {
//                 isValidIndex = false;
//                 break;
//             }
//         }
//         if (!isValidIndex)
//         {
//             std::cout << "Invalid input. Please enter a valid index (numeric digits only): ";
//             continue; // Ask for input again
//         }
//         else
//         {
//             int a = std::stoi(index);

//             if (a < 1 || a > len)
//             {
//                 std::cout << "Invalid index. Please try again.\n";
//             }
//             else
//             {
//                 std::cout << "Contact Information:\n";
//                 std::cout << "----------------------------------\n";
//                 contacts[a - 1].displayContact();
//                 break; // Valid index, break out of the loop
//             }
//         }
//     }
// }

void Phonebook::searchContact()
{
    if (len == 0)
    {
        std::cout << "Phonebook is empty.\n";
        return;
    }

    std::string index;
    std::cout << "Enter the index of the contact you want to display: ";
    std::getline(std::cin, index);
    
    for (int i = 0;index[i];i++)
    {
        if (!isdigit(index[i]))
        {
            std::cout << "please entre number" << std::endl;
            return ;
        }
    }
    int a = std::stoi(index);
    if (a < 1 || a > len)
    {
        std::cout << "Invalid index. Please try again.\n";
    }
    else
    {
        std::cout << "Contact Information:\n";
        std::cout << "----------------------------------\n";
        contacts[a - 1].displayContact();
    }
}