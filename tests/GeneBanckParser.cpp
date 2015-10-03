/*
 * Autor: Cristian David Gonzalez Gonzalez.
 * Fecha de creación: 22 de Septiembre de 2015.
 * Descripción: Programa para parsear un archivo de GenBank, .genbank o .gb.
 */

#include <iostream>
#include <fstream>
#include <map>
#include <string>

class GeneBanckParser {
 public:
   GeneBankParser(std::ifstream &file);
   const string &obtenerInfo(string &campo);
 private:
   std::map<std::string, // keyword
            std::string> info;
   std::map<std::string, std::string> features;
};

int main(int argc, char *argv[]) {
   return 0;
}

GeneBankParser::ParseadorGeneBank(std::ifstream &file) {
   std::string line;
   std::string keyword;
   std::string fieldInfo;
   while (!(file >> keyword).eof() && keyword != "//") {
      getiline(file, fieldInfo);
      fieldInfo.push_back('\n');
   }
}
