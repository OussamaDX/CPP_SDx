/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 02:57:22 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/20 03:00:24 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::getFirstName()
{
    return first_name;
}

std::string Contact::getLastName()
{
    return last_name;
}

std::string Contact::getNickname()
{
    return nickname;
}

std::string Contact::getPhoneNumber()
{
    return phonenumber;
}

std::string Contact::getDarkSecret()
{
    return dark_secret;
}

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
    int a = text.length();
    if (a <= width)
        return text;
    else
        return text.substr(0, width - 1) + ".";
}
