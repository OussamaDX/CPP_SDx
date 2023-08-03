/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:29:50 by ooussaad          #+#    #+#             */
/*   Updated: 2023/08/03 02:21:31 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedPoint.hpp"

class foo
{
    int *a;
    public:
    foo(int valeu = 0):a{new int(valeu)}{}
};

int main()
{
    foo a(10);
    std::cout << "helo";
}

