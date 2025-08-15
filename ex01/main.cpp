#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    try
    {
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // Test avec itérateurs
    std::vector<int> bigNumbers(10000);
    for (int i = 0; i < 10000; ++i)
        bigNumbers[i] = i * 2;

    Span bigSpan(10000);
    bigSpan.addNumbers(bigNumbers.begin(), bigNumbers.end());

    std::cout << "Shortest Span (bigSpan): " << bigSpan.shortestSpan() << std::endl;
    std::cout << "Longest Span (bigSpan): " << bigSpan.longestSpan() << std::endl;

    return (0);
}