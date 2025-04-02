/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:43:04 by ufo               #+#    #+#             */
/*   Updated: 2025/04/02 12:49:46 by itykhono         ###   ########.fr       */
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
        Cat(const Cat& ohter);
        Cat& operator= (const Cat& other);
        ~Cat();
        
    // Member functions
        void makeSound() const;
		std::string getIdea(const int ind);
		void setIdea(const int ind, const std::string idea);
};

#endif
