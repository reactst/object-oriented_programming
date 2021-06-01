#pragma once
#include "vjezba10.hpp"

int main() {
    while (true) {
        try {
            int a = foonos_broja();
            int b = foonos_broja();
            int op = foonos_operatora();
            double rez = foo_bar(a, b, op);
            cout << rez;
        }
        catch (exc &err) {
            err.getError();
        }
    }
    return 0;
}