#pragma once

#include <string>

template<typename T>
class Array {
protected:
  size_t Size = 0; // длина массива
  size_t Count = 0; // количество занятых элементов массива
  T* Data = nullptr; // указатель на первый элемент массива
  size_t Realloc = 0; // количество выделений памяти
  std::string Name; // наименование массива

public:
  virtual ~Array() {
    if (Data != nullptr)
      delete []Data;
  }

  size_t realloc() const { return Realloc; }

  size_t size() const { return Count; }

  std::string name() const { return Name; }

  void resetRealloc() { Realloc = 0; }

  virtual T value(size_t index) const = 0;

  virtual void put(T value) = 0;

  virtual void add(T value, size_t index) = 0;

  virtual T remove(size_t index) = 0;
};
