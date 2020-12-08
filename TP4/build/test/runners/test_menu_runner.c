/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#ifdef __WIN32__
#define UNITY_INCLUDE_SETUP_STUBS
#endif
#include "unity.h"
#include "cmock.h"
#ifndef UNITY_EXCLUDE_SETJMP_H
#include <setjmp.h>
#endif
#include <stdio.h>
#include "Mockpantalla.h"
#include "Mockled.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_L1 (void);
extern void test_L2 (void);
extern void test_L3 (void);
extern void test_L4 (void);
extern void test_L5 (void);
extern void test_L6 (void);
extern void test_L7 (void);
extern void test_L8 (void);
extern void test_L9 (void);
extern void test_L10 (void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  Mockpantalla_Init();
  Mockled_Init();
}
static void CMock_Verify(void)
{
  Mockpantalla_Verify();
  Mockled_Verify();
}
static void CMock_Destroy(void)
{
  Mockpantalla_Destroy();
  Mockled_Destroy();
}

/*=======Suite Setup=====*/
static void suite_setup(void)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  suiteSetUp();
#endif
}

/*=======Suite Teardown=====*/
static int suite_teardown(int num_failures)
{
#if defined(UNITY_WEAK_ATTRIBUTE) || defined(UNITY_WEAK_PRAGMA)
  return suiteTearDown(num_failures);
#else
  return num_failures;
#endif
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  suite_setup();
  UnityBegin("test_menu.c");
  RUN_TEST(test_L1 , 41);
  RUN_TEST(test_L2 , 54);
  RUN_TEST(test_L3 , 67);
  RUN_TEST(test_L4 , 80);
  RUN_TEST(test_L5 , 89);
  RUN_TEST(test_L6 , 102);
  RUN_TEST(test_L7 , 115);
  RUN_TEST(test_L8 , 128);
  RUN_TEST(test_L9 , 145);
  RUN_TEST(test_L10 , 154);

  CMock_Guts_MemFreeFinal();
  return suite_teardown(UnityEnd());
}

//=======Defintions of FFF variables=====
#include "fff.h"
DEFINE_FFF_GLOBALS;