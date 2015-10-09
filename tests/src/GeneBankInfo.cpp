/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Created on October 8th 2015.
 */

#include "GeneBankInfo.h"

void  GeneBankInfo::setSequenceData(const std::string &sequenceData) {
   origin = sequenceData; // TODO averiguar si ORIGIN es siempre lo mismo que sequence data
}

const std::string &GeneBankInfo::getSequenceData() const {
   return origin;
}

const std::string &GeneBankInfo::getFormatName() const {
   return "GeneBank";
}
