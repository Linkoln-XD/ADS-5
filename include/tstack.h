// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
  T arr[size];
  int top;
 public:
  Tstack():top(-1) {}
  bool isEmpty() const {
    return top == -1;
  }
  bool isFull() const {
    return top == size - 1;
  }
  T get() const {
    if(!isEmpty())
      return arr[top];
    else
      throw std::string("Empty");
  }
  void push(const T&item) {
    if(!isFull())
      arr[++top] = item;
    else
      throw std::string("Full");
  }
  void pop() {
    if(!isEmpty())
      top--;
    else
      throw std::string("Empty");
  }
};

#endif  // INCLUDE_TSTACK_H_
