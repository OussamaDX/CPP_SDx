/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:26:51 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/30 19:19:27 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    public:
    void    complain(std::string level);
};

void	Harl::debug(void)
{
	std::cout << "[DEBUG]   ";
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]    ";
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don’t put enough! If you did I would not have to ask";
	std::cout << " for it!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] ";
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]   ";
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}


void Harl::complain(std::string level)
{
    void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (size_t i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*ptr[i])();
            break;
        }
    } 
}

int main()
{
    Harl object;
    object.complain("DEBUG");
    object.complain("INFO");
    object.complain("WARNING");
    object.complain("ERROR");
    return 0;
}
