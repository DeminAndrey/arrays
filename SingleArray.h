#pragma once

#include "Array.h"

template<typename T>
class SingleArray : public Array<T>
{
public:
  explicit SingleArray(int size = 1)
  {
    Size = size;
    Data = new T[Size];
    Realloc++;
    Name = "Фиксированный массив";
  }

  ~SingleArray() override = default;

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
