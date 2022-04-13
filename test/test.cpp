#include "test.h"

Test::Test() { }

List l;
List r;

TEST(ListFunction, PushBack){
    int value = 9;
    l.pushBack(value);

    EXPECT_EQ(1, l.size());
    EXPECT_EQ(value, l.at(0));

    value = 3;
    l.pushBack(value);

    EXPECT_EQ(2, l.size());
    EXPECT_EQ(value, l.at(1));
    l.clear();
}

TEST(ListFunction, PushFront){
    l.clear();
    int value = 5;
    l.pushBack(9);
    l.pushBack(1);
    l.pushBack(8);
    l.pushFront(value);

    EXPECT_EQ(4, l.size());
    EXPECT_EQ(value, l.at(0));

    value = 3;
    l.pushFront(value);

    EXPECT_EQ(value, l.at(0));
    l.clear();
}

TEST(ListFunction, At){
    l.clear();
    l.pushBack(9);
    l.pushBack(1);
    l.pushBack(8);

    EXPECT_EQ(1, l.at(1));
    l.clear();
}

TEST(ListFunction, Clear){
    l.clear();
    l.pushBack(9);
    l.pushBack(1);
    l.pushBack(8);

    EXPECT_EQ(3, l.size());
    l.clear();
    EXPECT_EQ(0, l.size());
}

TEST(Operator, EqualTo){
    r.clear();
    l.pushBack(9);
    l.pushBack(1);
    l.pushBack(8);

    r = l;

    ASSERT_TRUE(l == r);
    r.clear();
    l.clear();
}

TEST(Operator, NoEqualTo){
    r.clear();
    l.clear();
    l.pushBack(9);
    l.pushBack(1);
    l.pushBack(8);

    r = l;
    r.pushBack(5);

    ASSERT_TRUE(l != r);
    r.clear();
    l.clear();
}
