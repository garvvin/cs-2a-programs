/*
Exoplanet Class Program v1.0.0
By Garvin Yu
August 6, 2026
*/
#include <iostream>
#include <string>

using namespace std;

class Exoplanet {
   private:
      string Name;
      double LightyearDistance; //lightyear distance from earth
      double Mass;
      double StellarMagnitude;
      int DiscoveryDate;
   public:
       //Constructors
       Exoplanet();
       Exoplanet(string, double, double, double, int);

       //Accessor functions
       string GetName();
       double GetLightyearDistance();
       double GetMass();
       double GetStellarMagnitude();
       int GetDiscoveryDate();

       //Mutator functions
       void SetName(string);
       void SetLightyearDistance(double);
       void SetMass(double);
       void SetStellarMagnitude(double);
       void SetDiscoveryDate(int);

       //Print function
       void DisplayInfo();
};

//Member function definitions
Exoplanet::Exoplanet() : Name(""), LightyearDistance(0.0), Mass(0.0), StellarMagnitude(0.0), DiscoveryDate(0) {}
Exoplanet::Exoplanet(string n, double d, double m, double ma, int da) : Name(n), LightyearDistance(d), Mass(m), StellarMagnitude(ma), DiscoveryDate(da) {}
string Exoplanet::GetName() {
    return Name;
}
double Exoplanet::GetLightyearDistance() {
    return LightyearDistance;
}
double Exoplanet::GetMass() {
    return Mass;
}
double Exoplanet::GetStellarMagnitude() {
    return StellarMagnitude;
}
int Exoplanet::GetDiscoveryDate() {
    return DiscoveryDate;
}
void Exoplanet::SetName(string newName) {
    Name = newName;
}
void Exoplanet::SetLightyearDistance(double newLightyearDistance) {
    LightyearDistance = newLightyearDistance;
}
void Exoplanet::SetMass(double newMass) {
    Mass = newMass;
}
void Exoplanet::SetStellarMagnitude(double newStellarMagnitude) {
    StellarMagnitude = newStellarMagnitude;
}
void Exoplanet::SetDiscoveryDate(int newDiscoveryDate) {
    DiscoveryDate = newDiscoveryDate;
}
void Exoplanet::DisplayInfo() {
    cout << "   ------ Exoplanet Info ------  \n";
    cout << "  Name: " << Name << "\n";
    cout << "  Lightyear Distance: " << LightyearDistance << "\n";
    cout << "  Mass: " << Mass << "\n";
    cout << "  Stellar Magnitude: " << StellarMagnitude << "\n";
    cout << "  Discovery Date: " << DiscoveryDate << "\n";
}

int main() {
    Exoplanet testExoplanets[5];
    testExoplanets[0] = Exoplanet("Gaia23braL b", 4330, 1.63, 19.8628, 2026);
    testExoplanets[1] = Exoplanet("NGTS-39 b", 278.402, 1.467, 11.568, 2026);
    testExoplanets[2] = Exoplanet("Gliese 48 b", 8.23366, 8.11, 9.98, 2026);
    testExoplanets[3] = Exoplanet("WASP-84 b", 100.588, 0.692, 10.825, 2014);
    testExoplanets[4] = Exoplanet("Kepler-68 b", 144.166, 8.03, 10.077, 2013);

    cout << "Displaying all exoplanets:\n";
    for (Exoplanet currentExoplanet : testExoplanets)
        currentExoplanet.DisplayInfo();
}

//Output:
/*
    Displaying all exoplanets:
       ------ Exoplanet Info ------
      Name: Gaia23braL b
      Lightyear Distance: 4330
      Mass: 1.63
      Stellar Magnitude: 19.8628
      Discovery Date: 2026
       ------ Exoplanet Info ------
      Name: NGTS-39 b
      Lightyear Distance: 278.402
      Mass: 1.467
      Stellar Magnitude: 11.568
      Discovery Date: 2026
       ------ Exoplanet Info ------
      Name: Gliese 48 b
      Lightyear Distance: 8.23366
      Mass: 8.11
      Stellar Magnitude: 9.98
      Discovery Date: 2026
       ------ Exoplanet Info ------
      Name: WASP-84 b
      Lightyear Distance: 100.588
      Mass: 0.692
      Stellar Magnitude: 10.825
      Discovery Date: 2014
       ------ Exoplanet Info ------
      Name: Kepler-68 b
      Lightyear Distance: 144.166
      Mass: 8.03
      Stellar Magnitude: 10.077
      Discovery Date: 2013
*/
