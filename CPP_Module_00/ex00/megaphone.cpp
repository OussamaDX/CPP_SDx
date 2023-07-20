/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:26:43 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/20 15:41:29 by ooussaad         ###   ########.fr       */
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
            std::cout << " ";
        }
    	std::cout << std::endl;
    }
    else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}