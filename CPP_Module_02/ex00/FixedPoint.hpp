/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:03:13 by ooussaad          #+#    #+#             */
/*   Updated: 2023/08/01 12:38:40 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef FIXEDPOINT_HPP
#define FIXEDPOINT_HPP

class FixedPoint 
{
private:

    int value; // Integer to store the fixed-point number value
    static const int fractionalBits = 8; // Number of fractional bits (constant)
public:
    FixedPoint(); // Default constructor
    FixedPoint(const FixedPoint& other); // Copy constructor
    FixedPoint& operator=(const FixedPoint& other); // Assignment operator
    ~FixedPoint(); // Destructor

    int getRawBits() const; // Member function to get the raw value
    void setRawBits(int const raw); // Member function to set the raw value
};

#endif // FIXEDPOINT_HPP
