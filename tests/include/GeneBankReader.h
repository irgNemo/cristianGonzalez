/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Institution: UdG-CUCEI.
 * Created: October 6th 2015.
 */
 
#ifndef GENE_BANK_READER_H_INCLUDED
#define GENE_BANK_READER_H_INCLUDED

#include "SequenceReader.h"
#include "SequenceInfo.h"

class GeneBankReader : public SequenceReader {
   ~GeneBankReader() = default;
   SequenceInfo *readSequence(const char *fileName) override;
   bool supportsExtention(const char *ext) override;
};

#endif // GENE_BANK_READER_H_INCLUDED
