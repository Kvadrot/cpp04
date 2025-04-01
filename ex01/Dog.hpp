/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:06 by ufo               #+#    #+#             */
/*   Updated: 2025/04/01 16:09:15 by ufo              ###   ########.fr       */
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
};

#endif
