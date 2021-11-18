class Weboldal {
    unsigned telefonszam;

public:
    Weboldal(): telefonszam(1000000) {}

    Weboldal operator++(int) {
        Weboldal regi = *this;
       telefonszam++;
       return regi;
    }
/*
    Weboldal operator--(int) {
        Weboldal regi = *this;
       telefonszam--;
       return regi;
    }
 */

};
