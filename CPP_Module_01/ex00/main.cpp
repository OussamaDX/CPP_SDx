/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:57:23 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/27 13:16:47 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string& name) : name(name) {}

    void announce() {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }

    ~Zombie() {
        std::cout << "Zombie " << name << " destroyed." << std::endl;
    }
};

// Function to create a new Zombie on the heap and return a pointer to it
Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

// Function to create a new Zombie on the stack and announce it
void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
    // Destructor will be called when the zombie object goes out of scope
}

int main() {
    // Creating a Zombie on the heap
    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();

    // Creating a Zombie on the stack and announcing it
    randomChump("Stack Zombie");

    // Remember to delete the heap-allocated Zombie to free memory
    delete heapZombie;
    return 0;
}
