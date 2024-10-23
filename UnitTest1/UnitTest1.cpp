#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 5, 2, 8, 1, 9, 3 };
			int n = 6;

			int minIndex = findMinIndex(a, n);
			Assert::AreEqual(3, minIndex);
		}
	};
}
