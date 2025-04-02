/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:23:10 by ufo               #+#    #+#             */
/*   Updated: 2025/04/02 13:17:54 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
//
//Constructors
//
Animal:: Animal(): _type("Animal") {
    std::cout << "Animal DefaultInit is called\n";
}

Animal:: Animal(const Animal &other): _type(other._type) {
    std::cout << "Animal CopyInit is called\n";
}

Animal& Animal:: operator=(const Animal& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Animal CopyAssignmentInit is called\n";
    return (*this);
}

Animal:: ~Animal() {
     std::cout << "Destructor called for Animal\n" << std::endl;
}

//
//Methods
//
void Animal:: makeSound() const {
    std::cout << "aaaaaaanimal\n";
}

std::string Animal:: getType() const {
    return (this->_type);
}


