#define CATCH_CONFIG_MAIN
#include <string>
#include <catch.hpp>

#include "Brainfuck.hpp"

TEST_CASE( "Brainfuck interpreter test cases", "[interp]" ) {

    Brainfuck interpreter;

    SECTION( "empty code evaluates to empty result" ) {
        Code code{""};
        Input input{""};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

#if 0
    SECTION( "outputting memory without any prior operations yields zeroes" ) {
        Code code{".........."};
        Input input{""};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "streaming input to output works correctly" ) {
        Code code{",.,..,...,...."};
        Input input{"abcd"};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "incrementing/decrementing at memory pointer results in correct numbers" ) {
        Code code{",.+.++.+++.---.--.-."};
        Input input{"\1"};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "memory can be traversed" ) {
        Code code{",>,>,>,<<<.>.>.>.<.<.<."};
        Input input{"abcd"};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "simple loops' steps are stepped through" ) {
        Code code{",[.-]"};
        Input input{"\5"};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "nested loops' are evaluated in order" ) {
        Code code{",[.>+[.-]<-]"};
        Input input{"\5"};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "overflow test" ) {
        Code code{",+."};
        Input input{"\255"};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "underflow test" ) {
        Code code{",-."};
        Input input{"\0"};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "comments are ignored" ) {
        Code code{"qwertyuiopasdfghjklzxcvbnm,."};
        Input input{"a"};
        REQUIRE( interpreter.interpret(code, input) == "todo" );
    }

    SECTION( "self interpreter" ) {
        Code code{
            ">>>+[[-]>>[-]++>+>+++++++[<++++>>++<-]++>>+>+>+++++[>++>++++++<<-]+>>>,<++[[>["
            "->>]<[>>]<<-]<[<]<+>>[>]>[<+>-[[<+>-]>]<[[[-]<]++<-[<+++++++++>[<->-]>>]>>]]<<"
            "]<]<[[<]>[[>]>>[>>]+[<<]<[<]<+>>-]>[>]+[->>]<<<<[[<<]<[<]+<<[+>+<<-[>-->+<<-[>"
            "+<[>>+<<-]]]>[<+>-]<]++>>-->[>]>>[>>]]<<[>>+<[[<]<]>[[<<]<[<]+[-<+>>-[<<+>++>-"
            "[<->[<<+>>-]]]<[>+<-]>]>[>]>]>[>>]>>]<<[>>+>>+>>]<<[->>>>>>>>]<<[>.>>>>>>>]<<["
            ">->>>>>]<<[>,>>>]<<[>+>]<<[+<<]<]"
        };
        Input input{",.!a"};
        REQUIRE( interpreter.interpret(code, input) == "a" );
    }
#endif
}

