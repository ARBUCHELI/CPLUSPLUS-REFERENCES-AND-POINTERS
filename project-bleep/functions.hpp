#include <iostream>

//void bleep(std::string word, std::string &sentence);

void bleep(std::string word, std::string &sentence) {
    
  for (int i = 0; i < sentence.size(); i++) {
    int match = 0;   

    for (int j = 0; j < word.size(); j++) {
      if (sentence[i+j] == word[j]) {
        match++;   
      }
    }
        
    if (match == word.size()) {
      for (int k = 0; k < word.size(); k++) {
        sentence[i+k] = '*';
      }
    }  
  }   
}