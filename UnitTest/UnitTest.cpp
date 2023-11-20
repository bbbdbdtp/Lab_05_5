#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_5_c/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 3;
			int level = 1;
			int result = l(3, level, depth);

			Assert::AreEqual(3, result);
			Assert::AreEqual(3, depth);
		}
	};
}