/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Created on October 8th 2015.
 */

#include "GeneBankReader.h"
#include <cstring>

SequenceInfo *GeneBankReader::readSequence(const char *fileName) {
   return nullptr;
}

bool GeneBankReader::supportsExtention(const char *ext) {
   return strchr("gb", ext) == 0;
}
