/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:03 by ufo               #+#    #+#             */
/*   Updated: 2025/04/02 13:23:13 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog(): Animal() {
    this->_type = "Dog";
    std::cout << "Dog DefaultInit is called\n";
}

Dog:: Dog(const Dog &other): Animal(other) {
    std::cout << "Dog CopyInit is called\n";
}

Dog& Dog:: operator= (const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Dog CopyAssignmentInit is called\n";
    return (*this);
}

Dog:: ~Dog() {
     std::cout << "Destructor called for Dog\n" << std::endl;
}

void Dog:: makeSound() const{
     std::cout << "Bark...\n" << std::endl;
}