/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:04:56 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/11 14:08:16 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( std::string name) : Victim(name) {std::cout<<"Zog Zog."<<std::endl;}

Peon::~Peon(){ std::cout<<"Bleuark..."<<std::endl; }

void		Peon::getPolymorphed() const{
	std::cout<<_name<<"  has been turned into a pink pony!"<<std::endl;
}