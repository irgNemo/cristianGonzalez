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
   this->sequenceData = sequenceData;
}

void  FastaInfo::setDescription(const std::string &description) {
   this->description = description;
}

const std::string &FastaInfo::getSequenceData() const {
   return sequenceData;
}

const std::string &FastaInfo::getDescription()  const {
   return description;
}

const std::string &FastaInfo::getFormatName() const {
   return "Fasta";
}
