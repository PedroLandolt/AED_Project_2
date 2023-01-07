//
// Created by pland on 05/01/2023.
//

#ifndef AED_PROJETO_2_AEROPORTO_H
#define AED_PROJETO_2_AEROPORTO_H

#include <string> /** dependencies */
using namespace std;

class Aeroporto {



    string codigo; /** String com o código do aeroporto*/
    string nome; /** String com o nome do aeroporto*/
    string cidade; /** String com o nome da cidade onde se encontra o aeroporto*/
    string pais; /** String com o nome do país onde se encontra o aeroporto*/
    double latitude; /** Double com a latitude do aeroporto*/
    double longitude; /** Double com a longitude do aeroporto*/

public:


    Aeroporto(); /** Default Constructor
 * @brief Complexidade O(1)
 */

    Aeroporto(string codigo, string nome, string cidade, string pais, double latitude, double longitude); /** Constructor
 * @param codigo String com o código do aeroporto
 * @param nome String com o nome do aeroporto
 * @param cidade String com o nome da cidade onde se encontra o aeroporto
 * @param pais String com o nome do país onde se encontra o aeroporto
 * @param latitude Double com a latitude do aeroporto
 * @param longitude Double com a longitude do aeroporto
 * @brief Complexidade O(1)
 */



    string getCodigo() const; /**Getter
 * @return String com o código do aeroporto
 * @brief Complexidade O(1)
 */

    string getNome() const; /**Getter
 * @return String com o nome do aeroporto
 * @brief Complexidade O(1)
 */

    string getCidade() const; /** Getter
 * @return String com o nome da cidade onde se encontra o aeroporto
 * @brief Complexidade O(1)
 */

    string getPais() const; /** Getter
 * @return String com o nome do país onde se encontra o aeroporto
 * @brief Complexidade O(1)
 */

    double getLatitude() const; /** Getter
 * @return Double com a latitude do aeroporto
 * @brief Complexidade O(1)
 */

    double getLongitude() const; /** Getter
 * @return Double com a longitude do aeroporto
 * @brief Complexidade O(1)
 */

};


#endif //AED_PROJETO_2_AEROPORTO_H
