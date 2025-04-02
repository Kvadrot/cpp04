/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:03 by ufo               #+#    #+#             */
/*   Updated: 2025/04/02 13:11:47 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//
//Init
//
Dog:: Dog(): Animal() {
    this->_type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog DefaultInit is called\n";
}

Dog:: Dog(const Dog &other): Animal(other) {
	this->brain = new Brain(*other.brain);
    std::cout << "Dog CopyInit is called\n";
}

Dog& Dog:: operator= (const Dog &other) {
    if (this != &other) {
		Animal:: operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
    }
    std::cout << "Dog CopyAssignmentInit is called\n";
    return (*this);
}

Dog:: ~Dog() {
     std::cout << "Destructor called for Dog\n" << std::endl;
     delete this->brain;
}

//
//Mehtods
//
void Dog:: makeSound() const{
     std::cout << "MEEEEEEOOOW...\n" << std::endl;
}

std::string Dog:: getIdea(const int ind) {
	return (this->brain->getIdeaByInd(ind));
}

void Dog:: setIdea(const int ind, const std::string idea) {
	this->brain->setIdea(ind, idea);
}