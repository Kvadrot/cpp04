/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:55:54 by ufo               #+#    #+#             */
/*   Updated: 2025/03/31 20:23:17 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* wMeta = new WrongAnimal();
    const WrongAnimal* wi = new WrongCat();
    std::cout << wi->getType() << " " << std::endl;
    wMeta->makeSound();
    wi->makeSound();

    delete(wi);
    delete(wMeta);

    delete(j);
    delete(i);
    delete(meta);
    
    return (0);
}