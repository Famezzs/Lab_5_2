#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_5_2\Lab_5_2\Lab_5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest521
{
	TEST_CLASS(UnitTest521)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = A(0, 4, 1.0);
			Assert::AreEqual(t, 0.0);

			t = A(0.3, 1, 2.0);
			Assert::AreEqual(t, 0.06);
		}
	};
}
