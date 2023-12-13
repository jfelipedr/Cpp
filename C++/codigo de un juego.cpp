// main.cpp
int main()
{
        bool isGameOver = false;
        Player Hero;

        while(isGameOver == false)
        {
                Hero.CallInput();
        }
}

// Player.cpp
void Player::CallInput()
{
        char UserInput = ' ';
        cin << UserInput;

        switch(UserInput)
        {
        case 'w':
                y = y + 1;
                cout << ""El jugador se mueve arriba"" << endl;
                break;
        case 's':
                y = y - 1;
                cout << ""El jugador se mueve abajo"" << endl;
                break;
        case 'd':
                x = x + 1;
                cout << ""El jugador se mueve a la derecha"" << endl;
                break;
        case 'a':
                x = x - 1;
                cout << ""El jugador se mueve a la izquierda"" << endl;
                break;
        }
}

#include "player.h"
#include <iostream>

using namespace std;

player::player()
{
    x = 1;
    y = 1;

}

void player::entrada()
{
    char  usuariodeentrada =  ' ';
    cin >> usuariodeentrada;


    switch(usuariodeentrada)
    {
case 'w':
    y = y+1;
    cout << "el jugador se mueve arriba" <<endl;
    break;

case 's':
    y = y-1;
    cout << "el jugador se mueve abajo" <<endl;
    break;

case 'd':
    x=x+1;
    cout << "el jugador se mueve a la derecha" <<endl;
    break;

case 'a':
    x=x-1;
    cout << "el jugador se mueve a la izquierda" <<endl;
    break;

    }

    cout << " mi jugador esta hubicado en los puntos:" << x << "," << y <<endl;
}

#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"

class GameMap{
    private:

    protected:

    public:
        const static int ROW = 15;  //Filas 
        const static int COL = 10;   //Columnas
        MapCell cell[ROW][COL];

        GameMap();      
        void draw();

};
#endif
#ifndef GAMEMAP_H
#define GAMEMAP_H
 #include "map cell.h"


class Gamemap
{
    public:
        Gamemap();
         mapcell celdas[15][10]; //15 columnas x 10 filas


         void drawmap();
    protected:

    private:
};

#endif // GAMEMAP_H
// GameMap.h
class GameMap
{
        public:
                GameMap();

                MapCell* PlayerCell;
                MapCell cells[15][10];

                void Draw();

                void SetPlayerCell(int PlayerX, int PlayerY);
}

// GameMap.cpp
GameMap::GameMap()
{
        PlayerCell = null;
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
        PlayerCell = &cells[PlayerY][PlayerX];
        PlayerCell->id = 3;
}
if (PlayerCell != NULL) {
        PlayerCell->id = 0;
}

#include <iostream>
#include "Player.h"
#include "Mapaceldas.h"
#include "Gamemapa.h"

using namespace std;

int main()
{
 cout << "inicaia el juego" <<endl;
    bool isGameOver = false;
    Player heroe;
    Gamemapa MAP;
    heroe.entrada();


     while(isGameOver==false)
    {
       // loop de nuestro juego. cada vuelta del loop de nuestro juego vamos aa llamar el heroe.
        heroe.entrada();
        //actulizado de informacion heroe a mapa
        MAP.setplayer(heroe.x , heroe.y);
        //aqui dibujamos el mapa
        MAP.drawmap();


    }



    return 0;
}

// GameMap.cpp
void GameMap::LoadFromFile()
{
        string line;
        ifstream  MyFile(""Map.txt"");

        if (MyFile.is_open())
        {
                // ...
        }
        else{
                cout << ""FATAL ERROR"" << endl;
        }
}
void GameMap::loadMapFromFile()
{
    string line;
    ifstream file("Map.txt");

    if(file.is_open())
    {

    }else
    {
        ofstream createFile("Map.txt");

        if(createFile.is_open())
        {

        }else
        {
            cout <<"FATAL ERROR: Map can't be created" << endl;
        }
    }
}

#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;


GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL;
    LoadMap();
}
void GameMap::Draw(){
    for(int f=0; f<21; f++){
        for(int c=0; c<51; c++){
            cout << cells[f][c].id;
        }
        cout << endl;
    }
}

void GameMap::SetPlayerCell(int x, int y){
    if(PlayerCell != NULL){
        PlayerCell->id = ' ';
    }
    PlayerCell = &cells[y][x];
    PlayerCell->id = 'X';
}

void GameMap::LoadMap(){
    string line;
    ifstream MyMap("maze.txt");
    if(MyMap.is_open()){
        for(int f=0; f<21; f++){
            getline(MyMap,line);
            for(int c=0; c<51; c++){
                cells[f][c].id = line[c];
            }
        }
        MyMap.close();
    }else{
        cout << "Maze file could not be read" << endl;
    }
}

void Gamemapa::CargadeArchivo()
{
/*
ofstream archivocreado("map.txt");

 if(archivocreado.is_open())
 {

 }

 else
{
     cout << "el archivo no pudo cargarse"<<endl;

}
*/
string line; //esta linea va a estar cargando cada linea de mi archivo
ifstream  Myfile("map.txt"); //entrada de flujo de datos

if(Myfile.is_open())

{

}
else
{
    cout << "el archivo no pudo cargarse"<<endl;
}

}

if (fileCreated.is_open()){
        for (int i = 0; i < ROW; i++){
            for (int j = 0; j < COL; j++){
                if (i == 0 || i == (ROW-1) || j == 0 || j == (COL-1)){
                    fileCreated << 1;
                }else{
                    fileCreated << 0;
                }
            }
            fileCreated << endl;
        }
    }else{
        cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED!" << endl;
    }

#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL;
    LoadMapFromFile();
}
void GameMap::Draw()
{
    for(int i = 0; i < 15 ; i++)
    {
        for(int p = 0;p < 10; p++)
        {
            cout<<cells[i][p].id;
        }
        cout<<endl;
    }
}

void GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
    if(PlayerCell != NULL)
    {
        PlayerCell->id = ' ';
    }

    PlayerCell = &cells[PlayerX][PlayerY];
    PlayerCell->id = 'S';
    //cout<<"Las coordenadas del jugador son: "<<PlayerX<<","<<PlayerY<<endl;
}

void GameMap::LoadMapFromFile()
{
    /*ofstream FileCreated("Map.txt");

    if(FileCreated.is_open()){

    }else{
    cout<<"ERROR : MAP FILE COULD NOT BE CREATED"<<endl;
    }
    */
    string line;
    int row = 0;
    ifstream MyFile("Map.txt");

    if(MyFile.is_open())
    {
        while(getline(MyFile,line))
        {
            for(int p = 0;p<line.length();p++)
            {
                if(line[p] == '0')
                {
                    cells[row][p].id =' ';
                }else
                {
                    cells[row][p].id = line[p];
                }
            }

            row++;
        }
    }else{
        cout<<"ERROR : MAP FILE COULD NOT BE LOADED"<<endl;
    }
}

#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    PlayerCell = NULL;
    loadMapFromFile();
}

GameMap::~GameMap()
{
    //dtor
}
void GameMap::draw() {
    for( int i = 0; i < 15; i++ ) {
        for( int j = 0; j < 10; j++ ) {
            cout << cells[i][j].id;
        }
        cout << endl;
    }
}

void GameMap::setPlayerCell( int px, int py ) {
    //cout << "Las cordenadas del jugador estan en " << px << ", " << py << endl;

    if( PlayerCell != NULL ) {
        PlayerCell->id = ' ';
    }

    PlayerCell = &cells[px][py];
    PlayerCell->id = '3';

}

void GameMap::loadMapFromFile() {

    /*ofstream fileCreated("Map.txt");

    if ( fileCreated.is_open() ) {

    }
    else {
        cout << "Error, Map file could't be created";
    }*/


    string line;
    ifstream myFile("map.txt");
    int row = 0;

    if ( myFile.is_open() ) {
        while ( getline( myFile, line ) ) {
            for ( int p = 0; p < line.length(); p++ ) {
                if ( line[p] == '0' ) {
                    cells[row][p].id = ' ';
                }
                else {
                    cells[row][p].id = line[p];
                }

            }
            row++;
        }
    }

    else {
        cout << "ERROR: Map file couldn't be loaded" << endl;
    }
}

#include "Gamemapa.h"
#include <iostream>
#include <fstream>

using namespace std;


Gamemapa::Gamemapa()
{
playercell = NULL;
CargadeArchivo();
}



void Gamemapa::drawmap()
{
    for(int i =0; i < 15; i = i + 1 )
    {


    for(int p =0; p < 10; p = p + 1 )
    {
        cout << celdas[i][p].id;// i dibuja las columnas mientras p las filas
    }
cout << endl;
    }


}
//recibe el player X y Y, por lo tanto habra que ponerla en nuestro main()
void Gamemapa::setplayer(int playerx, int playery)

{
    if(playercell != NULL)
    {
        playercell->id= 0;
    }
playercell = &celdas[playery][playerx];
playercell->id= '3'; //id es un apuntador
/*estamos consiguiendo de nuestro arreglo de celdas la direcion de una de ellas, en este caso la de nuestro jugador
y la guardamos en una variable sin tener que iterar con las demas
*/

}

void Gamemapa::CargadeArchivo()
{
/*

ofstream archivocreado("map.txt");

 if(archivocreado.is_open())
 {

 }

 else
{
     cout << "el archivo no pudo cargarse"<<endl;

}
*/

string line; /*esta linea va a estar cargando cada linea de mi archivo,
las strings son uniones o arreglos de caracteres.*/
int fila=0;//linea
ifstream  Myfile("map.txt"); //entrada de flujo de datos

if(Myfile.is_open())

{
while(getline(Myfile,line))
{for(int j =0; j <10; j = j + 1) //line.length es una funcion de las strings que regresa el largo de la linea
{

    if( line[j]== '0')
    {


celdas[fila][j].id = 0;  /*primero s e agarra el primer lugar de la celda y se iguala con el primer caracter del archivo
 fila es el renglon mientras
 j las */

    }

    else
{celdas[fila][j].id = line[j];  }
  //cuando termina se le suma un renglo para seguir con las demas filas
}
  fila++;

}
}
else
{
    cout << "el archivo no pudo cargarse"<<endl;
}

}```

void Player::CallInput()
{
    char UserInput = ' ';
    cin >> UserInput;

    lastY=y;
    lastX=x;

    UserInput = tolower(UserInput);
    switch(UserInput)
    {
    case 'w':
        y = ((y - 1)%15+15)%15;
	//Deberia solo ser: (y-1)%15. Pero al momento de ser negativo el operador módulo deja de funcionar en mi c++
        break;
    case 's':
        y = (y + 1)%15;
        break;
    case 'd':
        x = (x + 1)%10;
        break;
    case 'a':
        x = ((x - 1)%10+10)%10;
        break;
    }
}

bool GameMap::SetPlayerAxis(int *axis){

    if(cells[axis[1]][axis[0]].IsBlocked() == false){
        if(PlayerCell != NULL){
            PlayerCell->id = ' ';
        };
        PlayerCell = &cells[axis[1]][axis[0]];
        PlayerCell->id = '3';
        return true;
    }else{
        if(PlayerCell == NULL){
            PlayerCell = &cells[1][1];
            PlayerCell->id = '3';
        };
        std::cout << "WHOOPS!, te diste de frente contra una pared" <<std::endl;
        return false;
    }
    
};

bool GameMap::SetPlayerAxis(int *axis){

    if(cells[axis[1]][axis[0]].IsBlocked() == false){
        if(PlayerCell != NULL){
            PlayerCell->id = ' ';
        };
        PlayerCell = &cells[axis[1]][axis[0]];
        PlayerCell->id = '3';
        returntrue;
    }else{
        if(PlayerCell == NULL){
            PlayerCell = &cells[1][1];
            PlayerCell->id = '3';
        };
        std::cout << "WHOOPS!, te diste de frente contra una pared" <<std::endl;
        returnfalse;
    }
    
};

`#include <iostream>
#include "Player.h"
#include "Mapaceldas.h"
#include "Gamemapa.h"

using namespace std;

int main()
{
 cout << "inicaia el juego" <<endl;
    bool isGameOver = false;
    Player heroe;
    Gamemapa MAP;
    heroe.entrada();



     while(isGameOver==false)
    {
       // loop de nuestro juego. cada vuelta del loop de nuestro juego vamos aa llamar el heroe.
        heroe.entrada();
        //actulizado de informacion heroe a mapa
       if(MAP.setplayer(heroe.x , heroe.y))
       {
       //aqui dibujamos el mapa
        MAP.drawmap();
       }

       else
        { heroe.Reset();
          MAP.drawmap();}

    }



    return 0;
}````

#ifdef WIN32
#include<iostream>
#include"player.h"
#include"gameMap.h"
#include"windows.h"
#endif


usingnamespacestd;

intmain()
{
    bool isGameOver = false;
    player hero;
    gameMap maps;

    maps.drawIntro();


    while(isGameOver == false)
    {
        //aqui es loop del juego
            hero.callInput();
            system("cls");
       //actualizacion del mpa con jugador

            if( maps.setPlayerCell(hero.positionX, hero.positionY) )
            {
                maps.draw();
            }

            else
            {
                 hero.resetPlayerSafeSet();
                 maps.draw();
            }

        //dibujado del mapa


    }

    return0;
}```

cout << " / )" << endl;
cout << " ( |
" << endl;
cout << “/| \ " << endl;
cout << " // \ " << endl;
cout << " /// | " << endl;
cout << " /( \ )/ " << endl;
cout << " \ _ //)” << endl;
cout << " \ :__ ///" << endl;
cout << " \ ) // \ " << endl;
cout << " \: / // |/ " << endl;
cout << " \ / \ // \ " << endl;
cout << " /) \ …-’ (| _| " << endl;
cout << " // / .’ \ \ \ " << endl;
cout << " /| \ ____ \ | /" << endl;
cout << " (| _ _ / ‘-. ) /.’" << endl;
cout << " \ . '-. _ / / \ " << endl;
cout << " \’. > --. ‘. \ / / /" << endl;
cout << " \ \ \ \ \ .’ /.’" << endl;
cout << " \ \ ‘._ / \ ) / .’ " << endl;
cout << " \ _ _ | .’_/ __/ " << endl;
cout << " \ \ _ | / / _/ _ " << endl;
cout << " \ \ / _.’ / / \ " << endl;
cout << " \ \ / _.’ / / \ " << endl;
cout << " \ \ .’ .’/ \ " << endl;
cout << " \ \ _ | / / _/ _" << endl;
cout << " \ \ / .’ / / \ " << endl;
cout <<" \ | /.’ / .’ '-,"<<endl;
cout <<" \ \ .’ .’/ \ “<<endl;
cout <<” /\ /\ ) ( /.’ \ “<<endl;
cout <<” | _// \ (.’ / | |"<<endl;
cout <<" / __ /–’, __/ /"<<endl; cout <<" (_ ) /b) \ '. : \___.-'_/ \__/ "<<endl; cout <<" /:/: , ) : ( /_.'__/-'|_ _ /"<< endl; cout <<" /:/: __/\ > __,_.----.__\ / (/(/("<<endl; cout <<" (_(,_/V .'/--' _/ __/ | /"<<endl; cout <<" VvvV // _.-’ .’ \ \ " <<endl;
cout <<" n_n// (((/->/ | “<<endl;
cout <<” ‘–’ ~=’ \ |"<<endl;
cout <<" \ |"<<endl;
cout <<" \ |"<<endl;
cout <<" | |,"<<endl;
cout <<" \ \ /"<<endl;
cout <<" '.)"<<endl;

void Gamemapa::drawintro()
{

string line; /*esta linea va a estar cargando cada linea de mi archivo,
las strings son uniones o arreglos de caracteres.*/
ifstream  Myfile("intro.txt"); //entrada de flujo de datos

if(Myfile.is_open())

{
while(getline(Myfile,line))
{
    cout << line <<endl;
}
cin>> line; //solo para pausar por un momento el programa
}
else
{
    cout << "la intro no pudo cargarse"<<endl;
}
}```

void Gamemapa::drawvictory()
{

string line; /*esta linea va a estar cargando cada linea de mi archivo,
las strings son uniones o arreglos de caracteres.*/
ifstream  Myfile("victoria.txt"); //entrada de flujo de datos

if(Myfile.is_open())

{
while(getline(Myfile,line))
{
    cout << line <<endl;
}
cin>> line; //solo para pausar por un momento el programa
}
else
{
    cout << "la victoria no pudo cargarse"<<endl;
}
}
#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    GameMap Map;
    Player hero;

    Map.drawIntro();

    while ( Map.gameContinue ) {
        Map.draw();
        hero.CallInput();

        if ( !Map.setPlayerCell(hero.x, hero.y) ) {
            hero.resetToSafePosition();
        }
    }

    return 0;
}

#include <iostream>
#include "personaje.h"
#include "celdasDeMapa.h"
#include "elMapa.h"

int main()
{
    //se crean el mapa y el jugador
    elMapa mapaDelJuego;
    personaje personajePrincipal;
    bool gameOver = false; //se crea la condicion para que el juego no acabe

    //por estetica
    std::cout << " ESTE ES EL MEJOR JUEGO QUE VAS A JUGAR EN TODA TU VIDA " << std::endl;
    std::cout << "________________________________________________________" << std::endl;

    //se imprime el intro
    mapaDelJuego.leerIntro();
    std::cout << std::endl;

    //retorna verdadero o falso pero como es la primera vez retorna verdadero y da el id 'H' a la posicion del jugador
    mapaDelJuego.actualizarPosicion(personajePrincipal.posicionV, personajePrincipal.posicionH, gameOver);

    //el primer mapa del juego
    mapaDelJuego.dibujarMapa();

    //se imprime la ubicacion del personajePrincipal
    personajePrincipal.imprimirCoordenadas(personajePrincipal.posicionV, personajePrincipal.posicionH);

    //se inicializa el loop del juego
    while(!gameOver)
        {

            //el jugador cambia la posicion
            personajePrincipal.entrada(gameOver);

            //si la celda esta bloqueada
            if(!mapaDelJuego.actualizarPosicion(personajePrincipal.posicionV, personajePrincipal.posicionH, gameOver))
            {
                //se le asigana al personaje la posicion anterior
                personajePrincipal.posicionAnterior();
            }//si NO esta bloqueada por la funcion del condicional se actualiza la posicion del jugador

            //y luego se dibuja el mapa con los caracteres o "id" actualizados
            mapaDelJuego.dibujarMapa();

            //se imprime la ubicacion del personajePrincipal
            personajePrincipal.imprimirCoordenadas(personajePrincipal.posicionV, personajePrincipal.posicionH);

            //por estetica lineas de separacion
            std::cout << "________________________________________________________" << std::endl;
            std::cout << "________________________________________________________" << std::endl;
            std::cout << std::endl;

        }

    //se imprime el cierre
    mapaDelJuego.leerCierre();

    //por estetica

    std::cout << "________________________________________________________" << std::endl;
    std::cout << std::endl;
    std::cout << " MUCHAS GRACIAS POR JUGAR,  AHORA MEJORA CONSTANTEMENTE " << std::endl;
    return 0;
}