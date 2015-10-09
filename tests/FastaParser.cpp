/*
 * Autor: Cristian David Gonzalez Gonzalez.
 * Fecha de creación: 22 de Septiembre de 2015.
 */
 

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[]) {
   if (argc <= 1) return EXIT_FAILURE;
   std::ifstream in(argv[1]);
   FastaParser fasta(in);
   std::cout << "*Description:" <<  std::endl
             << fasta.getDescription() << std::endl;
   std::cout << "*Sequence Data:" << std::endl
             << fasta.getSequenceData() << std::endl;
   return EXIT_SUCCESS;
}
