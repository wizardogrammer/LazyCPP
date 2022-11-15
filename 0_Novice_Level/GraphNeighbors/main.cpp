#include <iostream>
#include <list>
#include <unordered_map>

void depthFirstPrint(const std::unordered_map<char, std::list<char>>& graph,
                     char source) {
  std::list<char> Stack{source};
  char current{};
  while (Stack.size() > 0) {
    std::cout << (current = Stack.back());
    Stack.pop_back();
    for (char neighbor : graph.at(current)) Stack.push_back(neighbor);
  }
}

int main() {
  const std::unordered_map<char, std::list<char>> graph{
      {{'a', std::list<char>({'c', 'b'})},
       {'b', std::list<char>({'d'})},
       {'c', std::list<char>({'e'})},
       {'d', std::list<char>({'f'})},
       {'e', std::list<char>()},
       {'f', std::list<char>()}}};

  depthFirstPrint(graph, 'a');
  return 0;
}
