#ifndef ARDUINO_H
#define ARDUINO_H
#include <qbytearray.h>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <qstring.h>

class Arduino
{

public: // méthodes de classe arduino
    Arduino();
    int connect_arduino(); //permet de connecter le PC a arduino
    int close_arduino(); // permet de fermer la connexion
    int write_to_arduino( QByteArray ); //envoyer des données vers arduino
    //recevoir des données de la carte Arduino
    QSerialPort* getserial();
    QString getarduino_port_name();
private :
    QSerialPort * serial; //Cet objet rassemble des informations(vitesse,bits de données,etc..)
   static const quint16 arduino_uno_vendor_id=9025;
   static const quint16 arduino_uno_producy_id=67;
   QString arduino_port_name;
   bool arduino_is_available;
   QByteArray data; //contenant les données lues a partir de l'
};

#endif // ARDUINO_H
