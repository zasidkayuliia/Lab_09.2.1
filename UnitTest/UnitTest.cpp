#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_09.2.1/myMacros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{// ���������� ������� SECOND 
			int x = 2; int y = 3; int z = 1; // z <= 3, ���� ��������������� SECOND 
			int expected = MIN((x * y + y * z), (x + y) * (x + y)); 
			int result = SECOND(x, y, z); 
			Assert::AreEqual(expected, result);
		}
	};
}
