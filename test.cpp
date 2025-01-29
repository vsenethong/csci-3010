#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.h" 
#include <vector>

TEST_CASE("Test OddMask with a range of numbers", "[OddMask]") {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<bool> result = OddMask(nums);

    REQUIRE(result[0] == true); 
    REQUIRE(result[1] == false); 
    REQUIRE(result[2] == true);  
    REQUIRE(result[3] == false); 
    REQUIRE(result[4] == true);  
    REQUIRE(result[5] == false); 
    REQUIRE(result[6] == true);  
    REQUIRE(result[7] == false); 
    REQUIRE(result[8] == true);  
    REQUIRE(result[9] == false); 
}

TEST_CASE("Test RemoveTwos", "[RemoveTwos]") {
    REQUIRE(RemoveTwos(16) == 1);   
    REQUIRE(RemoveTwos(7) == 7);  
    REQUIRE(RemoveTwos(52) == 13);  
    REQUIRE(RemoveTwos(26) == 13);  
}

TEST_CASE("Test GreaterMask", "[GreaterMask]") {
    std::vector<int> nums = {1, 5, 8, 12, 3, 7};
    
    std::vector<bool> result = GreaterMask(nums, 6);

    REQUIRE(result[0] == false);
    REQUIRE(result[1] == false);  
    REQUIRE(result[2] == true);
    REQUIRE(result[3] == true);  
    REQUIRE(result[4] == false); 
    REQUIRE(result[5] == true);
}
