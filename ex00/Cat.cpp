/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:00:55 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 19:03:58 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat(): Animal() {
    this->_type = "Cat";
    std::cout << "CAT DefaultInit is called\n";
}

Cat:: Cat(const Cat &other): Animal() {
    *this = other;
    std::cout << "CAT CopyInit is called\n";
}

Cat& Cat:: operator= (const Cat &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "CAT CopyAssignmentInit is called\n";
    return (*this);
}

Cat:: ~Cat() {
     std::cout << "Destructor called for CAT\n" << std::endl;
}

void Cat:: makeSound() const{
     std::cout << "MEEEEEEOOOW...\n" << std::endl;
}