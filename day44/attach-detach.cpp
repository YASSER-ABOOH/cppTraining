#include <iostream>
#include <thread>

void backgroundTask() {
    std::this_thread::sleep_for(std::chrono::seconds(30));
    std::cout << "Background task done." << std::endl;
}
void display(int x)
{
    std::cout << "x : " << x << std::endl;
}
void modx(int& x)
{
    x *= 2;
}
int main() {
    std::thread t(backgroundTask);
    t.detach(); // Main won't wait
    std::cout << "Main is not blocked.\n";
    std::this_thread::sleep_for(std::chrono::seconds(50)); // Wait to see output
    

}