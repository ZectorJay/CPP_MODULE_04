/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 21:01:38 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/25 23:48:35 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
	std::cout<<"Tactical Marine ready for battle!"<<std::endl;
}

TacticalMarine::~TacticalMarine(){ std::cout<<"Aaargh..."<<std::endl; }

TacticalMarine & TacticalMarine::operator= ( TacticalMarine const & src ){
	if (this != &src)
		;
	return (*this);
}

void	TacticalMarine::battleCry() const {
	std::cout<<"For the holy PLOT!"<<std::endl;
}

void	TacticalMarine::rangedAttack() const {
	std::cout<<"* attacks with a bolter *"<<std::endl;
}

void	TacticalMarine::meleeAttack() const {
	std::cout<<"* attacks with a chainsword *"<<std::endl;
}

ISpaceMarine*	TacticalMarine::clone() const {
	return (new TacticalMarine(*this));
}
