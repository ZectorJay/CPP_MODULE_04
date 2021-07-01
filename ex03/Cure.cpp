/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:09:29 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 17:11:48 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria*	Cure::clone() const { return (new Cure(*this)); }

void		Cure::useMessage( ICharacter & target ){
	std::cout<<"* heals "<<target.getName()<<"'s wounds"<<std::endl;
}