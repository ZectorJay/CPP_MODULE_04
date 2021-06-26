/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:40:10 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/15 10:41:44 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(){
	_name = "Power Fist";
	_damage = 50;
	_apcost = 8;
}

PowerFist::~PowerFist(){}

void	PowerFist::attack() const {
	std::cout<<"* pschhh... SBAM! *"<<std::endl;
}

