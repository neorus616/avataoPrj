#include <iostream>

int main (int argc, const char *argv[]) {
   if (argc != 2) {
      std::cout << "./crackme <password>";
   } else {
         std::string encrypted = argv[1];
         if (encrypted.size() != 9) {
            std::cout << "password must be of 9 characters" << std::endl;
         } else {
            char secret[9] = { 'M', 'A', 'G', 'I', 'C', 'W', 'O', 'R', 'D', };
            std::string decrypted = argv[1];
            for (int i = 0; i < 9; i++)
               encrypted[i] = decrypted[i] ^ secret[i];
            if (encrypted == "thesecret")
               std::cout << "You did it!" << std::endl;
            else
               std::cout << "Wrong key" << std::endl;
         }
   }
return 0;
}