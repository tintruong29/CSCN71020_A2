#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
        TEST_METHOD(Perimeter)
        {
            int length = 4;
            int width = 3;

            int expectedPerimeter = 14;
            int actualPerimeter = getPerimeter(&length, &width);

            Assert::AreEqual(expectedPerimeter, actualPerimeter);
        }

        TEST_METHOD(Area)
        {
            int length = 4;
            int width = 3;

            int expectedArea = 12;
            int actualArea = getArea(&length, &width);

            Assert::AreEqual(expectedArea, actualArea);
        }

        TEST_METHOD(Length_Test1)
        {
            int input = 10;

            int expectedLength = 10;
            int actualLength = 1;
            setLength(input, &actualLength);

            Assert::AreEqual(expectedLength, actualLength);
        }

        TEST_METHOD(Length_Test2)
        {
            int input = -1;

            int expectedLength = 1;
            int actualLength = 1;
            setLength(input, &actualLength);

            Assert::AreEqual(expectedLength, actualLength);
        }

        TEST_METHOD(Length_Test3)
        {
            int input = 100;

            int expectedLength = 1;
            int actualLength = 1;
            setLength(input, &actualLength);

            Assert::AreEqual(expectedLength, actualLength);
        }

        TEST_METHOD(Width_Test1)
        {
            int input = 50;

            int expectedWidth = 50;
            int actualWidth = 1;
            setWidth(input, &actualWidth);

            Assert::AreEqual(expectedWidth, actualWidth);
        }

        TEST_METHOD(Width_Test2)
        {
            int input = -10;

            int expectedWidth = 1;
            int actualWidth = 1;
            setWidth(input, &actualWidth);

            Assert::AreEqual(expectedWidth, actualWidth);
        }

        TEST_METHOD(Width_Test3)
        {
            int input = 150;

            int expectedWidth = 1;
            int actualWidth = 1;
            setWidth(input, &actualWidth);

            Assert::AreEqual(expectedWidth, actualWidth);
        }
	};
}
