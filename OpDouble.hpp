//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_DOUBLE_HPP
#define ABSTRACT_VM_DOUBLE_HPP


#include "IOperand.hpp"

class OpDouble : public IOperand{

public:
	OpDouble(std::string);

	OpDouble(OpDouble const &src);

	OpDouble &operator=(OpDouble const &rhs);

	virtual ~OpDouble(void);

	virtual int getPrecision( void ) const ; // Precision of the type of the instance
	virtual eOperandType getType( void ) const ; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const ; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const ; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const ; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const ; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const ; // Modulo
	virtual std::string const & toString( void ) const ; // String representation of the instance

private:
	OpDouble(void);
	eOperandType _type = Double;
	std::string _nbr;
};


#endif //ABSTRACT_VM_DOUBLE_HPP
