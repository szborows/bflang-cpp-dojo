# bflang-cpp-dojo

> let's have fun by writing brainfuck interpreter!

## What is coder dojo?

Coder dojo is a meeting during which small team of people picks challenging programming problem and
implements it jointly. It's super fun, because:

* you solve some challenging problem
* you see how other engineers are approaching problem solving
* you can learn new stuff and observe good practices
* you improve your skills

The rule is simple: programming is done in rounds. You can think of e.g. three processes beign scheduled on
your CPU in a fair way - each task gets 1/3 of the CPU. During the dojo, after some time (e.g. 5 minutes)
one participant yields control to the other in a way that everyone will get 1/n of total time. When
someone is writing the code the others should help by figuring out ideas etc.

## What is brainfuck?

Brainfuck is a simple Turing-complete language that implements so-called Turing machine - a machine that uses infinite tape as its memory device (it isn't random access memory!).

Brainfuck code consists of only 8 commands. Other characters are treated as comments. Interaction with user is facilitiated with standard i/o.

| command | meaning |
| --- | --- |
| > | Increment data pointer |
| < | Decrement data pointer |
| + | Increment current value |
| - | Decrement current value |
| . | Output current value |
| , | Read one byte from input and save it as current value |
| [ | If current value is zero, jump to command after matching ] |
| ] | If current value is nonzero, jump to command after matching [ |

Current value means value in the tape "cell" that is currently under the pointer.

## Compiling and running

```shell
# clone the repo and cd into main dir, and then:

$ mkdir build; cd build
$ cmake ..
$ make
```

Your tests should be built right now (but they're not passing). It's your task to make them pass.
The final test is brainfuck interpreter written in brainfuck. If that one passes you can be pretty
sure that your implementation is correct.

## FAQ

### Why '\1' not '1'?
'\1' means octet value 1 (SOH due to http://www.asciitable.com/). '1' means character '1' which is '\61' in ascii table.

### Why values are not printed?
Not all characters are printable in console. You can use debugPrinter function (in UnitTests has to be executed before REQUIRE() macro) to print values for debug purposes.

### Do I need to use convertToString function?
No. It has been created to make possible treat '\0' as oct zero value and not as end of string literal. It is used in unit tests and you don't need to use it anywhere else.

### What is difference between Code and Input?
Code is list of commands listed above.
Command | , | reads one byte from Input.