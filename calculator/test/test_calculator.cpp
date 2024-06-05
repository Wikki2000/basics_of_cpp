#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>

#include "calculator.h"

class SumTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(SumTest);
	CPPUNIT_TEST(testSum);
	CPPUNIT_TEST_SUITE_END();

	public:
	void testSum() 
	{
		CPPUNIT_ASSERT_EQUAL(5, sum(2, 3));

		CPPUNIT_ASSERT_EQUAL(0, sum(-1, 1));

		CPPUNIT_ASSERT_EQUAL(-8, sum(-5, -3));
	}
};

CPPUNIT_TEST_SUITE_REGISTRATION(SumTest);

int main() {
	CppUnit::TextUi::TestRunner runner;
	runner.addTest(SumTest::suite());
	runner.run();
	return 0;
}

