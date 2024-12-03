#pragma once

#include <string>

template<typename T>
class MatrixArray {
private:
  size_t Lenght = 1;
  const size_t Size = 10;
  size_t Count = 0;
  T** Data = nullptr;
  size_t Realloc = 0;
  std::string Name = "Free array";

public:
  MatrixArray();

  ~MatrixArray();

  T value(size_t index) const;

  void put(T value);

  void add(T value, size_t index);

  size_t realloc() const { return Realloc; }

  std::string name() const { return Name; }

  void resetRealloc() { Realloc = 0; }
};

template class MatrixArray<int>;
