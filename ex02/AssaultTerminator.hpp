/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 02:07:17 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/26 03:47:57 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : virtual public ISpaceMarine {

public:

	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator( AssaultTerminator const & src ) { *this = src; };

	AssaultTerminator	& operator= ( AssaultTerminator const & src);

	ISpaceMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;

};

#endif