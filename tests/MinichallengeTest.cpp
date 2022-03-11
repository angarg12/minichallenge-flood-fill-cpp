#include "CppUTest/TestHarness.h"
#include "numeric"

extern "C++"
{
#include "Minichallenge.h"
}

TEST_GROUP(Solution)
{
    Solution* solution;
    void setup()
    {
        solution = new Solution();
    }

    void teardown()
    {
        delete solution;
    }
};

TEST(Solution, correct_solution_1)
{
}

