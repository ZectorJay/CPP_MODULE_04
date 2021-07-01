/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:36:45 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 16:52:11 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:

	MateriaSource();
	~MateriaSource(){};
	MateriaSource( MateriaSource const &	src );

	MateriaSource & operator= ( MateriaSource const & src );

	void			learnMateria ( AMateria* m );
	AMateria*		createMateria( std::string const & type );

protected:

	AMateria*		getMateria( int idx ) const;

private:

	AMateria*		_inventory[4];

};

#endif