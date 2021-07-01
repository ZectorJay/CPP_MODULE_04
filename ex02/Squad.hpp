/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 03:23:07 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 10:56:57 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {

public:

	Squad();
	virtual ~Squad();
	Squad( Squad const & src ) { *this = src; };

	Squad	&	operator=( Squad const & src );

	int				getCount() const;
	ISpaceMarine*	getUnit( int N ) const;
	int				push ( ISpaceMarine * unit );
	ISpaceMarine**	copy_units() const;

private:

	ISpaceMarine**	_units;
	int				_size;
	void			reallocateSquad( int N );

};

#endif