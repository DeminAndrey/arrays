#pragma once

#include "Array.h"

template<typename T>
class VectorArray : public Array<T>
{
public:
  explicit VectorArray(int size = 1)
  {
    Size = size;
    Data = new T[Size];
    Realloc++;
    Name = "Динамический массив + 1";
  }

  ~VectorArray()
  {
    if (Data != nullptr)
    {
      delete []Data;
    }
  }

  T value(int index) const override
  {
    return Data[index];
  }

  void add(T value, int index) override
  {

  }

  T remove(int index) override
  {
    return {};
  }
};
