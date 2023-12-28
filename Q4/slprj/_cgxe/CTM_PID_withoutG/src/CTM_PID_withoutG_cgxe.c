/* Include files */

#include "CTM_PID_withoutG_cgxe.h"
#include "m_IlPB5SoTcCUNslhEcrCMd.h"
#include "m_RhsxZKaAOgS6q4YHmPCzVH.h"

unsigned int cgxe_CTM_PID_withoutG_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 518393889 &&
      ssGetChecksum1(S) == 2314571877 &&
      ssGetChecksum2(S) == 2535912431 &&
      ssGetChecksum3(S) == 2366313487) {
    method_dispatcher_IlPB5SoTcCUNslhEcrCMd(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1307703434 &&
      ssGetChecksum1(S) == 3750712259 &&
      ssGetChecksum2(S) == 2792147980 &&
      ssGetChecksum3(S) == 2700219898) {
    method_dispatcher_RhsxZKaAOgS6q4YHmPCzVH(S, method, data);
    return 1;
  }

  return 0;
}
