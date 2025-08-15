#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private:
        unsigned int size;
        std::vector<int> tab;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &cpy);
        Span &operator=(const Span &affect);
        ~Span();
        void addNumber(int numb);
        int shortestSpan();
        int longestSpan();
        class SpanFullException : public std::exception
        {
            const char* what() const throw()
            {
                return("Span is full");
            }
        };
        class NoSpanException : public std::exception
        {
            const char* what() const throw()
            {
                return ("Not enough numbers to find a span");
            }
        };
        template <typename T>
        void addNumbers(T begin, T end)
        {
            for (T it = begin; it != end; ++it)
                addNumber(*it);
        }
};