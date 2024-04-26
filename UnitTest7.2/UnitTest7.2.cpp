#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.2/NegativeCounter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72
{
	TEST_CLASS(UnitTest72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::forward_list<int> testData = { 1, -2, 3, -4, 5 };
			NegativeCounter counter(testData);

			// Act
			int result = counter.countNegativeElements();

			// Assert
			Assert::AreEqual(2, result);
		}
	};
}
