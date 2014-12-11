#pragma once

#include "ReactiveElement.h"

class ActiveElement : public ReactiveElement
{
public:
	ActiveElement( ReactiveMachine* m ) : ReactiveElement( m ) { type = ReactiveElement::ACTIVE; }
	virtual ~ActiveElement() { finalize(); }

	virtual void initialize( std::vector<double>* params ) { ReactiveElement::initialize( params ); }
	virtual void finalize() { ReactiveElement::finalize(); }

protected:
//	bool is_activated;
};