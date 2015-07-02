/* *************************************************************************
 * Copyright (C) 2015
 *
 * Augusto Lopez Dantas - augustold42@gmail.com
 * Cristiano Antonio de Souza -
 * Gabriel Custódio Martins -
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * ************************************************************************* */

#include <iostream>
#include <thread>

using namespace std;

void teste(int i) {
    cout << i;
}

int main(void) {
    thread threads[5];

    for(int i = 0; i < 5; i++) {
        threads[i] = thread(teste, i);
    }

    for(int i = 0; i < 5; i++) {
        threads[i].join();
    }

    cout << endl;

    return 0;
}
