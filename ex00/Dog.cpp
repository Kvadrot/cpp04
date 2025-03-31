/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:03 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 19:04:12 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog(): Animal() {
    this->_type = "Dog";
    std::cout << "Dog DefaultInit is called\n";
}

Dog:: Dog(const Dog &other): Animal() {
    *this = other;
    std::cout << "Dog CopyInit is called\n";
}

Dog& Dog:: operator= (const Dog &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Dog CopyAssignmentInit is called\n";
    return (*this);
}

Dog:: ~Dog() {
     std::cout << "Destructor called for Dog\n" << std::endl;
}

void Dog:: makeSound() const {
     std::cout << "BAAAAARK...\n" << std::endl;
}