#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KushnerowIA.Sprint0.Task3.V0.lib/Tyuiu.KushnerowIA.Sprint0.Task3.V0.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task3V0* date = new Service1();
			int a = 12;
			int b = 11;
			int c = 9;
			int p;
			p = date->Add(a, b, c);
			Assert::AreEqual(32, p);
		}
	};
}
