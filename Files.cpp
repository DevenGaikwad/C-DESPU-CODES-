# Files in C++

/* The fstream library allows us to work with files.
To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

ofstream	Creates and writes to files
ifstream	Reads from files
fstream	    A combination of ofstream and ifstream: creates, reads, and writes to files


To create a file, use either the ofstream or fstream class, and specify the name of the file.
To write to the file, use the insertion operator (<<). */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}

/*Read a File
To read from a file, use either the ifstream or fstream class, and the name of the file.
Note that we also use a while loop together with the getline() function (which belongs to the ifstream class) to read the file line by line, and to print the content of the file:*/



// Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();


