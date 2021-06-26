/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:46:06 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/11 14:07:46 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string name, std::string title ) :
_name(name), _title(title) {
	std::cout<<_name<<", ";
	std::cout<<_title<<", is born!"<<std::endl;
}

Sorcerer::~Sorcerer(){
	std::cout<<_name<<", "<<_title;
	std::cout<<" is dead. Consequences will never be the same!"<<std::endl;
}

Sorcerer::Sorcerer (Sorcerer & src){
	*this = src;
	std::cout<<_name<<", ";
	std::cout<<_title<<", is born!"<<std::endl;	
}

Sorcerer &	Sorcerer::operator = ( Sorcerer & src){
	_name = src._name;
	_title = src._title;
	return (*this);
}

std::string const Sorcerer::get_name() const { return (_name); }

std::string const Sorcerer::get_title() const { return (_title); }

std::ostream & operator << ( std::ostream & o, Sorcerer & input){
	o <<"I'm "<<input.get_name()<<", "<<input.get_title();
	o <<", and I like ponies!"<<std::endl;
	return (o);
}

void		Sorcerer::polymorph( Victim const & src) const{
	// std::cout<<_name<<" ("<<_title<<") "<<RESET;
	// std::cout<<" polymorphed pitful victim "<<MAGENTA<<src.get_name()<<std::endl;
	src.getPolymorphed();
}