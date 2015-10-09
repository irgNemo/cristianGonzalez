/*
 * Author: Cristian David Gonzalez Gonzalez.
 */

#ifndef FASTA_INFO_INCLUDED
#define FASTA_INFO_INCLUDED

#include <string>
#include "SequenceInfo.h"

class FastaInfo : public SequenceInfo {
 public:
   FastaInfo(const std::string &description, const std::string &sequenceData);
   FastaInfo()  = default;
   ~FastaInfo() = default;
   void  setSequenceData(const std::string &sequenceData) override;
   void  setDescription(const std::string &description);
   const std::string &getSequenceData() const override;
   const std::string &getDescription()  const;
   const std::string &getFormatName()   const override;
 private:
   std::string description;
   std::string sequenceData;
};



#endif // FASTA_INFO_INCLUDED
