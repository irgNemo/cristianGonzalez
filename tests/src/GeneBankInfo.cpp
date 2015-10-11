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
      return true;
   } else {
      return false;
   }
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
   } else {
      return false;
   }
}

bool GeneBankInfo::setFeaturesField(const std::string &field,
                                    const std::string &value) {
   auto iter = features.find(field);
   if (iter != features.end()) {
      iter->second = value;
      return true;
   } else {
      return false;
   }
}

void GeneBankInfo::setOrigin(const std::string &origin) {
   this->origin;
}

const std::string &GeneBankInfo::getSequenceData() const {
   return origin;
}

const std::string &GeneBankInfo::getFormatName() const {
   return formatName;
}

const std::string &GeneBankInfo::getLocusField(const std::string &field) const {
   return locus[field];
}

const std::string &GeneBankInfo::getDefinition() const {
   return definition;
}

const std::string &GeneBankInfo::getAccession() const {
   return accession;
}

const std::string &GeneBankInfo::getVersion() const {
   return version;
}

const std::string &GeneBankInfo::getKeywords() const {
   return keywords;
}

const std::string &GeneBankInfo::getSource() const {
   return source;
}

const std::string &GeneBankInfo::getOrganism() const {
   return organism;
}

unsigned GeneBankInfo::getReferencesSize() const {
   return references.size();
}

const Reference &GeneBankInfo::getReference(unsigned idx) const {
   return references[idx];
}

const std::string &GeneBankInfo::getFeature(const std::string &feature) const {
   return features[feature];
}

const std::string &GeneBankInfo::getOrigin() {
   return origin;
}
