all:Main

Main: Main.cpp
	clear&&clear&&g++ -oMain Main.cpp;

remake: Main.cpp
	clear&&clear&&rm Main;
	g++ -oMain Main.cpp;

test: CODE/Test.cpp
	clear&&clear;
	g++ -oTest CODE/Test.cpp;
