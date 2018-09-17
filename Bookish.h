#ifndef Bookish

/** \brief pide un numero entero
 *
 * \param void
 * \return el numero ingresado
 *
 */
int pedirEntero (void);
/** \brief pide un numero float
 *
 * \param void
 * \return el numero ingresado
 *
 */
float pedirFloat (void);

/** \brief pide un string de 20 caracteres maximo
 *
 * \param char* el string a almacenar
 * \return void
 *
 */
void pedirString(char*);

/** \brief suma dos valores
 *
 * \param int valor a sumar
 * \param int valor a sumar
 * \return suma de los valores
 *
 */
int sumarInt (int, int);

/** \brief resta dos valores
 *
 * \param int valor a restar
 * \param int valor a restar
 * \return resta de los valores
 *
 */
int restarInt (int, int);

/** \brief multiplicacion entre dos valores
 *
 * \param int numero a multiplicar
 * \param int numero a multiplicar
 * \return producto de los valores
 *
 */
int multiplicarInt (int, int);

/** \brief division entre dos valores
 *
 * \param float dividendo
 * \param float divisor
 * \return cociente de la division
 *
 */
float dividirFloat (float, float);

/** \brief multiplicacion de todos los numeros anteriores al numero seleccionado hasta llegar a 1
 *
 * \param int numero a factorear
 * \return factorial del numero
 *
 */
int factorearInt (int);

#endif // Bookish
