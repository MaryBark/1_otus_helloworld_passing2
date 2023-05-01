#include "lib.h"

#include <iostream>
#include <gtest/gtest.h>
#include "test_google.cpp"


//int main (int, char **) {
//    std::cout << "Version: " << version() << std::endl;
//    std::cout << "Hello, world!" << std::endl;
////    testing::InitGoogleTest()
//    return 0;
//}


int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return RUN_ALL_TESTS();
}
