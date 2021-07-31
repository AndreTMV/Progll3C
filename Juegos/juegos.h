#ifndef juegos_H 
#define juegos_H 
const char tipo_ensarte[][50] = { "sencillo", "capirucho", "clasico", "capirucho complicado", "cruzado", "reves", "jalon", "invertido" };

class juegos
{
public:
    int Balero(char tipo[30]);
    void UsarJuegos();
};

#endif /* juegos_H */

