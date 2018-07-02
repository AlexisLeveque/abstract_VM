//
// Created by PC on 01/07/2018.
//

#include "OpInt16.hpp"

OpInt16::OpInt16(void) {}

OpInt16::OpInt16(std::string str) : _nbr(str) {
}

OpInt16::OpInt16(OpInt16 const &src) {
	this->_nbr = src.toString();
}

OpInt16 &OpInt16::operator=(OpInt16 const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

OpInt16::~OpInt16(void) {}

int OpInt16::getPrecision() const {
	return _type;
}

eOperandType OpInt16::getType() const {
	return Int16;
}

std::string const& OpInt16::toString() const {
	return _nbr;
}

IOperand const* OpInt16::operator+(IOperand const &rhs) const {}

IOperand const* OpInt16::operator-(IOperand const &rhs) const {}

IOperand const* OpInt16::operator*(IOperand const &rhs) const {}

IOperand const* OpInt16::operator/(IOperand const &rhs) const {}

IOperand const* OpInt16::operator%(IOperand const &rhs) const {}