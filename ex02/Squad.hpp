/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 03:23:07 by hmickey           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/26 04:57:37 by hmickey          ###   ########.fr       */
=======
/*   Updated: 2021/06/26 03:54:49 by hmickey          ###   ########.fr       */
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {

public:

<<<<<<< HEAD
	Squad();
=======
	Squad() : _units(NULL), _size(0) {};
>>>>>>> b9daaa87a7fde72c92b21aa7b09ef6225afbbaa3
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