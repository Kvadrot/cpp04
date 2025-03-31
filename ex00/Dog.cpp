/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:03 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 18:50:13 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog(): Animal() {
    this->_type = "Dog";
    std::cout << "Dog DefaultInit is called";
}

Dog:: Dog(const Dog &other): Animal() {
    *this = other;
    std::cout << "Dog CopyInit is called";
}

Dog& Dog:: operator= (const Dog &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Dog CopyAssignmentInit is called";
    return (*this);
}

Dog:: ~Dog() {
     std::cout << "Destructor called for Dog" << std::endl;
}

void Dog:: makeSound() {
     std::cout << "BAAAAARK...\n" << std::endl;
}