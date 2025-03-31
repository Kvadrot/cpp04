/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 20:14:57 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 20:16:23 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    private:
        
    public:
    // Constructors & Destructor
        WrongCat();
        WrongCat(const WrongCat &ohter);
        WrongCat& operator= (const WrongCat &other);
        ~WrongCat();
        
};

#endif
