#include "function.c"
#include <unity.h>
#include<sys/stat.h>
void setUp(void){}
void tearDown(void){}
void Unit_Convertion(){
    TEST_ASSERT_EQUAL(1,mmTomm(1));
    TEST_ASSERT_EQUAL(2,mmTocm(20));
    TEST_ASSERT_EQUAL(2,mmToin(50.8));
    TEST_ASSERT_EQUAL(2,mmToft(610));
    TEST_ASSERT_EQUAL(10,cmTomm(1));
    TEST_ASSERT_EQUAL(1,cmTocm(1));
    TEST_ASSERT_EQUAL(3.93701,cmToin(1));
    TEST_ASSERT_EQUAL(2,cmToft(60.96));
    TEST_ASSERT_EQUAL(25.4,inTomm(1));
    TEST_ASSERT_EQUAL(2.54,inTocm(1));
    TEST_ASSERT_EQUAL(1,inToin(1));
    TEST_ASSERT_EQUAL(0.0833,inToft(1));
    TEST_ASSERT_EQUAL(304.8,ftTomm(1));
    TEST_ASSERT_EQUAL(30.48,ftTocm(1));
    TEST_ASSERT_EQUAL(12,ftToin(1));
    TEST_ASSERT_EQUAL(1,ftToft(1));


}
int main(){
    UnityBegin(NULL);
    RUN_TEST(Unit_Convertion);
    return (UnityEnd());
}
