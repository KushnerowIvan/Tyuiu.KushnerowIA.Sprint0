// Tyuiu.KushnerowIA.Sprint0.Task3.V0.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp"

// TODO: This is an example of a library function
class Service1 : public ISprint0Task3V0
{
	virtual int Add(int a, int b, int c) override
	{
		return(a + b + c);
	};
};
