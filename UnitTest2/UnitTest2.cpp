#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_1.5/Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triad tr1{};
			int a = 1;
			int b = 2;
			int c = 3;

			
			Assert::AreEqual(1, a);
		}
	};
}