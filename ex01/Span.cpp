#include "Span.hpp"

Span::Span() : size(42) {}

Span::Span(unsigned int N) : size(N)
{

}

Span::Span(const Span &cpy)
{
    *this = cpy;
}

Span &Span::operator=(const Span &affect)
{
    if(this != &affect)
    {
        size = affect.size;
        tab = affect.tab;
    }
    return (*this);
}

Span::~Span() {}

void Span::addNumber(int numb)
{
    if(tab.size() < size)
        tab.push_back(numb);
    else
        throw SpanFullException();
}

int Span::shortestSpan()
{
    if (tab.size() < 2)
        throw NoSpanException();
    std::vector<int> sorted(tab);
    std::sort(sorted.begin(), sorted.end());
    int minSpan = sorted[1] - sorted[0];
    int span;
    for (size_t i = 1; i < sorted.size() - 1; i++) // or ++i
    {
        span = sorted[i + 1] - sorted[i];
        if (span < minSpan)
            minSpan = span;
    }
    return (minSpan);
}

int Span::longestSpan()
{
    if (tab.size() < 2)
        throw NoSpanException();
    int minVal = *std::min_element(tab.begin(), tab.end());
    int maxVal = *std::max_element(tab.begin(), tab.end());
    return (maxVal - minVal);
}
