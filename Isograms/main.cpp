#include <algorithm>
#include <bitset>
#include <cctype>
#include <iostream>

// Check if the given string is an isogram? isogram: each letter has only
// occured once (case insensitive!)
bool is_isogram(std::string&& str) {
  std::bitset<26> letters{};
  std::transform(std::begin(str), std::end(str), std::begin(str), ::tolower);
  for (char letter : str) letters.set(letter - 'a', true);
  return letters.count() == str.length();
}

int main() {
  std::cout << std::boolalpha;

  // Test
  std::cout << "isIsogram: " << is_isogram("isIsogram") << std::endl;
  std::cout << "Dermatoglyphics: " << is_isogram("Dermatoglyphics")
            << std::endl;
  std::cout << "moose: " << is_isogram("moose") << std::endl;
  std::cout << "aba: " << is_isogram("aba") << std::endl;
  std::cout << "moOse: " << is_isogram("moOse") << std::endl;
  std::cout << "thumbscrewjapingly: " << is_isogram("thumbscrewjapingly")
            << std::endl;
  std::cout << " : " << is_isogram("") << std::endl;

  return 0;
}
