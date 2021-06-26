/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:08:40 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/16 18:42:31 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() {
	_hp = 80;
	_type = "RadScorpion";
	std::cout<<"* click click click *"<<std::endl;
}

RadScorpion::~RadScorpion(){ std::cout<<"* SPROTCH *"<<std::endl; }