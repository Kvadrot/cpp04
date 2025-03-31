/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:16:52 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 20:17:17 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat:: WrongCat(): WrongAnimal() {
    this->_type = "WrongCat";
    std::cout << "WrongCat DefaultInit is called\n";
}

WrongCat:: WrongCat(const WrongCat &other): WrongAnimal() {
    *this = other;
    std::cout << "WrongCat CopyInit is called\n";
}

WrongCat& WrongCat:: operator= (const WrongCat &other) {
    if (this != &other) {
        this->_type = other._type;
    }
    std::cout << "WrongCat CopyAssignmentInit is called\n";
    return (*this);
}

WrongCat:: ~WrongCat() {
     std::cout << "Destructor called for WrongCat\n" << std::endl;
}
