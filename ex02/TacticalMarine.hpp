/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:55:16 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/26 03:47:49 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : virtual public ISpaceMarine {

public:

	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine( TacticalMarine const & src ) { *this = src; };

	TacticalMarine	& operator= ( TacticalMarine const & src);

	ISpaceMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;

};

#endif