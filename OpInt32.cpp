//
// Created by PC on 01/07/2018.
//

#include "OpInt32.hpp"

OpInt32::OpInt32(void) {}

OpInt32::OpInt32(std::string str) : _nbr(str) {
}

OpInt32::OpInt32(OpInt32 const &src) {
	this->_nbr = src.toString();
}

OpInt32 &OpInt32::operator=(OpInt32 const &rhs) {
	this->_nbr = rhs.toString();
	return *this;
}

OpInt32::~OpInt32(void) {}

int OpInt32::getPrecision() const {
	return _type;
}

eOperandType OpInt32::getType() const {
	return Int32;
}

std::string const& OpInt32::toString() const {
	return _nbr;
}

IOperand const* OpInt32::operator+(IOperand const &rhs) const {}

IOperand const* OpInt32::operator-(IOperand const &rhs) const {}

IOperand const* OpInt32::operator*(IOperand const &rhs) const {}

IOperand const* OpInt32::operator/(IOperand const &rhs) const {}

IOperand const* OpInt32::operator%(IOperand const &rhs) const {}
