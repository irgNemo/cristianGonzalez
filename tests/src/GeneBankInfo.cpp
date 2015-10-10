/*
 * Author: Cristian David Gonzalez Gonzalez.
 * Created on October 8th 2015.
 */

#include "GeneBankInfo.h"
#include <string>
#include <map>
#include <vector>

static std::string formatName = "GeneBank";

void  GeneBankInfo::setSequenceData(const std::string &sequenceData) {
   origin = sequenceData; // TODO averiguar si ORIGIN es siempre lo mismo que sequence data
}

bool GeneBankInfo::setLocusField(const std::string &field,
                                 const std::string &value) {
   auto iter = locus.find(field);
   if (iter != locus.end()) {
      iter->second = value;
   }
   return false;
}

void GeneBankInfo::setDefinition(const std::string &definition) {
   this->definition = definition;
}

void GeneBankInfo::setAccession(const std::string &accession) {
   this->accession = accession;
}

void GeneBankInfo::setVersion(const std::string &version) {
   this->version = version;
}

void GeneBankInfo::setKeywords(const std::string &keywords) {
   this->keywords = keywords;
}

void GeneBankInfo::setSource(const std::string &source) {
   this->source = source;
}

void GeneBankInfo::setOrganism(const std::string &organism) {
   this->organism = organism;
}

void GeneBankInfo::addReference(Reference &reference) {
   references.push_back(reference);
}

bool GeneBankInfo::deleteReference(unsigned idx) {
   if (idx < references.size()) {
      references.erase(references.begin() + idx);
      return true;
   }
   return false;
}

const std::string &GeneBankInfo::getSequenceData() const {
   return origin;
}

const std::string &GeneBankInfo::getFormatName() const {
   return formatName;
}
