/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Created on October 9th 2015.
 */

#include "SequenceReaderChooser.h"
#include <initializer_list>
#include <vector>
#include "SequenceReader.h"

SequenceReaderChooser::SequenceReaderChooser(
   std::initializer_list<SequenceReader*> readerList)
 : readers(readerList) {
}

SequenceReader *SequenceReaderChooser::findCorrectReader(const char *fileExt) {
   SequenceReader *correct = nullptr;
   for (auto reader : readers)
      if (reader->supportsExtention(fileExt)) {
         correct = reader;
         break;
      }
   return correct;
}

void SequenceReaderChooser::addReader(SequenceReader *reader) {
   readers.push_back(reader);   
}
