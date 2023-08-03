/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:18:34 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/27 17:24:43 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;

public:
    // Constructor with name parameter
    Zombie(std::string& name) : name(name) {}

    void announce() {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }

    ~Zombie() {
        std::cout << "Zombie " << name << " destroyed." << std::endl;
    }
};

Zombie** zombieHorde(int N, std::string name) {
    Zombie** horde = new Zombie*[N]; // Allocate N Zombie objects in a single allocation

    for (int i = 0; i < N; ++i) {
        horde[i] = new Zombie(name); // Initialize each zombie with the given name
    }

    return horde;
}

int main() {
    int size = 20;
    Zombie** horde = zombieHorde(size, "Zom");

    for (int i = 0; i < size; i++)
        horde[i]->announce();

    for (int i = 0; i < size; i++)
        delete horde[i]; // Delete individual Zombies
    // delete[] horde;

    return 0;
}

/*

Apologies for the confusion. The double pointer Zombie** is used to create an array of pointers to Zombie objects.

In the zombieHorde function, we need to create an array of Zombie objects, and each Zombie object is dynamically allocated on the heap using new. To store these dynamically allocated Zombie objects, we use an array of pointers to Zombie objects. That's why we use a double pointer Zombie**.

Here's a breakdown of the process:

Zombie** horde = new Zombie*[N];: This line allocates memory on the heap to store an array of N pointers to Zombie objects.
for (int i = 0; i < N; ++i) { horde[i] = new Zombie(name); }: This loop creates individual Zombie objects using the constructor with the given name and assigns each dynamically created Zombie object's address to the corresponding element in the horde array.
Using a double pointer allows us to manage an array of pointers, which can point to dynamically allocated Zombie objects. We use this approach to ensure all the zombies are stored in contiguous memory, making it easier to deallocate them later.

If you prefer to use a single pointer and an array of Zombie objects, you can achieve it like this:
*/
