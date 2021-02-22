#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_oop_1.1/Pay.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp11
{
	TEST_CLASS(UnitTestopp11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			Pay p;
			p.Init(1.5, 20);
			c = p.Summa(30);
			Assert::AreEqual(c, 0.0025);
		}
	};
}
