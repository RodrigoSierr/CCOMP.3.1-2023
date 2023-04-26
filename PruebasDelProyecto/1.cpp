#include <iostream>
#include <string>
#include <list>

using namespace std;

class Vivero
{
    private: 
    string PlantasOrnamentales;
    string PlantasFrutales;
    string PlantasHuerta;
    string Semillas;
    string Fertilizantes;
    string TierraySustratos;
    string HerramientasdeJardineria;
    string MacetasyJardineras;
    string SistemadeRiego;
    string ControldePlagasyEnfermedades;

    public:
        Vivero()
    {
    PlantasOrnamentales = "";
    PlantasFrutales = "";
    PlantasHuerta = "";
    Semillas = "";
    Fertilizantes = "";
    TierraySustratos = "";
    HerramientasdeJardineria = "";
    MacetasyJardineras = "";
    SistemadeRiego = "",
    ControldePlagasyEnfermedades = "";    
    }
        Vivero(string PlantasOrnamentales_, string PlantasFrutales_, string PlantasHuerta_, string Semillas_, string Fertilizantes_, string TierraySustratos_,
        string HerramientasdeJardineria_, string MacetasyJardineras_, string SistemadeRiego_, string ControldePlagasyEnfermedades_)
        {
        PlantasOrnamentales = PlantasOrnamentales_;
        PlantasFrutales = PlantasFrutales_;
        PlantasHuerta = PlantasHuerta_;
        Semillas = Semillas_;
        Fertilizantes = Fertilizantes_;
        TierraySustratos = TierraySustratos_;
        HerramientasdeJardineria = HerramientasdeJardineria_;
        MacetasyJardineras = MacetasyJardineras_;
        SistemadeRiego = SistemadeRiego_;
        ControldePlagasyEnfermedades = ControldePlagasyEnfermedades_;
        }
        void setPlantasOrnamentales(string PlantasOrnamentales_)
        {
            PlantasOrnamentales = PlantasOrnamentales_;
        }
        void setPlantasFrutales(string PlantasFrutales_)
        {
            PlantasFrutales = PlantasFrutales_;
        }
        void setPlantasHuerta(string PlantasHuerta_)
        {
            PlantasHuerta = PlantasHuerta_;
        }
        void setSemillas(string Semillas_)
        {
            Semillas = Semillas_;
        }
        void setFertilizantes(string Fertilizantes_)
        {
            Fertilizantes = Fertilizantes_;
        }
        void setTierraySustratos(string TierraySustratos_)
        {
            TierraySustratos = TierraySustratos_;
        }
        void setHerramientasdeJardineria(string HerramientasdeJardineria_)
        {
            HerramientasdeJardineria = HerramientasdeJardineria_;  
        }
        void setMacetasyJardinerias(string MacetasyJardineria_)
        {
            MacetasyJardineras = MacetasyJardineria_;
        }
        void setSistemadeRiego(string SistemasdeRiego_)
        {
            SistemadeRiego = SistemasdeRiego_;
        }
        void setControldePlagasyEnfermedades(string ControldePlagasyEnfermedades_)
        {
            ControldePlagasyEnfermedades = ControldePlagasyEnfermedades_;
        }
        string getPlantasOrnamentales()
        {
            return PlantasOrnamentales;
        }
        string getPLantasFrutales()
        {
            return PlantasFrutales;
        }
        string getPlantasHuerta()
        {
            return PlantasHuerta;
        }
        string getSemillas()
        {
            return Semillas;
        }
        string getFertilizantes()
        {
            return Fertilizantes;
        }
        string getTierraySustratos()
        {
            return TierraySustratos;
        }
        string getHerramientasdeJardineria()
        {
            return HerramientasdeJardineria;            
        }
        string getMacetasyJardinerias()
        {
            return MacetasyJardineras;
        }
        string getSistemadeRiego()
        {
            return SistemadeRiego;
        }
        string getControldePlagasyEnfermedades()
        {
            return ControldePlagasyEnfermedades;
        }
};

    int main()
    {
        list<Vivero> ListaProductos;
        
        ListaProductos.push_back(Vivero("árboles", "arbustos"," flores", "plantas trepadoras", "plantas de interior", "cactus", "suculentas"));
        
    }
