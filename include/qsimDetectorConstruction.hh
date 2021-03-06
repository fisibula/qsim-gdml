#ifndef qsimDetectorConstruction_h
#define qsimDetectorConstruction_h 1

#include "globals.hh"
#include "G4VUserDetectorConstruction.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4GDMLParser;

class qsimDetectorConstruction : public G4VUserDetectorConstruction
{
  public:
    qsimDetectorConstruction(const G4GDMLParser& parser);
   ~qsimDetectorConstruction();
		//void StandModeSet();
		void DetModeSet(G4int );
		void QModeSet(G4int );
		void StandModeSet(G4int );
   public:
    G4VPhysicalVolume* Construct();

  private:
    const G4GDMLParser& fParser;
    G4double quartz_x;
    G4double quartz2_x;
    G4double quartz_y;
    G4double quartz2_y;
    G4double quartz_z;
    G4double quartz2_z;
    G4double Wthickness;
	//G4int fStandMode;
        G4int fDetMode;
	G4int fQMode;
	G4int fStandMode;

	G4double quartz_zPos;

    G4double cone_rmin1;
    G4double cone_rmax1;
    G4double cone_rmin2;
    G4double cone_rmax2;
    G4double cone_z;
    G4double cone_sphi;
    G4double cone_fphi;
	
	G4double rin;
	G4double rout;
	G4double lngth;

  public:
	G4double fDetAngle, fQuartzPolish;
	// POSSCAN
	G4double fDetPosX, fDetPosY;


};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif /*qsimDetectorConstruction_h*/
