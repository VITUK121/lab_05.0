#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.0/lab_05.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest050
{
	TEST_CLASS(UnitTest050)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.5;
			double test_var = sin(x)*sin(x) + x*x + 1;

			Assert::AreEqual(test_var,f(x));
		}
	};
}
