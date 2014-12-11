#pragma once

#include "ActiveElement.h"

class ActiveWheel : public ActiveElement
{
public:
	ActiveWheel( ReactiveMachine* m ) : ActiveElement( m ) { this->name = "ActiveWheel"; }
	virtual ~ActiveWheel() { finalize(); }

	virtual void initialize( std::vector<double>* params );
	virtual void finalize();

protected:

};