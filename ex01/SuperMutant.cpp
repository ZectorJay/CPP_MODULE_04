/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:33:25 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 10:26:27 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/16 20:45:36 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
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
<<<<<<< HEAD
		_hp = 0;
=======
		amount = _hp;
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
	}
	else
		_hp -= amount - 3;
}