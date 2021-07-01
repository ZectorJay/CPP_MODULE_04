/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:40:43 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 13:36:08 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria*	Ice::clone() const{	return (new Ice(*this)); }

void		Ice::useMessage( ICharacter & target ){
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}