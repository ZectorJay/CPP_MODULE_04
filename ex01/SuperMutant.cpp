/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:33:25 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 10:58:52 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(){
	_hp = 170;
	_type = "Super Mutant";
	std::cout<<"Gaaah. Me want smash heads!"<<std::endl;
}

SuperMutant::~SuperMutant(){
	std::cout<<"Aaargh..."<<std::endl;
}

void	SuperMutant::takeDamage( int amount ){
	if (_hp - amount - 3 < 0){
		_hp = 0;
	}
	else
		_hp -= amount - 3;
}