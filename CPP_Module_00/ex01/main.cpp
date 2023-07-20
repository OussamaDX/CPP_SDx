/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:15:50 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/20 03:04:59 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

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