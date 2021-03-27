#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3D/Triad.cpp"
#include "../lab3.3D/Triad.h"
#include "../lab3.3D/Time.cpp"
#include "../lab3.3D/Time.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Time a(1, 2, 3);
			++a;
			Assert::AreEqual(a.getF(), 2);
		}
	};
}
