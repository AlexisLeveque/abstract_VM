//
// Created by PC on 01/07/2018.
//

#ifndef ABSTRACT_VM_INT16_HPP
#define ABSTRACT_VM_INT16_HPP


#include "IOperand.hpp"

class OpInt16 : public IOperand{

public:
	OpInt16(std::string);

	OpInt16(OpInt16 const &src);

	OpInt16 &operator=(OpInt16 const &rhs);

	virtual ~OpInt16(void);

	virtual int getPrecision( void ) const ; // Precision of the type of the instance
	virtual eOperandType getType( void ) const ; // Type of the instance
	virtual IOperand const * operator+( IOperand const & rhs ) const ; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const ; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const ; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const ; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const ; // Modulo
	virtual std::string const & toString( void ) const ; // String representation of the instance

private:
	OpInt16(void);
	eOperandType _type = Int16;
	std::string _nbr;
};

#endif //ABSTRACT_VM_INT16_HPP
