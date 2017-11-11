# CPP-Unit-Testing-Suite-With-CI
This repo serves as an example of how to write a C++ unit testing suite using the [Catch](https://github.com/philsquared/Catch) framework along with [TravisCI](https://travis-ci.org/) as a continuous integration tool

## Purpose
Me and two others are working on a [compiler written in C++](https://github.com/justiceadamsUNI/Klein-Compiler) this semester as part of a senior level CS course. Although we've all written uncountably many lines of C++, we realized we had never tested our C++ code. So began the hunt for a lightweight, yet verbose C++ testing framework. What I wanted was a framework that was simple to integrate, IDE independent, and build system/dependency management independent. This way our instructor (as well as any collaborators) could clone the repo and run our test right out of the box with little to no setup. This lead to the discovery of [Catch](https://github.com/philsquared/Catch). You can navigate into the [Test](https://github.com/justiceadamsUNI/CPP-Unit-Testing-Suite-With-CI/tree/master/Shapes-Catch-Testing-Example/Test) directory and see the two test written. As you can see I used two shape classes as an example. In order to run the test yourself navigate into the [Shapes-Catch-Testing-Example](https://github.com/justiceadamsUNI/CPP-Unit-Testing-Suite-With-CI/tree/master/Shapes-Catch-Testing-Example) directory and run the following command to compile the test into an executable (This command works on VS C++ compiler, feel free to use whatever compiler you want. In [.travis.yml](https://github.com/justiceadamsUNI/CPP-Unit-Testing-Suite-With-CI/blob/master/.travis.yml) we use a g++ compiler)

`cl /EHsc Test/*.cpp Source/Implementation/*.cpp` This allows us to compile every unit testable file as well as create an executable for running test. Then simply run the executable to run the test. Update: Alternatively you can run the bash script RunAllTest.sh which was heavily modeled after [hilliardj's](https://github.com/hilliardj) implementation [here](https://github.com/justiceadamsUNI/Klein-Compiler/blob/master/Compiler/runtest.sh) (You'll need g++).

`RunTest.exe`

There you have it! All you needed was a C++ compiler and git.
![Local Test Run](https://i.imgur.com/aqEOAnM.png)

## Continuous Integration
I'm using [TravisCI](https://travis-ci.org/) as my CI tool (obviously). You can look at the [.travis.yml](https://github.com/justiceadamsUNI/CPP-Unit-Testing-Suite-With-CI/blob/master/.travis.yml) file to see how we're setting up our build system. It simply sets up a g++ compiler and runs the same script as above (compile then run. It also ensures that the main class can compile). Fairly lightweight. No build system. No dependency management, just simplicity.

Thus whenever you push a commit, a build is run (it will trigger builds for PR's as well).  Here's an example Build Run.
![Local Test Run](https://i.imgur.com/xQNKlHE.png)


Hopefully, this is helpfull. If you find this and get stuck, reach out to me for help!

## Additional Testing Frameworks Explored
- [GoogleTest](https://github.com/google/googletest)
- [Microsoft Native C++ Unit Testing Framework](https://msdn.microsoft.com/en-us/library/hh598953.aspx)
- [Boost.Test](http://www.boost.org/doc/libs/1_65_1/libs/test/doc/html/index.html)

## Things I Wish To Further Explore
- I'd like to find C++ mocking framework with the same requirements as above. Ideally something similar to [Mockito for Java](http://site.mockito.org/). Ideally suited for proper integration test. 

**Update:** I discovered [CATCH](https://github.com/catchorg/Catch2), A modern, C++-native, header-only, test framework for unit-tests, TDD and BDD. It's fairly simple and lightweight being that it's header only. For an example of how to use CATCH, I encourage you to look through my [compiler repo's unit test](https://github.com/justiceadamsUNI/Klein-Compiler/tree/master/Compiler/test)




