#include "./GIClass/GroceryItem.h"
#include <sw/redis++/redis++.h>

int main(int argc, char **argv) {
    auto redisConnect = sw::redis::Redis("tcp://127.0.01:6379/0");
    std::cout << redisConnect.sw::redis::Redis::ping() << std::endl;
    return 0;
}