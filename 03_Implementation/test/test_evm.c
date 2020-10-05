
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#define PROJECT_NAME    "EVM"


void test_boothid(void);
void test_adLogin(void);

int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  CU_add_test(suite, "boothid", test_boothid);
  CU_add_test(suite, "adLogin", test_adlogin);


  CU_basic_set_mode(CU_BRM_VERBOSE);


  CU_basic_run_tests();


  CU_cleanup_registry();

  return 0;
}


void test_boothid(void) {
  CU_ASSERT(1 == boothid(100500));


  CU_ASSERT(1 == boothid(15));
}


void test_leadingCandidate(void) {
  CU_ASSERT(3 == adLogin("admin","passkey"));


}



