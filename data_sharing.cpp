#include <thread>
#include <mutex>
#include <vector>

std::mutex mtx;
int sharedData = 0;

void incrementData()
{
    std::lock_guard<std::mutex> lock(mtx);
    ++sharedData;
}

// void handleRequest(Request req)
// {
// }

int main()
{
    std::thread t1(incrementData);
    std::thread t2(incrementData);

    t1.join();
    t2.join();

    // std::vector<std::thread> workers;
    // while (true)
    // {
    // Request req = getIncomingRequest();
    // workers.push_back(std::thread(handleRequest, req)); // join thread
    // }
}