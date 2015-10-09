/*
 * Author: Cristian David Gonzalez Gonzalez.
 */

#ifndef SEQUENCE_INFO_INCLUDED
#define SEQUENCE_INFO_INCLUDED

#include <string>

class SequenceInfo {
 public:
   virtual ~SequenceInfo() = default;
   virtual void setSequenceData(const std::string &sequenceData) = 0;
   virtual const std::string &getSequenceData() const = 0;
   virtual const std::string &getFormatName() const = 0;
};

#endif // SEQUENCE_INFO_INCLUDED
