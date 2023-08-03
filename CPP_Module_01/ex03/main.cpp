/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:15:21 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/28 18:05:27 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& weaponType) : type(weaponType) {}

    std::string& getType() {
        return type;
    }

    void setType(const std::string& newType) {
        type = newType;
    }
};

class HumanA {
private:
    std::string name;
    Weapon weapon;

public:
    HumanA(const std::string& humanName, Weapon weaponType) : name(humanName), weapon(weaponType) {}

    void attack() {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    }
};

class HumanB {
private:
    std::string name;
    Weapon* weapon; // Use a pointer to Weapon

public:
    HumanB(const std::string& humanName) : name(humanName), weapon(nullptr) {}

    void setWeapon(Weapon* newWeapon) {
        weapon = newWeapon;
    }

    void attack() {
        if (weapon) {
            std::cout << name << " attacks with their " << weapon->getType() << std::endl;
        } else {
            std::cout << name << " is unarmed and cannot attack." << std::endl;
        }
    }
};

int main() {
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(&club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}
