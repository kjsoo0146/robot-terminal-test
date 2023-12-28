/* Include files */

#include "CTM_PID_cgxe.h"
#include "m_MnKdJgZp74ITTEqyTKSrZC.h"
#include "m_Xelnm0NEQ4Xq9i71qtajuH.h"
#include "m_bQQLy372kibtj88GpDytJB.h"

unsigned int cgxe_CTM_PID_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 1779690552 &&
      ssGetChecksum1(S) == 367095930 &&
      ssGetChecksum2(S) == 836660446 &&
      ssGetChecksum3(S) == 3522202652) {
    method_dispatcher_MnKdJgZp74ITTEqyTKSrZC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3208025997 &&
      ssGetChecksum1(S) == 592868981 &&
      ssGetChecksum2(S) == 55715748 &&
      ssGetChecksum3(S) == 2857977235) {
    method_dispatcher_Xelnm0NEQ4Xq9i71qtajuH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 4190594727 &&
      ssGetChecksum1(S) == 2768089511 &&
      ssGetChecksum2(S) == 3866437274 &&
      ssGetChecksum3(S) == 1043003913) {
    method_dispatcher_bQQLy372kibtj88GpDytJB(S, method, data);
    return 1;
  }

  return 0;
}
