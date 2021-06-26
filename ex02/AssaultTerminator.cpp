/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 02:09:42 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/25 23:51:22 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout<<"* teleports from space *"<<std::endl;
}

AssaultTerminator::~AssaultTerminator(){ std::cout<< "I’ll be back..."<<std::endl; }

AssaultTerminator & AssaultTerminator::operator= ( AssaultTerminator const & src ){
	if (this != &src)
		;
	return (*this);
}

void	AssaultTerminator::battleCry() const {
	std::cout<<"This code is unclean. PURIFY IT!"<<std::endl;
}

void	AssaultTerminator::rangedAttack() const {
	std::cout<<"* does nothing *"<<std::endl;
}

void	AssaultTerminator::meleeAttack() const {
	std::cout<< "* attacks with chainfists *"<<std::endl;
}

ISpaceMarine*	AssaultTerminator::clone() const {
	return (new AssaultTerminator(*this));
}