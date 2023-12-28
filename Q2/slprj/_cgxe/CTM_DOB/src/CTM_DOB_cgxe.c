/* Include files */

#include "CTM_DOB_cgxe.h"
#include "m_ljWcLKZJdBnUNWpbZAW08C.h"
#include "m_IlPB5SoTcCUNslhEcrCMd.h"
#include "m_RhsxZKaAOgS6q4YHmPCzVH.h"
#include "m_dZsieINmXzqG95KkvckpyD.h"

unsigned int cgxe_CTM_DOB_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 256256538 &&
      ssGetChecksum1(S) == 3038539482 &&
      ssGetChecksum2(S) == 1329603519 &&
      ssGetChecksum3(S) == 2937286228) {
    method_dispatcher_ljWcLKZJdBnUNWpbZAW08C(S, method, data);
    return 1;
  }

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

  if (ssGetChecksum0(S) == 1412037217 &&
      ssGetChecksum1(S) == 817680868 &&
      ssGetChecksum2(S) == 1625893824 &&
      ssGetChecksum3(S) == 4119800284) {
    method_dispatcher_dZsieINmXzqG95KkvckpyD(S, method, data);
    return 1;
  }

  return 0;
}
