/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:41:15 by ooussaad          #+#    #+#             */
/*   Updated: 2023/08/01 12:41:47 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedPoint.hpp"

FixedPoint::FixedPoint() : value(0) {
    // Default constructor initializes the value to 0
}

FixedPoint::FixedPoint(const FixedPoint& other) : value(other.value) {
    // Copy constructor copies the value from the other object
}

FixedPoint& FixedPoint::operator=(const FixedPoint& other) {
    if (this == &other) {
        return *this; // Self-assignment, no need to do anything
    }

    value = other.value; // Copy the value from the other object
    return *this;
}

FixedPoint::~FixedPoint() {
    // Destructor (if needed) - nothing to do in this case
}

int FixedPoint::getRawBits() const {
    return value; // Return the raw value
}

void FixedPoint::setRawBits(int const raw) {
    value = raw; // Set the raw value
}
