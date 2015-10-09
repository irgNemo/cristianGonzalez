/*
 * Author: Cristian David Gonzalez Gonzalez.
 */
 
#include "FastaInfo.h"
#include <string>

FastaInfo::FastaInfo(const std::string &description,
                     const std::string &sequenceData)
 : description(description),
   sequenceData(sequenceData) {
}

void  FastaInfo::setSequenceData(const std::string &sequenceData) {
   this->sequenceData = SequenceData;
}

void  setDescription(const string &description) {
   this->description = description;
}

const std::string &getSequenceData() const {
   return sequenceDatata;
}

const std::string &getDescription()  const {
   return description;
}

const std::string &getFormatName() const {
   return "Fasta";
}
