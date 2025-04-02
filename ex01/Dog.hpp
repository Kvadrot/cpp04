/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:06 by ufo               #+#    #+#             */
/*   Updated: 2025/04/02 12:36:21 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
    private:
        Brain *brain;
    public:
    // Constructors & Destructor
        Dog();
        Dog(const Dog &ohter);
        Dog& operator= (const Dog &other);
        ~Dog();
        
    // Member functions
        void makeSound() const;
		std::string getIdea(const int ind);
		void setIdea(const int ind, const std::string idea);
};

#endif
