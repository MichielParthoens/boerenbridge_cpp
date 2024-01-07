# boerenbridge_cpp

To build this C++ project from scratch on a clean PC, you'll need to follow these steps:

- Download cmake:
U can download cmake by entering the following command in cmd: winget install kitware.cmake
- Download MinGW:
https://www.mingw-w64.org/downloads/
make sure to add the bin folder from MinGW to system path variables. Otherwise the commands WON'T work.

-Open a terminal and navigate to the directory containing all the cpp and header files.
-Make a folder where we will build the project.
-Navigate to that folder in your terminal.
-Enter this command: cmake -G "MinGW Makefiles" ..
-You should now see make files appear in the folder.
-Type the command make, this will generate a .exe file

*if you have problems with the "make" command (sometimes the installation of MinGW doesn't include make") follow the steps in this link: https://leangaurav.medium.com/how-to-setup-install-gnu-make-on-windows-324480f1da69
