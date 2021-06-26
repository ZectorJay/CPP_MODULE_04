/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:56:48 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/11 14:08:51 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( std::string name ) : _name(name){
	std::cout<<"Some random victim called "<<_name;
	std::cout<<" just appeared!"<<std::endl;
}

Victim::~Victim(){
	std::cout<<"Victim "<<_name;
	std::cout<<" just died for no apparent reason!"<<std::endl;
}

std::string const	Victim::get_name() const { return (_name); }

std::ostream &	operator << ( std::ostream & o, Victim & i){
	o << "I'm "<<i.get_name()<<" and I like otters!";
	o << std::endl;
	return (o);
}

void		Victim::getPolymorphed() const{
	std::cout<<_name<<"  has been turned into a cute little sheep!";
	std::cout<<std::endl;
}