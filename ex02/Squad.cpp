/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 23:03:14 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 10:57:13 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _units(NULL), _size(0) {
	std::cout<<"Squad has been deployed"<<std::endl;
}

Squad::~Squad(){
	if ( _size > 0 ){
		for ( int i = 0; i < _size ; i++ )
			delete _units[i];
		delete [] _units;
	}
	_size = 0;
}

ISpaceMarine**	Squad::copy_units() const {
	if ( _size > 0){
		ISpaceMarine** tmp = new ISpaceMarine*[ _size ];
		for (int i = 0; i < _size ; i++)
			tmp[i] = _units[i]->clone();
		return (tmp);
	}
	return (NULL);
}

int				Squad::getCount() const { return (_size); }

Squad & 		Squad::operator= ( Squad const & src ) {
	if (this != &src){
		this->~Squad();
		_units = src.copy_units();
		_size = src.getCount();
	}
	return (*this);
}

void			Squad::reallocateSquad( int N ){
	ISpaceMarine** tmp = new ISpaceMarine*[N];
	for (int i = 0; i < _size - 1; i++){
		tmp[i] = _units[i];
	}
	if ( N > 0 )
		delete [] _units;
	_units = tmp;
}

int				Squad::push( ISpaceMarine * unit ) {
	if (unit != NULL) {
		_size += 1;
		reallocateSquad( _size );
		_units[ _size - 1 ] = unit;
	}
	return (_size);
}

ISpaceMarine*	Squad::getUnit( int N ) const {
	if (_size > 0 && N <= _size )
		return (_units[N]);
	return (NULL);
}