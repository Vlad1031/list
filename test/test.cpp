#include "test.h"

Test::Test() { }

//TEST(testPushBack, test1){
//    List l;

//    int value = 9;
//    l.pushBack(value);

//    EXPECT_EQ(1, l.size());
//    EXPECT_EQ(value, l.at(0));

//    value = 3;
//    l.pushBack(value);

//    EXPECT_EQ(2, l.size());
//    EXPECT_EQ(value, l.at(1));
//}

//TEST(testPushFront, test2){
//    List l;

//    int value = 5;
//    l.pushBack(9);
//    l.pushBack(1);
//    l.pushBack(8);
//    l.pushFront(value);

//    EXPECT_EQ(4, l.size());
//    EXPECT_EQ(value, l.at(0));

//    value = 3;
//    l.pushFront(value);

//    EXPECT_EQ(value, l.at(0));
//}

//TEST(testAt, test3){
//    List l;

//    l.pushBack(9);
//    l.pushBack(1);
//    l.pushBack(8);

//    EXPECT_EQ(1, l.at(1));
//}

//TEST(testClear, test4){
//    List l;

//    l.pushBack(9);
//    l.pushBack(1);
//    l.pushBack(8);

//    EXPECT_EQ(3, l.size());
//    l.clear();
//    EXPECT_EQ(0, l.size());
//}

TEST(testOperator2, test6){
    List l;
    l.pushBack(9);
    l.pushBack(1);
    l.pushBack(8);

    List r;
    r = l;

    ASSERT_TRUE(l == r);
}

//TEST(testOperator3, test7){
//    List l;
//    l.pushBack(9);
//    l.pushBack(1);
//    l.pushBack(8);

//    List r = l;
//    r.pushBack(5);

//    ASSERT_TRUE(l != r);
//}
