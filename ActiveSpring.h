#pragma once

#include "ActiveElement.h"

class ActiveSpring : public ActiveElement
{
public:
	ActiveSpring( ReactiveMachine* m ) : ActiveElement( m ) { this->name = "ActiveSpring"; }
	virtual ~ActiveSpring() { finalize(); }

	virtual void initialize( std::vector<double>* params );
	virtual void finalize();

protected:

};
