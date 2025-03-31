/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:00:55 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 18:10:53 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat(): Animal() {
    this->_type = "Cat";
    std::cout << "CAT DefaultInit is called";
}

Cat:: Cat(const Cat &other): Animal() {
    *this = other;
    std::cout << "CAT CopyInit is called";
}

Cat& Cat:: operator= (const Cat &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "CAT CopyAssignmentInit is called";
    return (*this);
}

Cat:: ~Cat() {
     std::cout << "Destructor called for CAT" << std::endl;
}

void Cat:: makeSound() {
     std::cout << "MEEEEEEOOOW...\n" << std::endl;
}