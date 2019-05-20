#ifndef MTZ_FormA_HEADER
#define MTZ_FormA_HEADER


#include "global_variables.h"
#include "global_functions.h"
#include "SEP.h"


using namespace std;

/*****************************************************************/
int position_x(data *TSP_instance,int j,int k);
/*****************************************************************/

/*****************************************************************/
int position_u(data *TSP_instance,int j);
/*****************************************************************/

/*****************************************************************/
void MTZ_load_cplex(data *TSP_instance);
/*****************************************************************/

/*****************************************************************/
int	 MTZ_solve_cplex(data *TSP_instance);
/*****************************************************************/

/*****************************************************************/
void MTZ_free_cplex(data *TSP_instance);
/*****************************************************************/

/*****************************************************************/
void MTZ_solve_LP(data *TSP_instance);
/*****************************************************************/


#endif
