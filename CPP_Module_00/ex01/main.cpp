/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 04:48:22 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/19 02:05:52 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <string>

// class Contact
// {
//     private:
//     std::string first_name;
//     std::string last_name;
//     std::string nickname;
//     std::string phonenumber;
//     std::string dark_secret;
//     public:
//     void fillContact();
//     std::string truncateText(const std::string& text, int width);
// };

// class Phonebook
// {
//     public:
//     static const int MAX_CONTACTS = 8;
//     Contact contacts[MAX_CONTACTS];
//     int len;
//     void add_contacts();
//     void search_contact();
//     void display_contact();

// };


// void	Contact::fillContact()
// {
//     std::cout << "Please enter contact info: "<<std::endl;
// 	std::cout << "first_name: ";
//     getline(std::cin, first_name);
// 	std::cout << "last_name: ";
//     getline(std::cin, last_name);
// 	std::cout << "nickname: ";
//     getline(std::cin, nickname);
// 	std::cout << "phonenumber: ";
//     getline(std::cin, phonenumber);
// 	std::cout << "dark_secret: ";
//     getline(std::cin, dark_secret);
// }

// void Phonebook::add_contacts()
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
//        // std::cout << "Contact added successfully.\n";
//        // std::cout << "this is number of contact = " << len << std::endl;
//     }
// }

// std::string Contact::truncateText(const std::string& text, int width)
// {
//     if (text.length() <= width)
//         return text;
//     else
//         return text.substr(0, width - 1) + ".";
// }

// void Phonebook::display_contact()
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
//             std::cout << std::right << i + 1 << " |";
//             std::cout.width(12);
//             std::cout << std::right << contacts[i].truncateText(contacts[i].first_name, 10) << " |";
//             std::cout.width(12);
//             std::cout << std::right << contacts[i].truncateText(contacts[i].last_name, 10) << " |";
//             std::cout.width(12);
//             std::cout << std::right << contacts[i].truncateText(contacts[i].nickname, 10) << " |\n";
//         }
//         std::cout << "----------------------------------\n";
//     }
// }

// void Phonebook::search_contact()
// {
//     if (len == 0)
//     {
//         std::cout<< "phonebook is empty " << std::endl;
//         return ;
//     }
//     int index;
//     std::string str;
//     std::cout << "Enter the index of the contact you want to display: ";
//     getline(std::cin,str);
//     if (index < 1 || index > len)
//     {
//         std::cout << "Invalid index. Please try again.\n";
//     }
//     else
//     {
//         std::cout << "Contact Information:\n";
//         std::cout << "----------------------------------\n";
//         contacts[index - 1].display_contact();
//     }
// }

// int main()
// {
//     Phonebook book;
//     book.len = 0;
//     std::string str;
//     while (1)
//     {
//         std::cout<< "entre > :";
//         getline(std::cin,str);
//         if (str == "ADD")
//             book.add_contacts();
//         else if (str == "SEARCH")
//             book.search_contact();
//         // std::cout << "this is number of contact = " << book.len << std::endl;
//     }
// }


#include <iostream>
#include <string>

class Contact
{
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phonenumber;
    std::string dark_secret;

public:
    void fillContact();
    void displayContact();
    std::string truncateText(const std::string& text, int width);
};

class Phonebook
{
public:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int length;

    void addContact();
    void displayContacts();
    void searchContact();
};

void Contact::fillContact()
{
    std::cout << "Please enter contact info:\n";
    std::cout << "First Name: ";
    getline(std::cin, first_name);
    std::cout << "Last Name: ";
    getline(std::cin, last_name);
    std::cout << "Nickname: ";
    getline(std::cin, nickname);
    std::cout << "Phone Number: ";
    getline(std::cin, phonenumber);
    std::cout << "Dark Secret: ";
    getline(std::cin, dark_secret);
}

void Contact::displayContact()
{
    std::cout << "First Name: " << first_name << "\n";
    std::cout << "Last Name: " << last_name << "\n";
    std::cout << "Nickname: " << nickname << "\n";
    std::cout << "Phone Number: " << phonenumber << "\n";
    std::cout << "Dark Secret: " << dark_secret << "\n";
    std::cout << std::endl;
}

std::string Contact::truncateText(const std::string& text, int width)
{
    if (text.length() <= width)
        return text;
    else
        return text.substr(0, width - 1) + ".";
}

void Phonebook::addContact()
{
    if (length >= MAX_CONTACTS)
    {
        std::cout << "Phonebook is full. Cannot add more contacts.\n";
    }
    else
    {
        Contact newContact;
        newContact.fillContact();
        contacts[length] = newContact;
        length++;
        std::cout << "Contact added successfully.\n";
    }
}

void Phonebook::displayContacts()
{
    if (length == 0)
    {
        std::cout << "Phonebook is empty.\n";
    }
    else
    {
        std::cout << "Contacts in Phonebook:\n";
        std::cout << "----------------------------------\n";
        std::cout << "| Index |  First Name | Last Name  | Nickname   |\n";
        std::cout << "----------------------------------\n";
        for (int i = 0; i < length; i++)
        {
            std::cout << "| ";
            std::cout.width(6);
            std::cout << std::right << i + 1 << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].first_name, 10) << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].last_name, 10) << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].nickname, 10) << " |\n";
        }
        std::cout << "----------------------------------\n";
    }
}

void Phonebook::searchContact()
{
    if (length == 0)
    {
        std::cout << "Phonebook is empty.\n";
        return ;
    }

    std::string index;
    std::cout << "Enter the index of the contact you want to display: ";
    std::getline(std::cin,index);
    int a = std::stoi(index);
    if (a < 1 || a > length)
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

int main()
{
    Phonebook book;
    book.length = 0;
    std::string input;

    while (true)
    {
        std::cout << "Enter a command (ADD, DISPLAY, SEARCH, QUIT): ";
        getline(std::cin, input);

        if (input == "ADD")
        {
            book.addContact();
        }
        else if (input == "SEARCH")
        {
            book.displayContacts();
        }
        else if (input == "SEARCH")
        {
            book.searchContact();
        }
        else
        {
            std::cout << "Invalid command. Please try again.\n";
        }
    }

    return 0;
}
