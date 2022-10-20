#include <iostream>

enum model_t{
    S,
    E,
    X,
    Y,
    invalid

};


struct tesla_t{
    private:
        float sprint ; //Dauer von 0-100
        int reichweite; //Reichweite in km
        model_t model; // Modeltyp
        
    public:
    tesla_t(){
        char input{};
        std::cout << "Welches Fahrzeug soll es sein?" <<std::endl << "(S/3/X/Y)?";
        std::cin >> input;
        while(true){
            switch(input)
            {
            case 's':
            case 'S': model= S; break;
            case '3':
            case 'E':
            case 'e': model= E; break;
            case 'x':
            case 'X': model = X; break;
            case 'y':
            case 'Y': model =Y; break;
            default: model = invalid; break;
            }
            if(model != invalid)break;
            std::cout <<"Kein gültiges Model ausgewählt- Bitte Model wählen" << std::endl;
        }
        while(true){
            bool isValid{false};
            char input{};
            std::cout <<"Welche Variante?" <<std::endl
                      <<"(1) Standard"     <<std::endl
                      <<"(2) Performance/Plaid" <<std::endl;
            if(model == E) std::cout <<"(3) Long Range" <<std::endl;

            std::cout <<"Ihre Auswahl" ;
            std::cin >> input; 
            switch(input){
            case '1':                   isValid = true;             break;
            case '2':                   isValid = true;             break;
            case '3': if(model == E)    isValid = true;             break; 
                
            default:  std::cout << "Ungültige Eingabe!!" << std::endl; break;
            if(!isValid) continue;
            break;
            }
        }
    }
        
    
};