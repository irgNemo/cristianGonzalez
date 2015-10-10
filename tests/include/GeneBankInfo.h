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
   ~GeneBankInfo() = default;
   void setSequenceData(const std::string &sequenceData) override;
   bool setLocusField(const std::string &field, const std::string &value);
   void setDefinition(const std::string &definition);
   void setAccession(const std::string &accession);
   void setVersion(const std::string &version);
   void setKeywords(const std::string &keywords);
   void setSource(const std::string &source);
   void setOrganism(const std::string &organism);
   void addReference(Reference &reference);
   bool deleteReference(unsigned idx);
   bool setFeaturesField(const std::string &field, const std::string &value);
   void setOrigin(const std::string &origin);
   const std::string &getSequenceData() const override;
   const std::string &getFormatName() const override;
   const std::string &getLocusField(const std::string &field) const;
   const std::string &getDefinition() const;
   const std::string &getAccession() const;
   const std::string &getVersion() const;
   const std::string &getKeywords() const;
   const std::string &getSource() const;
   const std::string &getOrganism() const;
   unsigned getReferencesSize() const;
   const Reference &getReference(unsigned idx) const;
   const std::string &getFeature(const std::string &feature) const;
   const std::string &getOrigin();
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
