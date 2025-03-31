/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:06 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 18:10:00 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
    private:
        
    public:
    // Constructors & Destructor
        Dog();
        Dog(const Dog &ohter);
        Dog& operator= (const Dog &other);
        ~Dog();
        
    // Member functions
        void makeSound();
};

#endif
