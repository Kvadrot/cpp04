/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:00:55 by ufo               #+#    #+#             */
/*   Updated: 2025/04/01 16:12:35 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat(): Animal() {
    this->_type = "Cat";
    this->brain = new Brain();
    std::cout << "CAT DefaultInit is called\n";
}

Cat:: Cat(const Cat &other): Animal() {
    *this = other;
    std::cout << "CAT CopyInit is called\n";
}

Cat& Cat:: operator= (const Cat &other) {
    if (this != &other) {
        this->_type = other._type;
        this->brain = other.brain;
    }
    std::cout << "CAT CopyAssignmentInit is called\n";
    return (*this);
}

Cat:: ~Cat() {
     std::cout << "Destructor called for CAT\n" << std::endl;
     delete this->brain;
}

void Cat:: makeSound() const{
     std::cout << "MEEEEEEOOOW...\n" << std::endl;
}