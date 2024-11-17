#pragma once

#include <string>

template<typename T>
class MatrixArray
{
private:
  int Size = 0;
  T** Data = nullptr;
  int Realloc = 0;
  std::string Name;

public:
  MatrixArray()
  {
    Size = 10;
    Name = "Свободный массив";
  }

  virtual ~MatrixArray()
  {
    for (int i = 0; i < Size; ++i)
    {
      delete []*Data;
    }
  }

  int realloc() const
  {
    return Realloc;
  }

  int size() const
  {
    return Size;
  }

  std::string name() const
  {
    return Name;
  }

  T value(int index) const
  {
    return Data[index];
  }

  void add(T value, int index)
  {

  }

  T remove(int index)
  {
    return {};
  }
};
