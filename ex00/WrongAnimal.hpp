/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:09:18 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 20:10:15 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string _type;

public:
    // Constructors & Destructor
    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal& operator=(const WrongAnimal &other);
    virtual ~WrongAnimal();

    // Member functions
    void makeSound() const;
    std::string getType() const;
};

#endif
