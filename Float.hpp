//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_FLOAT_HPP
#define ABSTRACT_VM_FLOAT_HPP


#include "IOperand.hpp"

class Float : public IOperand{

public:
	Float(std::string);

	Float(Float const &src);

	Float &operator=(Float const &rhs);

	virtual ~Float(void);

	virtual int getPrecision( void ) const = 0; // Precision of the type of the instance
	virtual eOperandType getType( void ) const = 0; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const = 0; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const = 0; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const = 0; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const = 0; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const = 0; // Modulo
	virtual std::string const & toString( void ) const = 0; // String representation of the instance

private:
	Float(void);
	eOperandType _type = eOperandType(Float);
	std::string _nbr;
};


#endif //ABSTRACT_VM_FLOAT_HPP
