/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:43:04 by ufo               #+#    #+#             */
/*   Updated: 2025/04/01 16:08:54 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
    private:
        Brain *brain;
    public:
    // Constructors & Destructor
        Cat();
        Cat(const Cat &ohter);
        Cat& operator= (const Cat &other);
        ~Cat();
        
    // Member functions
        void makeSound() const;
};

#endif
