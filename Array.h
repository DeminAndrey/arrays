#pragma once

#include <string>

template<typename T>
class Array
{
protected:
  int Size = 0;
  T* Data = nullptr;
  int Realloc = 0;
  std::string Name;

public:
  virtual ~Array()
  {
    if (Data != nullptr)
    {
      delete []Data;
    }
  }

  virtual int realloc() const
  {
    return Realloc;
  }

  virtual int size() const
  {
    return Size;
  }

  virtual std::string name() const
  {
    return Name;
  }

  virtual T value(int index) const = 0;

  virtual void add(T value, int index) = 0;

  virtual T remove(int index) = 0;
};
