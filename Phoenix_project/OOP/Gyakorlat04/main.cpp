#include "minta.h"

int main() {
	//személy,úszás,bringa,futás,depo_ido,idojovairas
	//ora perc konst
	tri_race alap;
	tri_race A_tri("A", 1200, 4200, 2300, 123, 60);
	tri_race B_tri("B", 1300, 4300, 2400, 125, 0);
	tri_race C_tri("C",1400,4400,2400,130,90);

	alap.kiir_rajt().setSum(alap.getIj()).kiir_cel();
	A_tri.kiir_rajt().setSum(A_tri.getIj()).kiir_cel();
	B_tri.kiir_rajt().setSum(B_tri.getIj()).kiir_cel();
	C_tri.kiir_rajt().setSum(C_tri.getIj()).kiir_cel();
	std::cout<<"/n" << std::endl;

	return 0;
}
// h=sum/ora; p=(sum%ora)/perc; mp=(sum%ora)%perc