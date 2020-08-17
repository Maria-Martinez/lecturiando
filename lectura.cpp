#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
void parseCSV()
{
    ifstream data("Book1.csv"); //abre y lee los archivos del book1.csv
    string line;       // crea una variable que almacena datos
    vector<vector<string>> parsedCsv;  //crea un vector que almacena los datos de la variable anterior
    int rowcount=0; //define rowcount=0 como constante
    int colcount=0; //define colcount=0 como constante
    while (getline(data,line))//ciclo while que realiza la funcion de el archivo data("Book1.csv") e ingresa esos datos de la avariable anterior
    {
        stringstream lineStream(line);
        string cell; 
        vector<string> parsedRow;
        colcount=0; //constante colcount=0
        while (getline(lineStream,cell,','))//ciclo while que realiza la funcion de revisar cada renglon y edintificar cada ',' y guarda esa informacion
        {
            parsedRow.push_back(cell); 
            colcount++; //es un contador (colcount=colcount+1)
        }
        rowcount++;//es un rowcount (rowcount=rowciunt+1)
        parsedCsv.push_back(parsedRow);



    }
    for(int i=0; i<rowcount; i++){ //un ciclo for que avanza en la matrix en i=0 hasta i<rowcount de manera de i=i+1
        for(int j=0; j<colcount;j++){//un ciclo for que avanza en la matrix en j=0 hasta i<rowcount de manera de j=j+1
        cout <<parsedCsv[i][j]<<" - "; //muestra en el terminal la operacion parsedCsv[i][j] y el espacio esta separado por " - " 
        }
        cout<< '\n'; //da un salto de linea en terminal
    }
}
int main()
{
    parseCSV();
    return 0;
}