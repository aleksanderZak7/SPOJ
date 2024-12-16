#include <csignal>

int main() 
{
    raise(SIGALRM);
    return 0;
}