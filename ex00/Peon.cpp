/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:04:56 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 10:34:53 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/11 14:08:16 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

<<<<<<< HEAD
Peon::Peon( std::string name) : Victim(name) { std::cout<<"Zog Zog."<<std::endl; }
=======
Peon::Peon( std::string name) : Victim(name) {std::cout<<"Zog Zog."<<std::endl;}
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3

Peon::~Peon(){ std::cout<<"Bleuark..."<<std::endl; }

void		Peon::getPolymorphed() const{
	std::cout<<_name<<"  has been turned into a pink pony!"<<std::endl;
}