/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ghoul.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:33:12 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/26 10:37:20 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ghoul.hpp"

Ghoul::Ghoul ( std::string name ) : Victim(name) { 
	std::cout<<"FRESH BLOOD"<<std::endl;
}

Ghoul::~Ghoul() { std::cout<< "Mrghrh..." << std::endl; }

void		Ghoul::getPolymorphed() const{
	std::cout<<_name<<" has been turned into your girlfriend"<<std::endl;
}