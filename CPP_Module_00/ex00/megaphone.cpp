/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:26:43 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/17 04:39:29 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc,char **argv)
{   
    if (argc > 1)
    {
        for(int i = 1;argv[i];i++)
        {
            for(int j = 0;argv[i][j];j++)
            {
                std::cout<< (char)toupper(argv[i][j]);
            }
        }
    	std::cout << std::endl;
    }
    else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}