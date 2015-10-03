/*
 * Autor: Cristian David Gonzalez Gonzalez.
 * Fecha de creación: 22 de Septiembre de 2015.
 */
 
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class FastaParser {
 public:
   FastaParser(std::ifstream &file);
   const std::string &getDescription();
   const std::string &getSequenceData();
 private:
   std::string description;
   std::string sequenceData; 
};

int main(int argc, char *argv[]) {
   if (argc <= 1) return EXIT_FAILURE;
   std::ifstream in(argv[1]);
   FastaParser fasta(in);
   std::cout << "*Description:" <<  std::endl
             << fasta.getDescription() << std::endl;
   std::cout << "*Sequence Data:" << std::endl
             << fasta.getSequenceData() << std::endl;
   return EXIT_SUCCESS;
}

FastaParser::FastaParser(std::ifstream &file) {
   std::string line;
   file.get(); // ifnore >
   std::getline(file, description);
   while (!std::getline(file, line).eof() && !line.empty()) {
      line.push_back('\n');
      sequenceData += line;
   }
}

const std::string &FastaParser::getDescription() {
   return description;
}

const std::string &FastaParser::getSequenceData() {
   return sequenceData;
}
