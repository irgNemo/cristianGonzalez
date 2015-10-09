/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Institution: UdG-CUCEI.
 * Created: October 6th 2015.
 */
 
#ifndef SEQUENCE_READER_H_INCLUDED
#define SEQUENCE_READER_H_INCLUDED

#include "SequenceInfo.h"
 
class SequenceReader {
 public:
   virtual ~SequenceReader() = 0;
   virtual SequenceInfo *readSequence(const char *fileName) = 0;
   virtual bool supportsExtention(const char *ext) = 0;
};

#endif // SEQUENCE_READER_H_INCLUDED
