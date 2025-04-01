/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:12:13 by ufo               #+#    #+#             */
/*   Updated: 2025/04/01 16:01:21 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain DefaultInit is called\n";
}

Brain::Brain(const Brain& other) {
    *this = other;
    std::cout << "Brain CopyInit is called\n";
}

Brain& Brain:: operator=(const Brain &other) {
    std::cout << "Brain AssignmentInit is called\n";
    if (this == &other) {
        return (*this);
    }
    for (int i =0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain:: ~Brain() {
    std::cout << "Brain Destrucor is called\n";
}


std::string Brain:: getIdeaByInd(int ind) {
	if (ind < 100)
		return (this->ideas[ind]);
    return ("wrong Ind");
}

void	Brain:: setIdea(size_t i, std::string idea)
{
	if (i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "\033[33mThere is only 100 ideas per brain.\033[0m" << std::endl;
}