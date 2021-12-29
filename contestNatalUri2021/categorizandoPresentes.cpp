#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  map<int, string> id = {
      {1, "Brinquedos"},
      {2, "Alimentos"},
      {3, "Roupas"},
      {4, "Calcados"},
      {5, "Eletronicos"},
      {6, "Livros"},
      {7, "Gadgets"},
      {8, "Smartphones"},
      {9, "Jogos"},
      {10, "Papelaria"}};
  map<string, int> obj = {
      {"Brinquedos", 0},
      {"Alimentos", 0},
      {"Roupas", 0},
      {"Calcados", 0},
      {"Eletronicos", 0},
      {"Livros", 0},
      {"Gadgets", 0},
      {"Smartphones", 0},
      {"Jogos", 0},
      {"Papelaria", 0}};

  while (n--)
  {
    string x;
    int p;
    cin >> x >> p;
    obj[id[p]]++;
  }

  vector<string> arr = {"Brinquedos",
                        "Alimentos",
                        "Roupas",
                        "Calcados",
                        "Eletronicos",
                        "Livros",
                        "Gadgets",
                        "Smartphones",
                        "Jogos",
                        "Papelaria"};

  for(string c : arr) {
    cout << "Total de " + c +": " + to_string(obj[c]) << "\n";
  }
}