

#include "fibon.h"
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

	void setUp()
	{	}
	void tearDown()
	{	}
void test_fibon(void)
	{
  		CU_ASSERT_EQUAL(1==fibon(8));
  		CU_ASSERT_EQUAL(0==fibon(10));
	}
	

	int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
 

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
