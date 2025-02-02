// @Author Lin Ya
// @Email xxbbb@vip.qq.com
#pragma once
#include "Condition.h"
#include "MutexLock.h"
#include "noncopyable.h"

class CountDownLatch : noncopyable {
 public:
  explicit CountDownLatch(int count);
  void wait();
  void countDown();

 private:
  mutable MutexLock mutex_;
  Condition condition_;
  int count_;
};
