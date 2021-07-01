/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Penetrator.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:07:48 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/26 10:07:33 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Penetrator.hpp"

Penetrator::Penetrator(){
	_name = "Penetrator";
	_damage = 80;
	_apcost = 13;
}

void	Penetrator::attack() const {
	std::cout<<"\033[1;38;2;255;0;0m* SOUNDS OF DEEP PENETRATION *\033[0m"<<std::endl;
}