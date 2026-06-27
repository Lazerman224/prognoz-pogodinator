#include <iostream>
#include <vector>
#include <cassert>
#include "main.cpp"

using namespace std;

// Группа тестов. все положительные
void testAllPositive() {
    assert(findMaxThaw({ 1, 2, 3 }) == 3);
    assert(findMaxThaw({ 5, 10, 7 }) == 3);
    cout << "  all positive: OK" << endl;
}

// Группа тестов. все неположительные
void testAllNonPositive() {
    assert(findMaxThaw({ -1, -2, -3 }) == 0);
    assert(findMaxThaw({ 0, 0, 0 }) == 0);
    assert(findMaxThaw({ -5, 0, -1 }) == 0);
    cout << "  all non-positive: OK" << endl;
}

// Группа тестов. смешанные последовательности
void testMixed() {
    assert(findMaxThaw({ 5, -1, 5, 5, -1, 5 }) == 2);
    assert(findMaxThaw({ 5, 5, -1, 5 }) == 2);
    assert(findMaxThaw({ -1, 5, 5 }) == 2);
    assert(findMaxThaw({ 0, 5, 5, -1, 5 }) == 2);
    assert(findMaxThaw({ -10, 20, 30, -5, 10, 20, 30, 40 }) == 4);
    cout << "  mixed: OK" << endl;
}

// Группа тестов. одиночные элементы
void testSingle() {
    assert(findMaxThaw({ 100 }) == 1);
    assert(findMaxThaw({ -50 }) == 0);
    assert(findMaxThaw({ 0 }) == 0);
    cout << "  single: OK" << endl;
}

// Группа тестов. примеры из условия
void testExamples() {
    assert(findMaxThaw({ -20, 30, -40, 50, 10, -10 }) == 2);
    assert(findMaxThaw({ 10, 20, 30, 1, -10, 1, 2, 3 }) == 4);
    assert(findMaxThaw({ -10, 0, -10, 0, -10 }) == 0);
    cout << "  examples from task: OK" << endl;
}

int main() {
    cout << "Running tests..." << endl;
    testAllPositive();
    testAllNonPositive();
    testMixed();
    testSingle();
    testExamples();
    cout << "Все тесты пройдены успешно!" << endl;
    return 0;
}