#include <string>

std::string repeat_str(size_t repeat, const std::string &str)
{
  std::string v = str;
  for (int i = 1; i < repeat; i += 1)
  {
    v = v + str;
  }

  if (v == "null")
  {
    return "";
  }

  return v;
}