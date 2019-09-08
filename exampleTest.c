#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "CuTest.h"


void Test_Example(CuTest* tc)
{
	CuAssertStrEquals(tc, "a", "a");
}


