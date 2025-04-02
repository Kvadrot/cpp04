/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:00:55 by ufo               #+#    #+#             */
/*   Updated: 2025/04/02 13:07:01 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//
//Init
//
Cat:: Cat(): Animal() {
    this->_type = "Cat";
    this->brain = new Brain();
    std::cout << "CAT DefaultInit is called\n";
}

Cat:: Cat(const Cat &other): Animal(other) {
	this->brain = new Brain(*other.brain);
    std::cout << "CAT CopyInit is called\n";
}

Cat& Cat:: operator= (const Cat &other) {
    if (this != &other) {
		Animal:: operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
    }
    std::cout << "CAT CopyAssignmentInit is called\n";
    return (*this);
}

Cat:: ~Cat() {
     std::cout << "Destructor called for CAT\n" << std::endl;
     delete this->brain;
}

//
//Mehtods
//
void Cat:: makeSound() const{
     std::cout << "MEEEEEEOOOW...\n" << std::endl;
}

std::string Cat:: getIdea(const int ind) {
	return (this->brain->getIdeaByInd(ind));
}

void Cat:: setIdea(const int ind, const std::string idea) {
	this->brain->setIdea(ind, idea);
}