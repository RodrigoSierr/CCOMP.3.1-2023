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

    list<Vivero> ListaProductos;
    
    ListaProductos.push_back(Vivero("árboles", "arbustos", "flores", "plantas trepadoras", "plantas de interior", "cactus", "suculentas"));
    ListaProductos.push_back(Vivero("manzanas", "peras", "duraznos", "ciruelas", "naranjas", "limones", "pomelos"));
    ListaProductos.push_back(Vivero("hortalizas", "hierbas aromáticas", "plantas de tomate", "pimiento", "berenjena"));
    ListaProductos.push_back(Vivero("semillas de flores", "hortalizas", "pasto"));
    ListaProductos.push_back(Vivero("abonos orgánicos", "abonos químicos", "fertilizantes líquidos", "abonos granulados"));
    ListaProductos.push_back(Vivero("sustratos especiales para cactus y suculentas", "turba", "humus", "perlita", "vermiculita"));
    ListaProductos.push_back(Vivero("tijeras de podar", "guantes", "rastrillos", "palas", "regaderas", "mangueras"));
    ListaProductos.push_back(Vivero("macetas de diferentes tamaños", "formas y materiales", "jardineras", "maceteros colgantes"));
    ListaProductos.push_back(Vivero("sistemas de riego por goteo", "aspersores", "temporizadores", "conectores y accesorios para riego"));
    ListaProductos.push_back(Vivero("insecticidas", "fungicidas", "acaricidas"));

    for (auto it = ListaProductos.begin(); it != ListaProductos.end(); ++it)
    {
        cout << "Plantas ornamentales: " << it->getPlantasOrnamentales() << endl;
        cout << "Plantas frutales: " << it->getPLantasFrutales() << endl;
        cout << "Plantas de Huerta: " << it->getPlantasHuerta() << endl;
        cout << "Semillas: " << it->getSemillas() << endl;
        cout << "Fertilizantes: " << it->getFertilizantes() << endl;
        cout << "Tierra y Sustratos: " << it->getTierraySustratos() << endl;
        cout << "Herramientas de Jardineria: " << it->getHerramientasdeJardineria() << endl;
        cout << "Macetas y Jardineras: " << it->getMacetasyJardinerias() << endl;
        cout << "Sistemas de Riego: " << it->getSistemadeRiego() << endl;
        cout << "Control de Plagas y Fugas: " << it->getControldePlagasyEnfermedades() << endl;

    }

    return 0






/*int main()
    {
        list<Vivero> ListaProductos;
        
        ListaProductos.push_back(Vivero()("árboles", "arbustos"," flores", "plantas trepadoras", "plantas de interior", "cactus", "suculentas"));
        ListaProductos.push_back(Vivero()("manzanas", "peras", "duraznos", "ciruelas", "naranjas", "limones", "pomelos"));
        ListaProductos.push_back(Vivero()("hortalizas", "hierbas aromáticas"," plantas de tomate", "pimiento", "berenjena"));
        ListaProductos.push_back(Vivero()("semillas de flores"," hortalizas", "pasto"));
        ListaProductos.push_back(Vivero()("abonos orgánicos", "abonos químicos", "fertilizantes líquidos", "abonos granulados"));
        ListaProductos.push_back(Vivero()("sustratos especiales para cactus y suculentas", "turba", "humus", "perlita", "vermiculita"));
        ListaProductos.push_back(Vivero()("tijeras de podar", "guantes", "rastrillos", "palas", "regaderas", "mangueras"));
        ListaProductos.push_back(Vivero()("macetas de diferentes tamaños", "formas y materiales", "jardineras", "maceteros colgantes"));
        ListaProductos.push_back(Vivero()("sistemas de riego por goteo", "aspersores", "temporizadores", "conectores y accesorios para riego"));
        ListaProductos.push_back(Vivero()("insecticidas", "fungicidas", "acaricidas"));
    

         for (auto it = ListaProductos.begin(); it != ListaProductos.end(); ++it)
    {
        cout << "Plantas ornamentales: " << it->getPlantasOrnamentales() << endl;
        cout << "Plantas frutales: " << it->getPLantasFrutales() << endl;
        cout << "Plantas de Huerta: " << it->getPlantasHuerta() << endl;
        cout << "Semillas: " << it->getSemillas() << endl;
        cout << "Fertilizantes: " << it->getFertilizantes() << endl;
        cout << "Tierra y Sustratos: " << it->getTierraySustratos() << endl;
        cout << "Herramientas de Jardineria: " << it->getHerramientasdeJardineria() << endl;
        cout << "Macetas y Jardineras: " << it->getMacetasyJardinerias() << endl;
        cout << "Sistemas de Riego: " << it->getSistemadeRiego() << endl;
        cout << "Control de Plagas y Fugas: " << it->getControldePlagasyEnfermedades() << endl;

    }

    return 0;
}
*/





*Plantas ornamentales: árboles, arbustos, flores, plantas trepadoras, plantas de interior, cactus, suculentas, etc.

Plantas frutales: árboles y arbustos que producen frutas como manzanas, peras, duraznos, ciruelas, naranjas, limones, pomelos, entre otros.

Plantas para huerta: hortalizas, hierbas aromáticas, plantas de tomate, pimiento, berenjena, entre otras.

Semillas: semillas de flores, hortalizas, pasto, etc.

Fertilizantes: abonos orgánicos, abonos químicos, fertilizantes líquidos, abonos granulados, etc.

Tierra y sustratos: mezclas de tierra para diferentes tipos de plantas, sustratos especiales para cactus y suculentas, turba, humus, perlita, vermiculita, etc.

Herramientas de jardinería: tijeras de podar, guantes, rastrillos, palas, regaderas, mangueras, entre otras.

Macetas y jardineras: macetas de diferentes tamaños, formas y materiales, jardineras, maceteros colgantes, etc.

Sistemas de riego: sistemas de riego por goteo, aspersores, temporizadores, conectores y accesorios para riego.

Control de plagas y enfermedades: productos para el control de plagas y enfermedades en las plantas, como insecticidas, fungicidas, acaricidas, etc.
*/