/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:09:28 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 20:11:26 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
//
//Constructors
//
WrongAnimal:: WrongAnimal(): _type("WrongAnimal") {
    std::cout << "WrongAnimal DefaultInit is called\n";
}

WrongAnimal:: WrongAnimal(const WrongAnimal &other) {
    *this = other;
    std::cout << "WrongAnimal CopyInit is called\n";
}

WrongAnimal& WrongAnimal:: operator=(const WrongAnimal& other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "WrongAnimal CopyAssignmentInit is called\n";
    return (*this);
}

WrongAnimal:: ~WrongAnimal() {
     std::cout << "Destructor called for WrongAnimal\n" << std::endl;
}

//
//Methods
//
void WrongAnimal:: makeSound() const {
    std::cout << "aaaaaaWrongAnimal\n";
}

std::string WrongAnimal:: getType() const {
    return (this->_type);
}


