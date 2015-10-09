/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Created on October 9th 2015.
 */

#include <cstdlib>
#include <iostream>
#include "SequenceReaderChooser.h"
#include "SequenceReader.h"
#include "FastaReader.h"
#include "GeneBankReader.h"
#include "SequenceInfo.h"

int main(int argc, char *argv[]) {
   if (argc <= 1) {
      std::cout << "Input file not specified" << std::endl;
      std::exit(EXIT_FAILURE);
   }
   
   SequenceReaderChooser chooser{new FastaReader(), new GeneBankReader()};
   SequenceInfo *seqInfo;
   SequenceReader *reader;
   const char *fileName = argv[1];
   const char *ext = strchr(fileName, '.');
   if (ext == nullptr) {
      std::cout << "Unknown file extension" << std::endl;
      std::exit(EXIT_FAILURE);
   }
   
   reader = chooser.findCorrectReader(ext + 1);
   if (reader == nullptr) {
      std::cout << "No known SeuqenceReader can read this file extension."
                << std::endl;
      std::exit(EXIT_FAILURE);
   }
   
   seqInfo = reader.readSequence(fileName);
   if (seqInfo == nullptr) {
      std::cout << "Error while reading sequence file" << std::endl;
      std::exit(EXIT_FAILURE);
   }
   
   cout << "Format: " << seqInfo->getFormatName() << std::endl
        << "Sequence data: " << seqInfo->getSequenceData() << std::endl;
   
   return EXIT_SUCCESS;
}
