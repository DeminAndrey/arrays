#pragma once

#include "Array.h"

template<typename T>
class FactorArray : public Array<T>
{
public:
  explicit FactorArray(int size = 1)
  {
    Size = size;
    Data = new T[Size];
    Realloc++;
    Name = "Динамический массив * 2";
  }

  ~FactorArray() override = default;

  T value(int index) const override
  {
    return Data[index];
  }

  void add(T item, int index) override
  {

  }

  T remove(int index) override
  {
    return {};
  }
};
