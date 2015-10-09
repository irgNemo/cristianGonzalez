/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Institution: UdG-CUCEI.
 * Created: October 6th 2015.
 */
 
#ifndef FASTA_READER_H_INCLUDED
#define FASTA_READER_H_INCLUDED

#include "SequenceReader.h"

class FastaReader : public SequenceReader {
   ~FastaReader() = default;
   SequenceInfo *readSequence(const char *fileName) override;
   bool supportsExtention(const char *ext) override;
};

#endif // FASTA_READER_H_INCLUDED
