#include <gtest/gtest.h>

#include "fecha.h"
 
TEST(FechaTest, greater){
    Fecha d1{1, 7, 2020};
    Fecha d2{8, 5, 2002};
    Fecha d3{29, 8, 2002};

    EXPECT_EQ(false, d2 > d1);
    EXPECT_EQ(true, d3 > d2);
}

TEST(FechaTest, equal){
    Fecha d1{1, 7, 2020};
    Fecha d2{8, 5, 2002};

    Fecha d3{29, 8, 2002};
    Fecha d4{5, 3, 1921};
    Fecha d5{1, 9, 1600};

    EXPECT_EQ(false, d1 == d2);
    EXPECT_EQ(false, d2 == d3);
    EXPECT_EQ(false, d1 == d4);
    EXPECT_EQ(false, d1 == d5);
}
