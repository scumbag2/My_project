// #include "iostream"
// #include <vector>
// #include <thread>
// #include <atomic>

// std::atomic_flag lock_flag = ATOMIC_FLAG_INIT;

// void Func(int a)
// {   
//     while(lock_flag.test_and_set()){}
//     std::cout << "a --- " << a << std::endl;
//     lock_flag.clear();
// }


// int main(int argc, char const *argv[])
// {
//     std::vector<std::thread> v;

//     for(int i = 0;i < 100;i++)
//     {
//         v.emplace_back(Func,i);
//         v.at(i).detach();
//     }



//     return 0;
// }


// atomic::exchange example
#include <iostream>       // std::cout
#include <atomic>         // std::atomic
#include <thread>         // std::thread
#include <vector>         // std::vector

std::atomic<bool> ready (false);
std::atomic<bool> winner (false);

void count1m (int id) {
  while (!ready) {}                  // wait for the ready signal
  for (int i=0; i<1000000; ++i) {}   // go!, count to 1 million
  if (!winner.exchange(true)) { std::cout << "thread #" << id << " won!\n"; }
};

int main ()
{
  std::vector<std::thread> threads;
  std::cout << "spawning 10 threads that count to 1 million...\n";
  for (int i=1; i<=10; ++i) threads.push_back(std::thread(count1m,i));
  ready = true;
  for (auto& th : threads) th.join();

  return 0;
}