#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Lab08_1rec_str/Lab08_1rec_str.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCount)
        {
            std::string str1 = "a+b-c=d";

            Assert::AreEqual(3, Count(str1));
        }

        TEST_METHOD(TestChange)
        {
            std::string str1 = "a+b-c=d";
            std::string expected1 = "a**b**c**d";

            Assert::AreEqual(expected1, Change(str1));
        }
    };
}

