#pragma once
#include "COMP_Calcul.h"
#include "COMP_Imprimante.h"

namespace NS_SVC
{
	class SVC_Facture
	{
	private:
		NS_COMP::COMP_Calcul* Ocalcul;
		NS_COMP::COMP_Imprimante* oImprimante;
	public:
		SVC_Facture(void);
		void calculer_et_editer_facture(double, double, double, int);
	};
}