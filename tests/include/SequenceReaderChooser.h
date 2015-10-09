/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Created on October 9th 2015.
 */

#ifndef SEQUENCE_READER_CHOOSER_H_INCLUDED
#define SEQUENCE_READER_CHOOSER_H_INCLUDED

#include <vector>
#include <initializer_list>
#include "SequenceReader.h"

class SequenceReaderChooser {
 public:
   SequenceReaderChooser(std::initializer_list<SequenceReader*> readers);
   SequenceReaderChooser() = default;
   ~SequenceReaderChooser();
   SequenceReader *findCorrectReader(const char *fileExt);
   void addReader(SequenceReader *reader);
 private:
   std::vector<SequenceReader*> readers;
};

#endif // SEQUENCE_READER_CHOOSER_H_INCLUDED
