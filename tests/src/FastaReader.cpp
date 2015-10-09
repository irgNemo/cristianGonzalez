/*
 * Author: Cristian David Gonzalez Gonzalez
 */

#include "FastaReader.h"
#include <cstring>
#include <iostream>
#include <ifstream>
#include <sstream>
#include "FastaInfo.h"

SequenceInfo *FastaReader::readSequence(const char *fileName) {
   std::ifstream file(fileName);
   if (in.is_open()) {
      std::string line;
      std::string description;
      std::iostringstream sequenceData;
      file.get(); // ignore '>'
      std::getline(file, description);
      while (!std::getline(file, line).eof() && !line.empty()) {
         sequenceData << line;
      }
      return new FastaInfo(description, sequenceData.str());
   } else {
      return nullptr;
   }
}

bool FastaReader::supportsExtention(const char *ext) {
   return strcmp("fasta", ext) == 0;
}
