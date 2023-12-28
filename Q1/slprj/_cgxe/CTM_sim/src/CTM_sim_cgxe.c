/* Include files */

#include "CTM_sim_cgxe.h"
#include "m_FAU8KyrDQYUp9atreb3T4G.h"
#include "m_AKShaqSWlWB5lVeRjU05XB.h"
#include "m_xSE9GNLJOSGMLwcrwI4qWD.h"

unsigned int cgxe_CTM_sim_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 549433286 &&
      ssGetChecksum1(S) == 2264148292 &&
      ssGetChecksum2(S) == 1394649542 &&
      ssGetChecksum3(S) == 1512202448) {
    method_dispatcher_FAU8KyrDQYUp9atreb3T4G(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1893313736 &&
      ssGetChecksum1(S) == 2398404728 &&
      ssGetChecksum2(S) == 1459756684 &&
      ssGetChecksum3(S) == 1957484927) {
    method_dispatcher_AKShaqSWlWB5lVeRjU05XB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3355122802 &&
      ssGetChecksum1(S) == 549235063 &&
      ssGetChecksum2(S) == 874419924 &&
      ssGetChecksum3(S) == 2781015444) {
    method_dispatcher_xSE9GNLJOSGMLwcrwI4qWD(S, method, data);
    return 1;
  }

  return 0;
}
