/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Created on October 8th 2015.
 */

#ifndef GENE_BANK_H_INCLUDED
#define GENE_BANK_H_INCLUDED

#include "SequenceInfo.h"
#include <string>
#include <map>
#include <vector>

class GeneBankInfo : public SequenceInfo {
 public:
   struct Reference {
      std::string reference;
      std::string authors;
      std::string title;
      std::string journal;
      std::string pubmed;
   };
   void  setSequenceData(const std::string &sequenceData) override;
   const std::string &getSequenceData() const override;
   const std::string &getFormatName()   const override;
 private:
   std::map<std::string, std::string> locus;
   std::string definition;
   std::string accession;
   std::string version;
   std::string keywords;
   std::string source;
   std::string organism;
   std::vector<Reference> references;
   std::map<std::string, std::string> features;
   std::string origin;
};

#endif // GENE_BANK_H_INCLUDED
