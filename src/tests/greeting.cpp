#include <server/view/greeting.hpp>

#include <userver/utest/utest.hpp>

using game_server::UserType;

UTEST(SayHelloTo, Basic) {
    EXPECT_EQ(game_server::SayHelloTo("Developer", UserType::kFirstTime), "Hello, Developer!\n");
    EXPECT_EQ(game_server::SayHelloTo({}, UserType::kFirstTime), "Hello, unknown user!\n");

    EXPECT_EQ(game_server::SayHelloTo("Developer", UserType::kKnown), "Hi again, Developer!\n");
    EXPECT_EQ(game_server::SayHelloTo({}, UserType::kKnown), "Hi again, unknown user!\n");
}