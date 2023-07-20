/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 02:57:28 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/20 15:39:45 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>
#include "phonebook.hpp"

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
            std::cout << std::setw(5);
            std::cout << std::left << i + 1 << " |";
            std::cout << std::setw(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getFirstName(), 10) << " |";
            std::cout << std::setw(11);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getLastName(), 10) << " |";
            std::cout << std::setw(11);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getNickname(), 10) << " |\n";
        }
        std::cout << "------------------------------------------------|\n";
    }
}

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