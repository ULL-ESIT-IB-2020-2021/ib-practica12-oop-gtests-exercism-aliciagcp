#include <gtest/gtest.h>

#include "complejo.h"
 
TEST(ComplejoTest, add){
    Complejo c1{1, 7};
    Complejo c2{8, 5};
    Complejo c3{29, 8};

    Complejo result1{c2.Add(c1)};
    Complejo result2{c2.Add(c3)};;

    EXPECT_EQ(true, (result1.GetReal() == 9 && result1.GetImaginario() == 12));
    EXPECT_EQ(true, (result2.GetReal() == 37 && result2.GetImaginario() == 13));
}

TEST(ComplejoTest, subtract){
    Complejo c3{29, 8};
    Complejo c4{5, 3};
    Complejo c5{1, 9};

    Complejo result1{c4.Add(c3)};
    Complejo result2{c5.Add(c4)};

    EXPECT_EQ(true, (result1.GetReal() == -24 && result1.GetImaginario() == -5));
    EXPECT_EQ(true, (result2.GetReal() == -4 && result2.GetImaginario() == 6));
}

