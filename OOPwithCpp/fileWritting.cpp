#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream Myfile("demoFile");
    Myfile<<"This is a demo file.";
    Myfile.close();

    return 0;
}


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//   // Create and open a text file
//   ofstream MyFile("filename.txt");

//   // Write to the file
//   MyFile << "Files can be tricky, but it is fun enough!";

//   // Close the file
//   MyFile.close();
// }