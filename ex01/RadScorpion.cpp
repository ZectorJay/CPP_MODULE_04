/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:08:40 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 10:58:41 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() {
	_hp = 80;
	_type = "RadScorpion";
	std::cout<<RED<<"* click click click *"<<RESET<<std::endl;
}

RadScorpion::~RadScorpion(){ std::cout<<"* SPROTCH *"<<std::endl; }