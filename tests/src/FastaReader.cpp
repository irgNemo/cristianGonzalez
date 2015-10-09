/*
 * Author: Cristian David Gonzalez Gonzalez
 */

#include "FastaReader.h"
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include "FastaInfo.h"

SequenceInfo *FastaReader::readSequence(const char *fileName) {
   std::ifstream file(fileName);
   if (file.is_open()) {
      std::string line;
      std::string description;
      std::ostringstream sequenceData;
      file.get(); // ignore '>'
      std::getline(file, description);
      while (!std::getline(file, line).eof() && !line.empty()) {
         sequenceData << line;
      }
      return new FastaInfo(description, sequenceData.str());
   }
   return nullptr;
}

bool FastaReader::supportsExtention(const char *ext) {
   return strcmp("fasta", ext) == 0;
}
