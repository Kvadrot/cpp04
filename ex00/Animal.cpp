/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:23:10 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 18:49:58 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
//
//Constructors
//
Animal:: Animal(): _type("Animal") {
    std::cout << "Animal DefaultInit is called";
}

Animal:: Animal(const Animal &other) {
    *this = other;
    std::cout << "Animal CopyInit is called";
}

Animal& Animal:: operator=(const Animal& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "Animal CopyAssignmentInit is called";
    return (*this);
}

Animal:: ~Animal() {
     std::cout << "Destructor called for Animal" << std::endl;
}

//
//Methods
//
void Animal:: makeSound() {
    std::cout << "aaaaaaanimal\n";
}

std::string Animal:: getType() {
    return (this->_type);
}


