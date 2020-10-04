#include "unity.h"
#include "evm_operations.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_boothid(void)
{
  TEST_ASSERT_EQUAL(1, boothid(100500));
  TEST_ASSERT_EQUAL(0, boothid(626));
}
void test_adLogin(void)
{
  TEST_ASSERT_EQUAL(1, adLogin("admin","passkey"));
  TEST_ASSERT_EQUAL(0, adLogin("adm","pass"));
}
void test_leadingCandidate(void)
{
  TEST_ASSERT_EQUAL(3, leadingCandidate(1,1));
   TEST_ASSERT_EQUAL(4, leadingCandidate(1,1));
    TEST_ASSERT_EQUAL(5, leadingCandidate(1,1));
     TEST_ASSERT_EQUAL(6, leadingCandidate(1,1));

}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_boothid);
  RUN_TEST(test_adLogin);
  RUN_TEST(test_leadingCandidate);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

