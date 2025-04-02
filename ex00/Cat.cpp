/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:00:55 by ufo               #+#    #+#             */
/*   Updated: 2025/04/02 13:20:08 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat:: Cat(): Animal() {
    this->_type = "Cat";
    std::cout << "CAT DefaultInit is called\n";
}

Cat:: Cat(const Cat &other): Animal(other) {
    std::cout << "CAT CopyInit is called\n";
}

Cat& Cat:: operator= (const Cat &other) {
    if (this != &other) {
        Animal::operator=(other);
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