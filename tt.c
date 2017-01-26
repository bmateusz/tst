#include "test.h"

void test_ok()
{
}

void test_assert()
{
  assert(1 == 1);
}

void test_streq()
{
  char *x = "a";
  streq(x, "a");
}

void test_strne()
{
  const char *x = "b";
  strne("a", x);
}

void test_strin()
{
  strin("abcdef", "cd");
}

void test_eq()
{
  eq(1, 1);
}

void test_ne()
{
  ne(1, 2);
}

void test_lt()
{
  lt(1, 2);
}

void test_gt()
{
  gt(2, 1);
}

void test_le()
{
  le(2, 2);
}

void test_ge()
{
  ge(2, 2);
}

void test_eq_t()
{
  float a = 0.5;
  float b = 0.5;
  eq_t(a, b, "%f");
}

void test_ne_t()
{
  float a = 0.5;
  float b = 0.6;
  ne_t(a, b, "%f");
}

void test_lt_t()
{
  lt_t('a', 'b', "%c");
}

void test_gt_t()
{
  gt_t(2u, 1u, "%u");
}

void test_le_t()
{
  le_t(30, 30, "%x");
}

void test_ge_t()
{
  const char *s = "hello world";
  ge_t(s[6], s[6], "%c");
}

void test_fail()
{
  fail;
}

void test_fail_v()
{
  fail_v("failed test case");
}

void test_assert_bad()
{
  assert(1 == 2);
}

void test_streq_bad()
{
  char *x = "aa";
  streq(x, "a");
}

void test_strne_bad()
{
  const char *x = "a";
  strne("a", x);
}

void test_strin_bad()
{
  strin("abcdef", "g");
}

void test_eq_bad()
{
  eq(1, 2);
}

void test_ne_bad()
{
  ne(1, 1);
}

void test_lt_bad()
{
  lt(2, 2);
}

void test_gt_bad()
{
  gt(2, 2);
}

void test_le_bad()
{
  le(2, 1);
}

void test_ge_bad()
{
  ge(1, 2);
}

void test_eq_t_bad()
{
  float a = 0.5;
  float b = 0.6;
  eq_t(a, b, "%f");
}

void test_ne_t_bad()
{
  float a = 0.5;
  float b = 0.5;
  ne_t(a, b, "%f");
}

void test_lt_t_bad()
{
  lt_t('b', 'a', "%c");
}

void test_gt_t_bad()
{
  gt_t(1u, 2u, "%u");
}

void test_le_t_bad()
{
  le_t(31, 30, "%x");
}

void test_ge_t_bad()
{
  const char *s = "hello world";
  ge_t(s[0], s[6], "%c");
}

BEGIN
TEST(test_ok)
TEST(test_assert)
TEST(test_streq)
TEST(test_strne)
TEST(test_strin)
TEST(test_eq)
TEST(test_ne)
TEST(test_lt)
TEST(test_gt)
TEST(test_le)
TEST(test_ge)
TEST(test_eq_t)
TEST(test_ne_t)
TEST(test_lt_t)
TEST(test_gt_t)
TEST(test_le_t)
TEST(test_ge_t)
TEST(test_fail)
TEST(test_fail_v)
TEST(test_assert_bad)
TEST(test_streq_bad)
TEST(test_strne_bad)
TEST(test_strin_bad)
TEST(test_eq_bad)
TEST(test_ne_bad)
TEST(test_lt_bad)
TEST(test_gt_bad)
TEST(test_le_bad)
TEST(test_ge_bad)
TEST(test_eq_t_bad)
TEST(test_ne_t_bad)
TEST(test_lt_t_bad)
TEST(test_gt_t_bad)
TEST(test_le_t_bad)
TEST(test_ge_t_bad)
END
