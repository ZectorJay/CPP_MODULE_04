/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 09:44:35 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/16 16:53:49 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(){
	_name = "Plasma Rifle";
	_damage = 21;
	_apcost = 5;
}

PlasmaRifle::~PlasmaRifle(){};

void	PlasmaRifle::attack() const{
	std::cout<<"* piouuu piouuu piouuu *"<<std::endl;
}