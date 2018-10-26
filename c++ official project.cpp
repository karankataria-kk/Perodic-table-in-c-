#include"iostream"
#include"windows.h"
#include"cstring"
#include"stdio.h"
#include"string.h"
#include"dos.h"
//#include"fstream"
using namespace std;
int selec;
int atomic_num;
double atomic_radii;
char symbol[10];
class selection{//base class
	public:
		int selection_process(int select);
		int accept_it();
		int select_it()
		{
			//cout<<"class selection\n";
			cout<<"come n get some exciting information about periodic table with us\n";
			cout<<"choose accordingly you wanna get information about:\n";
			cout<<"1.USE Atomic Number\n";
			cout<<"2.USE Symbol\n";
			cout<<"Enter your selection : ";
			cin>>selec;
			system("color E");
			selection_process(selec);
		}
};
int selection::selection_process(int selec)
		{
			if(selec==1)
			{
				cout<<"Enter the ATOMIC NUMBER of the element:";
				cin>>atomic_num;
				try{
					throw atomic_num;
				}
				catch(double atomic_radii){
					selec=2;
				}
				catch(int atomic_num){
					selec=1;
				}
			}																					//exception handling
			if(selec==2)
			{
				cout<<"Enter the SYMBOL of the element:";
				cin.ignore();
				cin>>symbol;
			}
		}
class data_item:public selection{
	public:
		int data()
		{
			
		//cout<<"//class data item\n";
    	string elename[118]={"H - Hydrogen","He - Helium","Li - Lithium ","Be - Beryllium","B - Boron ","C - Carbon ","N - Nitrogen ","O - Oxygen","F - Fluorine","Ne - Neon",
 			"Na - Sodium" ,"Mg - Magnesium ","Al - Aluminum" ,"Si - Silicon ","P - Phosphorus ","S - Sulfur","Cl - Chlorine","Ar - Argon"
 			,"K - Potassium ","Ca - Calcium ","Sc - Scandium ","Ti - Titanium" ,"V - Vanadium ","Cr - Chromium","Mn - Manganese ","Fe - Iron",
 			"Co - Cobalt" ,"Ni - Nickel","Cu - Copper ","Zn - Zinc","Ga - Gallium ","Ge - Germanium","As - Arsenic ","Se - Selenium","Br - Bromine ","Kr - Krypton"
			 ,"Rb - Rubidium","Sr - Strontium ","Y - Yttrium ","Zr - Zirconium ","Nb - Niobium ","Mo - Molybdenum ","Tc - Technetium ",
			 "Ru - Ruthenium ","Rh - Rhodium ","Pd - Palladium ","Ag - Silver ","Cd - Cadmium ","In - Indium ","Sn - Tin ","Sb - Antimony"
			 ,"Te - Tellurium ","I - Iodine ","Xe - Xenon ","Cs - Cesium ","Ba - Barium ","La - Lanthanum","Ce - Cerium ","Pr - Praseodymium" 
			 ,"Nd - Neodymium ","Pm - Promethium ","Sm - Samarium ","Eu - Europium ","Gd - Gadolinium ","Tb - Terbium ","Dy - Dysprosium ","Ho - Holmium"
			 ,"Er - Erbium" ,"Tm - Thulium ","Yb - Ytterbium ","Lu - Lutetium ","Hf - Hafnium ","Ta - Tantalum ","W - Tungsten ","Re - Rhenium"
			 ,"Os - Osmium ","Ir - Iridium ","Pt - Platinum ","Au - Gold ","Hg - Mercury ","Tl - Thallium ","Pb - Lead ","Bi - Bismuth ","Po - Polonium"
			 ,"At - Astatine" ,"Rn - Radon ","Fr - Francium ","Ra - Radium ","Ac - Actinium","Th - Thorium ",
			 "Pa - Protactinium ","U - Uranium ","Np - Neptunium ","Pu - Plutonium ","Am - Americium ","Cm - Curium ","Bk - Berkelium"
 			,"Cf - Californium ","Es - Einsteinium","Fm - Fermium ","Md - Mendelevium ","No - Nobelium ","Lr - Lawrencium","Rf - Rutherfordium"
 			,"Db - Dubnium ","Sg - Seaborgium ","Bh - Bohrium ","Hs - Hassium ","Mt - Meitnerium","Ds - Darmstadtium","Rg - Roentgenium",
 			"Cn - Copernicium ","Nh - Nihonium ","Fl - Flerovium ","Mc - Moscovium ","Lv - Livermorium ","Ts - Tennessine","Og - Oganesson"};
		
		char elesymbol[118][5]={"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti",
			"V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd",
			"Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb",
			"Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am",
			"Cm","Bk","Cf","Es","Fm","Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"};
			if(selec==1)
			{
				int n=atomic_num-1;
				cout<<"\t\t\t\tGiven Atomic Number is "<<atomic_num<<endl;
				cout<<"\t\t\t\tElement with atomic number "<<atomic_num<<" is "<<elename[n]<<endl;
			}
			if(selec==2)
			{
				int q;	
				cout<<"\t\t\t\tGiven SYMBOL is "<<symbol<<endl;
				cout<<"\t\t\t\tElement with SYMBOL "<<symbol<<" is ";//<<elename[n]<<endl;
				for(q=0;q<118;q++)
				{
					if((strcmp(symbol,elesymbol[q]))==0)
					{
						atomic_num=q;
						break;
					}
				}
				cout<<elename[atomic_num]<<endl;
				cout<<"\t\t\t\tIt's atomic number is : "<<atomic_num<<endl;

			}
		}
};
class block:public data_item{
	public:

		int blocklist()
		{
		//cout<<"class block\n";
			cout<<"\t\t\t\tIt lies in:";
			if(atomic_num==1||atomic_num==2||atomic_num==3||atomic_num==4||atomic_num==11||atomic_num==12||atomic_num==19||atomic_num==20||atomic_num==37||atomic_num==38||atomic_num==55||atomic_num==56||atomic_num==87||atomic_num==88)
			{
				cout<<"S-block"<<endl;
			}
			if(atomic_num>=21&&atomic_num<=30)
			{
				cout<<"D-block"<<endl;
			}
			if(atomic_num>=39&&atomic_num<=48)
			{
				cout<<"D-block"<<endl;
			}
			if(atomic_num>=57&&atomic_num<=80)
			{
				cout<<"D-block"<<endl;
			}
			if(atomic_num>=89&&atomic_num<=112)
			{
				cout<<"D-block"<<endl;
			}
			if(atomic_num>=5&&atomic_num<=10)
			{
				cout<<"P-block"<<endl;
			}
			if(atomic_num>=13&&atomic_num<=18)
			{
				cout<<"P-block"<<endl;
			}
			if(atomic_num>=31&&atomic_num<=36)
			{
				cout<<"P-block"<<endl;
			}
			if(atomic_num>=49&&atomic_num<=54)
			{
				cout<<"P-block"<<endl;
			}
			if(atomic_num>=81&&atomic_num<=86)
			{
				cout<<"P-block"<<endl;
			}
			if(atomic_num>=113&&atomic_num<=118)
			{
				cout<<"P-block"<<endl;
			}
			if(atomic_num>=58&&atomic_num<=71)
			{
				cout<<"F-block"<<endl;
			}
			if(atomic_num>=90&&atomic_num<=103)
			{
				cout<<"F-block"<<endl;
			}
		}
};
class shell:public data_item{
	public:

		int shelloccupied()
		{
		//			cout<<"class shell\n";
			cout<<"\t\t\t\tits last electron will go to :";
			if(atomic_num==1||atomic_num==2||atomic_num==3||atomic_num==4||atomic_num==11||atomic_num==12||atomic_num==19
			||atomic_num==20||atomic_num==37||atomic_num==38||atomic_num==55||atomic_num==56||atomic_num==87||atomic_num==88)
			{
				cout<<"S-shell"<<endl;
			}
			if(atomic_num>=21&&atomic_num<=30)
			{
				cout<<"D-shell"<<endl;
			}
			if(atomic_num>=39&&atomic_num<=48)
			{
				cout<<"D-shell"<<endl;
			}
			if(atomic_num>=57&&atomic_num<=80)
			{
				cout<<"D-shell"<<endl;
			}
			if(atomic_num>=89&&atomic_num<=112)
			{
				cout<<"D-shell"<<endl;
			}
			if(atomic_num>=5&&atomic_num<=10)
			{
				cout<<"P-shell"<<endl;
			}
			if(atomic_num>=13&&atomic_num<=18)
			{
				cout<<"P-shell"<<endl;
			}
			if(atomic_num>=31&&atomic_num<=36)
			{
				cout<<"P-shell"<<endl;
			}
			if(atomic_num>=49&&atomic_num<=54)
			{
				cout<<"P-shell"<<endl;
			}
			if(atomic_num>=81&&atomic_num<=86)
			{
				cout<<"P-shell"<<endl;
			}
			if(atomic_num>=113&&atomic_num<=118)
			{
				cout<<"P-shell"<<endl;
			}
			if(atomic_num>=58&&atomic_num<=71)
			{
				cout<<"F-shell"<<endl;
			}
			if(atomic_num>=90&&atomic_num<=103)
			{
				cout<<"F-shell"<<endl;
			}
		}
};
class valency:public data_item,shell{
	public:
		int a=atomic_num;
		int i=1;
		valency()
		{
			cout<<"\t\t\t\tValency for the given atomic number element is:";
			while(a>8)
			{
				if(i==1)
				{
					a=a-2;
					i++;
				}
				if(i>=2)
				{
					a=a-8;
					i++;
				}
			}
			if(a<=8&&i==0)
			{
				cout<<a<<endl;
			}
			cout<<a<<endl;
		}
};
class print:public data_item{
	public:
		int print_it()
		{
			cout<<"\t\t  *****************************************PERIODIC TABLE PRESENTATION BY k N k";
			cout<<"*****************************************\n";
		//	ofstream fout;
		//	fout.open(load.txt,ios::out);
		char elesymbol[118][5]={"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti",
			"V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd",
			"Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb",
			"Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am",
			"Cm","Bk","Cf","Es","Fm","Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"};
		int w=0;
		cout<<"\t\t\t"<<elesymbol[w]<<"           ";
		w++;
		for(int i=0;i<15;i++)
		{
			cout<<"      ";
		}
		cout<<"  "<<elesymbol[w]<<"     ";
		w++;
		cout<<endl;
		cout<<endl;												//line 1
		Sleep( 100 );
		cout<<"\t\t\t"<<elesymbol[w]<<"   ";
		w++;
		cout<<elesymbol[w]<<"   ";
		w++;
		cout<<"      ";
		for(int i=0;i<9;i++)
		{
			cout<<"      ";
		}
		for(int i=0;i<2;i++)
		{
			cout<<elesymbol[w]<<"      ";
			w++;
		}
		cout<<elesymbol[w]<<"     ";
		w++;
		for(int i=0;i<3;i++)
		{
			cout<<elesymbol[w]<<"      ";
			w++;
		}
		cout<<endl;																	//line 2
		cout<<endl;
		Sleep( 100 );
		cout<<"\t\t\t"<<elesymbol[w]<<"   ";
		w++;
		cout<<elesymbol[w]<<"   ";
		w++;
		cout<<"     ";
		for(int i=0;i<9;i++)
		{
			cout<<"      ";
		}
		cout<<elesymbol[w]<<"     ";
		w++;
		cout<<elesymbol[w]<<"      ";
		w++;
		cout<<elesymbol[w]<<"     ";
		w++;
		for(int i=0;i<2;i++)
		{
			cout<<elesymbol[w]<<"     ";
			w++;
		}
		cout<<" "<<elesymbol[w]<<"       ";
		w++;
		cout<<endl;
		cout<<endl;
		cout<<"\t\t\t";																		//line 3
		for(int i=0;i<11;i++)
		{
			cout<<elesymbol[w]<<"    ";				
			w++;
		}
		cout<<elesymbol[w]<<"   ";				
		w++;
		for(int i=0;i<2;i++)
		{
			cout<<elesymbol[w]<<"     ";				
			w++;
		}
		for(int i=0;i<2;i++)
		{
			cout<<elesymbol[w]<<"    ";				
			w++;
		}
		cout<<" ";
		for(int i=0;i<2;i++)
		{
			cout<<elesymbol[w]<<"      ";				
			w++;
		}
		cout<<endl;
		cout<<endl;																				//line 4
		Sleep( 100 );
		cout<<"\t\t\t"<<elesymbol[w]<<"   ";
		w++;
		cout<<elesymbol[w]<<"     ";				
		w++;
		cout<<elesymbol[w]<<"    ";				
		w++;
		cout<<elesymbol[w]<<"   ";				
		w++;
		for(int i=0;i<6;i++)
		{
			cout<<elesymbol[w]<<"    ";				
			w++;
		}
		cout<<elesymbol[w]<<"    ";				
		w++;
		cout<<elesymbol[w]<<"   ";				
		w++;
		cout<<elesymbol[w]<<"     ";				
		w++;
		cout<<elesymbol[w]<<"     ";				
		w++;
		cout<<elesymbol[w]<<"    ";				
		w++;
		cout<<elesymbol[w]<<"      ";				
		w++;
		cout<<elesymbol[w]<<"      ";				
		w++;
		cout<<elesymbol[w]<<"    ";				
		w++;
		cout<<endl;
		cout<<endl;																			//line 5
		Sleep( 100 );
		cout<<"\t\t\t"<<elesymbol[w]<<"   ";				
		w++;	
		cout<<elesymbol[w]<<"    ";
		w++;
		int ln=w;
		w=w+15;
		cout<<"Ln's  ";
		cout<<elesymbol[w]<<"   ";				
		w++;
		cout<<elesymbol[w]<<"     ";				
		w++;
		for(int i=0;i<4;i++)
		{
			cout<<elesymbol[w]<<"    ";
			w++;	
		}
		cout<<elesymbol[w]<<"    ";				
		w++;
		cout<<elesymbol[w]<<"    ";				
		w++;
		cout<<elesymbol[w]<<"   ";
		w++;
		cout<<elesymbol[w]<<"     ";
		w++;		
		cout<<elesymbol[w]<<"     ";
		w++;	
		cout<<elesymbol[w]<<"    ";
		w++;	
		cout<<elesymbol[w]<<"     ";
		w++;	
		cout<<elesymbol[w]<<"      ";
		w++;	
		cout<<elesymbol[w]<<"    ";
		w++;
		cout<<endl;														//line 6
		cout<<endl;
		Sleep( 100 );
		cout<<"\t\t\t"<<elesymbol[w]<<"   ";				
		w++;	
		cout<<elesymbol[w]<<"    ";
		w++;
		int Ac=w;
		w=w+15;
		cout<<"Ac's  ";
		cout<<elesymbol[w]<<"   ";				
		w++;
		cout<<elesymbol[w]<<"    ";				
		w++;
		for(int i=0;i<4;i++)
		{
		cout<<elesymbol[w]<<"    ";
		w++;	
		}
		cout<<elesymbol[w]<<"    ";				
		w++;
		cout<<elesymbol[w]<<"    ";				
		w++;
		cout<<elesymbol[w]<<"   ";
		w++;
		cout<<elesymbol[w]<<"     ";
		w++;		
		cout<<elesymbol[w]<<"     ";
		w++;	
		cout<<elesymbol[w]<<"    ";
		w++;	
		cout<<elesymbol[w]<<"     ";
		w++;
		cout<<elesymbol[w]<<"      ";
		w++;	
		cout<<elesymbol[w]<<"    ";
		w++;	
		cout<<endl;
		cout<<endl<<endl;																	//line 7
		cout<<"\t\t\t"<<"       Ln's : ";
		for(int i=0;i<15;i++)
		{
		cout<<elesymbol[ln]<<"   ";
		ln++;
		}
		cout<<endl;
		cout<<endl;														//Ln's
		cout<<"\t\t\t"<<"       Ac's : ";
		for(int i=0;i<15;i++)
		{
			cout<<elesymbol[Ac]<<"   ";
			Ac++;
		}
		cout<<endl<<endl<<endl;													//Ac's
	}
}p;
int main()
{
	print p;
	selection S;
	data_item D;
	block B;
	shell Sh;
	p.print_it();
	S.select_it();
	cout<<"\n\n\nLOADING\n\n\n";
        for(int i=0;i<=5;i++)
        {
            Sleep( 500 );
            cout<<".";
        }
    cout<<endl;
	D.data();
	B.blocklist();
	valency V;
	Sh.shelloccupied();	
	cout<<endl;
	return 0;
}
