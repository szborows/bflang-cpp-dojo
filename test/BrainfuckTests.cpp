#define CATCH_CONFIG_MAIN
#include <string>
#include <catch.hpp>
#include <stringConverter.hpp>

#include "Brainfuck.hpp"

TEST_CASE( "Brainfuck interpreter test cases", "[interp]" ) {

    Brainfuck interpreter;

    SECTION( "empty code evaluates to empty result" ) {
        Code code{convertToString("")};
        Input input{convertToString("")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("todo") );
    }

#if 0
    SECTION( "outputting memory without any prior operations yields zeroes" ) {
        Code code{convertToString("..........")};
        Input input{convertToString("")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("todo") );
    }

    SECTION( "streaming input to output works correctly" ) {
        Code code{convertToString(",.,..,...,....")};
        Input input{convertToString("abcd")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("todo") );
    }

    SECTION( "incrementing/decrementing at memory pointer results in correct numbers" ) {
        Code code{convertToString(",.+.++.+++.---.--.-.")};
        Input input{convertToString("\1")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("todo") );
    }

    SECTION( "memory can be traversed" ) {
        Code code{convertToString(",>,>,>,<<<.>.>.>.<.<.<.")};
        Input input{convertToString("abcd")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("todo") );
    }

    SECTION( "simple loops' steps are stepped through" ) {
        Code code{convertToString(",[.-]")};
        Input input{convertToString("\5")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("todo") );
    }

    SECTION( "nested loops' are evaluated in order" ) {
        Code code{convertToString(",[.>+[.-]<-]")};
        Input input{convertToString("\5")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("todo") );
    }

    SECTION( "overflow test" ) {
        Code code{convertToString(",+.")};
        Input input{convertToString("\377")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("\0") );
    }

    SECTION( "underflow test" ) {
        Code code{convertToString(",-.")};
        Input input{convertToString("\0")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("\377") );
    }

    SECTION( "comments are ignored" ) {
        Code code{convertToString("qwertyuiopasdfghjklzxcvbnm,.")};
        Input input{convertToString("a")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("todo") );
    }

    SECTION( "self interpreter" ) {
        Code code{convertToString(
            ">>>+[[-]>>[-]++>+>+++++++[<++++>>++<-]++>>+>+>+++++[>++>++++++<<-]+>>>,<++[[>["
            "->>]<[>>]<<-]<[<]<+>>[>]>[<+>-[[<+>-]>]<[[[-]<]++<-[<+++++++++>[<->-]>>]>>]]<<"
            "]<]<[[<]>[[>]>>[>>]+[<<]<[<]<+>>-]>[>]+[->>]<<<<[[<<]<[<]+<<[+>+<<-[>-->+<<-[>"
            "+<[>>+<<-]]]>[<+>-]<]++>>-->[>]>>[>>]]<<[>>+<[[<]<]>[[<<]<[<]+[-<+>>-[<<+>++>-"
            "[<->[<<+>>-]]]<[>+<-]>]>[>]>]>[>>]>>]<<[>>+>>+>>]<<[->>>>>>>>]<<[>.>>>>>>>]<<["
            ">->>>>>]<<[>,>>>]<<[>+>]<<[+<<]<]"
        )};
        Input input{convertToString(",.!a")};
        REQUIRE( interpreter.interpret(code, input) == convertToString("a") );
    }
#endif
}

