#ifndef __4qGqzNfuCILJPKulquYI8B_h__
#define __4qGqzNfuCILJPKulquYI8B_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef struct_tag_yXNlxAMtkozv4BiPFKvBVC
#define struct_tag_yXNlxAMtkozv4BiPFKvBVC

struct tag_yXNlxAMtkozv4BiPFKvBVC
{
  boolean_T f1;
};

#endif                                 /* struct_tag_yXNlxAMtkozv4BiPFKvBVC */

#ifndef typedef_s_yXNlxAMtkozv4BiPFKvBVC
#define typedef_s_yXNlxAMtkozv4BiPFKvBVC

typedef struct tag_yXNlxAMtkozv4BiPFKvBVC s_yXNlxAMtkozv4BiPFKvBVC;

#endif                                 /* typedef_s_yXNlxAMtkozv4BiPFKvBVC */

#ifndef struct_tag_IQ1YOeTj6FAOoyzcDr5CJD
#define struct_tag_IQ1YOeTj6FAOoyzcDr5CJD

struct tag_IQ1YOeTj6FAOoyzcDr5CJD
{
  int32_T f1;
  int32_T f2;
  int32_T f3;
};

#endif                                 /* struct_tag_IQ1YOeTj6FAOoyzcDr5CJD */

#ifndef typedef_s_IQ1YOeTj6FAOoyzcDr5CJD
#define typedef_s_IQ1YOeTj6FAOoyzcDr5CJD

typedef struct tag_IQ1YOeTj6FAOoyzcDr5CJD s_IQ1YOeTj6FAOoyzcDr5CJD;

#endif                                 /* typedef_s_IQ1YOeTj6FAOoyzcDr5CJD */

#ifndef struct_tag_0K68mFBjQDo1WRxKPpRFgD
#define struct_tag_0K68mFBjQDo1WRxKPpRFgD

struct tag_0K68mFBjQDo1WRxKPpRFgD
{
  int32_T f1;
  int32_T f2;
};

#endif                                 /* struct_tag_0K68mFBjQDo1WRxKPpRFgD */

#ifndef typedef_s_0K68mFBjQDo1WRxKPpRFgD
#define typedef_s_0K68mFBjQDo1WRxKPpRFgD

typedef struct tag_0K68mFBjQDo1WRxKPpRFgD s_0K68mFBjQDo1WRxKPpRFgD;

#endif                                 /* typedef_s_0K68mFBjQDo1WRxKPpRFgD */

#ifndef struct_tag_IXZbk4aPjQFR6fO0q1hmvH
#define struct_tag_IXZbk4aPjQFR6fO0q1hmvH

struct tag_IXZbk4aPjQFR6fO0q1hmvH
{
  int32_T __dummy;
};

#endif                                 /* struct_tag_IXZbk4aPjQFR6fO0q1hmvH */

#ifndef typedef_rtString_3
#define typedef_rtString_3

typedef struct tag_IXZbk4aPjQFR6fO0q1hmvH rtString_3;

#endif                                 /* typedef_rtString_3 */

#ifndef struct_tag_9D0ejTgiaZDB2bwsGwHqBF
#define struct_tag_9D0ejTgiaZDB2bwsGwHqBF

struct tag_9D0ejTgiaZDB2bwsGwHqBF
{
  void* CollisionPrimitive;
};

#endif                                 /* struct_tag_9D0ejTgiaZDB2bwsGwHqBF */

#ifndef typedef_robotics_manip_internal_CollisionGeometry
#define typedef_robotics_manip_internal_CollisionGeometry

typedef struct tag_9D0ejTgiaZDB2bwsGwHqBF
  robotics_manip_internal_CollisionGeometry;

#endif                                 /* typedef_robotics_manip_internal_CollisionGeometry */

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_char_T */

#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T

typedef struct emxArray_char_T emxArray_char_T;

#endif                                 /* typedef_emxArray_char_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_real_T */

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /* typedef_emxArray_real_T */

#ifndef struct_emxArray_tag_9D0ejTgiaZDB2bwsGw
#define struct_emxArray_tag_9D0ejTgiaZDB2bwsGw

struct emxArray_tag_9D0ejTgiaZDB2bwsGw
{
  robotics_manip_internal_CollisionGeometry *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_tag_9D0ejTgiaZDB2bwsGw */

#ifndef typedef_emxArray_robotics_manip_interna
#define typedef_emxArray_robotics_manip_interna

typedef struct emxArray_tag_9D0ejTgiaZDB2bwsGw emxArray_robotics_manip_interna;

#endif                                 /* typedef_emxArray_robotics_manip_interna */

#ifndef struct_tag_HWD60tsp5C7nQvoaHaK87D
#define struct_tag_HWD60tsp5C7nQvoaHaK87D

struct tag_HWD60tsp5C7nQvoaHaK87D
{
  boolean_T matlabCodegenIsDeleted;
  emxArray_robotics_manip_interna *CollisionGeometries;
  real_T MaxElements;
  real_T Size;
};

#endif                                 /* struct_tag_HWD60tsp5C7nQvoaHaK87D */

#ifndef typedef_robotics_manip_internal_CollisionSet
#define typedef_robotics_manip_internal_CollisionSet

typedef struct tag_HWD60tsp5C7nQvoaHaK87D robotics_manip_internal_CollisionSet;

#endif                                 /* typedef_robotics_manip_internal_CollisionSet */

#ifndef struct_tag_DuJTIxHyPH0sh2f3wcGFk
#define struct_tag_DuJTIxHyPH0sh2f3wcGFk

struct tag_DuJTIxHyPH0sh2f3wcGFk
{
  s_yXNlxAMtkozv4BiPFKvBVC _data;
};

#endif                                 /* struct_tag_DuJTIxHyPH0sh2f3wcGFk */

#ifndef typedef_s_DuJTIxHyPH0sh2f3wcGFk
#define typedef_s_DuJTIxHyPH0sh2f3wcGFk

typedef struct tag_DuJTIxHyPH0sh2f3wcGFk s_DuJTIxHyPH0sh2f3wcGFk;

#endif                                 /* typedef_s_DuJTIxHyPH0sh2f3wcGFk */

#ifndef struct_tag_Dt6t2l6MSLYBenrysWZNFC
#define struct_tag_Dt6t2l6MSLYBenrysWZNFC

struct tag_Dt6t2l6MSLYBenrysWZNFC
{
  s_IQ1YOeTj6FAOoyzcDr5CJD _data;
};

#endif                                 /* struct_tag_Dt6t2l6MSLYBenrysWZNFC */

#ifndef typedef_s_Dt6t2l6MSLYBenrysWZNFC
#define typedef_s_Dt6t2l6MSLYBenrysWZNFC

typedef struct tag_Dt6t2l6MSLYBenrysWZNFC s_Dt6t2l6MSLYBenrysWZNFC;

#endif                                 /* typedef_s_Dt6t2l6MSLYBenrysWZNFC */

#ifndef struct_tag_oX0sYxNpnDCpgSFxF8QHFD
#define struct_tag_oX0sYxNpnDCpgSFxF8QHFD

struct tag_oX0sYxNpnDCpgSFxF8QHFD
{
  s_0K68mFBjQDo1WRxKPpRFgD _data;
};

#endif                                 /* struct_tag_oX0sYxNpnDCpgSFxF8QHFD */

#ifndef typedef_s_oX0sYxNpnDCpgSFxF8QHFD
#define typedef_s_oX0sYxNpnDCpgSFxF8QHFD

typedef struct tag_oX0sYxNpnDCpgSFxF8QHFD s_oX0sYxNpnDCpgSFxF8QHFD;

#endif                                 /* typedef_s_oX0sYxNpnDCpgSFxF8QHFD */

#ifndef struct_tag_Cqnxnc08da43HsiMCKoHlE
#define struct_tag_Cqnxnc08da43HsiMCKoHlE

struct tag_Cqnxnc08da43HsiMCKoHlE
{
  emxArray_char_T *Type;
  emxArray_real_T *MotionSubspace;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  real_T JointAxisInternal[3];
};

#endif                                 /* struct_tag_Cqnxnc08da43HsiMCKoHlE */

#ifndef typedef_rigidBodyJoint
#define typedef_rigidBodyJoint

typedef struct tag_Cqnxnc08da43HsiMCKoHlE rigidBodyJoint;

#endif                                 /* typedef_rigidBodyJoint */

#ifndef struct_tag_RZB2o9RWoUTUwVsHmOuEo
#define struct_tag_RZB2o9RWoUTUwVsHmOuEo

struct tag_RZB2o9RWoUTUwVsHmOuEo
{
  boolean_T matlabCodegenIsDeleted;
  real_T Index;
  emxArray_char_T *NameInternal;
  rigidBodyJoint JointInternal;
  real_T ParentIndex;
  real_T SpatialInertia[36];
  robotics_manip_internal_CollisionSet CollisionsInternal;
};

#endif                                 /* struct_tag_RZB2o9RWoUTUwVsHmOuEo */

#ifndef typedef_robotics_manip_internal_RigidBody
#define typedef_robotics_manip_internal_RigidBody

typedef struct tag_RZB2o9RWoUTUwVsHmOuEo robotics_manip_internal_RigidBody;

#endif                                 /* typedef_robotics_manip_internal_RigidBody */

#ifndef struct_tag_ONR5HxWEJqt2gFQ5emn5xD
#define struct_tag_ONR5HxWEJqt2gFQ5emn5xD

struct tag_ONR5HxWEJqt2gFQ5emn5xD
{
  boolean_T matlabCodegenIsDeleted;
  real_T NumBodies;
  robotics_manip_internal_RigidBody Base;
  real_T Gravity[3];
  robotics_manip_internal_RigidBody *Bodies[8];
  real_T PositionDoFMap[16];
  real_T VelocityDoFMap[16];
  robotics_manip_internal_RigidBody _pobj0[16];
};

#endif                                 /* struct_tag_ONR5HxWEJqt2gFQ5emn5xD */

#ifndef typedef_robotics_manip_internal_RigidBodyTree
#define typedef_robotics_manip_internal_RigidBodyTree

typedef struct tag_ONR5HxWEJqt2gFQ5emn5xD robotics_manip_internal_RigidBodyTree;

#endif                                 /* typedef_robotics_manip_internal_RigidBodyTree */

#ifndef struct_tag_e26UVJJE0MKiExyxhOdSS
#define struct_tag_e26UVJJE0MKiExyxhOdSS

struct tag_e26UVJJE0MKiExyxhOdSS
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  robotics_manip_internal_RigidBodyTree TreeInternal;
};

#endif                                 /* struct_tag_e26UVJJE0MKiExyxhOdSS */

#ifndef typedef_robotics_slmanip_internal_block_GravityTorqueBlock
#define typedef_robotics_slmanip_internal_block_GravityTorqueBlock

typedef struct tag_e26UVJJE0MKiExyxhOdSS
  robotics_slmanip_internal_block_GravityTorqueBlock;

#endif                                 /* typedef_robotics_slmanip_internal_block_GravityTorqueBlock */

#ifndef struct_tag_sNn4ag7c45nI1bdx4I2q2xB
#define struct_tag_sNn4ag7c45nI1bdx4I2q2xB

struct tag_sNn4ag7c45nI1bdx4I2q2xB
{
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[18];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
};

#endif                                 /* struct_tag_sNn4ag7c45nI1bdx4I2q2xB */

#ifndef typedef_sNn4ag7c45nI1bdx4I2q2xB
#define typedef_sNn4ag7c45nI1bdx4I2q2xB

typedef struct tag_sNn4ag7c45nI1bdx4I2q2xB sNn4ag7c45nI1bdx4I2q2xB;

#endif                                 /* typedef_sNn4ag7c45nI1bdx4I2q2xB */

#ifndef struct_tag_xcgxZ5He9ABYYFkMb0gw9F
#define struct_tag_xcgxZ5He9ABYYFkMb0gw9F

struct tag_xcgxZ5He9ABYYFkMb0gw9F
{
  real_T f1[36];
};

#endif                                 /* struct_tag_xcgxZ5He9ABYYFkMb0gw9F */

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct tag_xcgxZ5He9ABYYFkMb0gw9F cell_wrap;

#endif                                 /* typedef_cell_wrap */

#ifndef struct_emxArray_tag_xcgxZ5He9ABYYFkMb0
#define struct_emxArray_tag_xcgxZ5He9ABYYFkMb0

struct emxArray_tag_xcgxZ5He9ABYYFkMb0
{
  cell_wrap *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_tag_xcgxZ5He9ABYYFkMb0 */

#ifndef typedef_emxArray_cell_wrap
#define typedef_emxArray_cell_wrap

typedef struct emxArray_tag_xcgxZ5He9ABYYFkMb0 emxArray_cell_wrap;

#endif                                 /* typedef_emxArray_cell_wrap */

#ifndef struct_tag_Mq55LRTpx3F49SLl4MgJ3G
#define struct_tag_Mq55LRTpx3F49SLl4MgJ3G

struct tag_Mq55LRTpx3F49SLl4MgJ3G
{
  real_T f1[2];
};

#endif                                 /* struct_tag_Mq55LRTpx3F49SLl4MgJ3G */

#ifndef typedef_b_cell_wrap
#define typedef_b_cell_wrap

typedef struct tag_Mq55LRTpx3F49SLl4MgJ3G b_cell_wrap;

#endif                                 /* typedef_b_cell_wrap */

#ifndef struct_tag_Hm6EPE5ncyWd4RGCxxctzF
#define struct_tag_Hm6EPE5ncyWd4RGCxxctzF

struct tag_Hm6EPE5ncyWd4RGCxxctzF
{
  char_T f1[30];
  char_T f2[29];
  char_T f3[30];
  char_T f4[30];
  char_T f5[39];
};

#endif                                 /* struct_tag_Hm6EPE5ncyWd4RGCxxctzF */

#ifndef typedef_cell
#define typedef_cell

typedef struct tag_Hm6EPE5ncyWd4RGCxxctzF cell;

#endif                                 /* typedef_cell */

#ifndef struct_tag_ge1UD3YqHcNerzgtJ4AjXF
#define struct_tag_ge1UD3YqHcNerzgtJ4AjXF

struct tag_ge1UD3YqHcNerzgtJ4AjXF
{
  char_T f1[6];
};

#endif                                 /* struct_tag_ge1UD3YqHcNerzgtJ4AjXF */

#ifndef typedef_c_cell_wrap
#define typedef_c_cell_wrap

typedef struct tag_ge1UD3YqHcNerzgtJ4AjXF c_cell_wrap;

#endif                                 /* typedef_c_cell_wrap */

#ifndef struct_tag_n5V6NPhGd1s3l2q7z9eOR
#define struct_tag_n5V6NPhGd1s3l2q7z9eOR

struct tag_n5V6NPhGd1s3l2q7z9eOR
{
  char_T f1[27];
  char_T f2[21];
  char_T f3[26];
};

#endif                                 /* struct_tag_n5V6NPhGd1s3l2q7z9eOR */

#ifndef typedef_b_cell
#define typedef_b_cell

typedef struct tag_n5V6NPhGd1s3l2q7z9eOR b_cell;

#endif                                 /* typedef_b_cell */

#ifndef struct_tag_VqK0uXiUXuliBvHmvcLR0F
#define struct_tag_VqK0uXiUXuliBvHmvcLR0F

struct tag_VqK0uXiUXuliBvHmvcLR0F
{
  char_T f1[28];
  char_T f2[22];
  char_T f3[35];
  char_T f4[26];
  char_T f5[36];
  char_T f6[39];
};

#endif                                 /* struct_tag_VqK0uXiUXuliBvHmvcLR0F */

#ifndef typedef_c_cell
#define typedef_c_cell

typedef struct tag_VqK0uXiUXuliBvHmvcLR0F c_cell;

#endif                                 /* typedef_c_cell */

#ifndef struct_tag_FDrX8kOEjZXLXru8nW4swE
#define struct_tag_FDrX8kOEjZXLXru8nW4swE

struct tag_FDrX8kOEjZXLXru8nW4swE
{
  char_T f1[6];
  char_T f2[6];
};

#endif                                 /* struct_tag_FDrX8kOEjZXLXru8nW4swE */

#ifndef typedef_s_FDrX8kOEjZXLXru8nW4swE
#define typedef_s_FDrX8kOEjZXLXru8nW4swE

typedef struct tag_FDrX8kOEjZXLXru8nW4swE s_FDrX8kOEjZXLXru8nW4swE;

#endif                                 /* typedef_s_FDrX8kOEjZXLXru8nW4swE */

#ifndef struct_tag_cf27YhgaPej9AKdSy0N78E
#define struct_tag_cf27YhgaPej9AKdSy0N78E

struct tag_cf27YhgaPej9AKdSy0N78E
{
  char_T f1[3];
  char_T f2[6];
  char_T f3[6];
};

#endif                                 /* struct_tag_cf27YhgaPej9AKdSy0N78E */

#ifndef typedef_d_cell
#define typedef_d_cell

typedef struct tag_cf27YhgaPej9AKdSy0N78E d_cell;

#endif                                 /* typedef_d_cell */

#ifndef struct_tag_hYQNMGF5jxYpBJJQpnmQ1
#define struct_tag_hYQNMGF5jxYpBJJQpnmQ1

struct tag_hYQNMGF5jxYpBJJQpnmQ1
{
  char_T f1[6];
  char_T f2[6];
  char_T f3[3];
};

#endif                                 /* struct_tag_hYQNMGF5jxYpBJJQpnmQ1 */

#ifndef typedef_e_cell
#define typedef_e_cell

typedef struct tag_hYQNMGF5jxYpBJJQpnmQ1 e_cell;

#endif                                 /* typedef_e_cell */

#ifndef struct_tag_uwJsGEKtvfiUxcdf0z0AYH
#define struct_tag_uwJsGEKtvfiUxcdf0z0AYH

struct tag_uwJsGEKtvfiUxcdf0z0AYH
{
  char_T f1[4];
};

#endif                                 /* struct_tag_uwJsGEKtvfiUxcdf0z0AYH */

#ifndef typedef_d_cell_wrap
#define typedef_d_cell_wrap

typedef struct tag_uwJsGEKtvfiUxcdf0z0AYH d_cell_wrap;

#endif                                 /* typedef_d_cell_wrap */

#ifndef struct_tag_GBcoDtdkRpt9uNeOkOvtsD
#define struct_tag_GBcoDtdkRpt9uNeOkOvtsD

struct tag_GBcoDtdkRpt9uNeOkOvtsD
{
  char_T f1[8];
  char_T f2[3];
};

#endif                                 /* struct_tag_GBcoDtdkRpt9uNeOkOvtsD */

#ifndef typedef_f_cell
#define typedef_f_cell

typedef struct tag_GBcoDtdkRpt9uNeOkOvtsD f_cell;

#endif                                 /* typedef_f_cell */

#ifndef struct_tag_7rClNlx2n452lpFDKKJsJH
#define struct_tag_7rClNlx2n452lpFDKKJsJH

struct tag_7rClNlx2n452lpFDKKJsJH
{
  char_T f1[4];
  char_T f2[6];
};

#endif                                 /* struct_tag_7rClNlx2n452lpFDKKJsJH */

#ifndef typedef_g_cell
#define typedef_g_cell

typedef struct tag_7rClNlx2n452lpFDKKJsJH g_cell;

#endif                                 /* typedef_g_cell */

#ifndef struct_tag_DQKlNg1eQEVoFgxVVkE2OH
#define struct_tag_DQKlNg1eQEVoFgxVVkE2OH

struct tag_DQKlNg1eQEVoFgxVVkE2OH
{
  char_T f1[8];
  char_T f2[9];
  char_T f3[5];
};

#endif                                 /* struct_tag_DQKlNg1eQEVoFgxVVkE2OH */

#ifndef typedef_h_cell
#define typedef_h_cell

typedef struct tag_DQKlNg1eQEVoFgxVVkE2OH h_cell;

#endif                                 /* typedef_h_cell */

#ifndef struct_tag_iausgUa9Tcm9fmfau0mSIH
#define struct_tag_iausgUa9Tcm9fmfau0mSIH

struct tag_iausgUa9Tcm9fmfau0mSIH
{
  char_T Value[6];
};

#endif                                 /* struct_tag_iausgUa9Tcm9fmfau0mSIH */

#ifndef typedef_s_iausgUa9Tcm9fmfau0mSIH
#define typedef_s_iausgUa9Tcm9fmfau0mSIH

typedef struct tag_iausgUa9Tcm9fmfau0mSIH s_iausgUa9Tcm9fmfau0mSIH;

#endif                                 /* typedef_s_iausgUa9Tcm9fmfau0mSIH */

#ifndef struct_tag_4ngIER38T5Bbo5YAPm8pdG
#define struct_tag_4ngIER38T5Bbo5YAPm8pdG

struct tag_4ngIER38T5Bbo5YAPm8pdG
{
  char_T Value[16];
};

#endif                                 /* struct_tag_4ngIER38T5Bbo5YAPm8pdG */

#ifndef typedef_s_4ngIER38T5Bbo5YAPm8pdG
#define typedef_s_4ngIER38T5Bbo5YAPm8pdG

typedef struct tag_4ngIER38T5Bbo5YAPm8pdG s_4ngIER38T5Bbo5YAPm8pdG;

#endif                                 /* typedef_s_4ngIER38T5Bbo5YAPm8pdG */

#ifndef struct_tag_bCBh7Pi2jvxDsMOAcKyLAE
#define struct_tag_bCBh7Pi2jvxDsMOAcKyLAE

struct tag_bCBh7Pi2jvxDsMOAcKyLAE
{
  char_T Value[20];
};

#endif                                 /* struct_tag_bCBh7Pi2jvxDsMOAcKyLAE */

#ifndef typedef_s_bCBh7Pi2jvxDsMOAcKyLAE
#define typedef_s_bCBh7Pi2jvxDsMOAcKyLAE

typedef struct tag_bCBh7Pi2jvxDsMOAcKyLAE s_bCBh7Pi2jvxDsMOAcKyLAE;

#endif                                 /* typedef_s_bCBh7Pi2jvxDsMOAcKyLAE */

#ifndef struct_tag_4lnt01oyo4YFEL1rRRafIE
#define struct_tag_4lnt01oyo4YFEL1rRRafIE

struct tag_4lnt01oyo4YFEL1rRRafIE
{
  char_T f1[8];
  char_T f2[6];
  char_T f3[6];
  char_T f4[6];
  char_T f5[4];
  char_T f6[5];
  real_T f7;
};

#endif                                 /* struct_tag_4lnt01oyo4YFEL1rRRafIE */

#ifndef typedef_i_cell
#define typedef_i_cell

typedef struct tag_4lnt01oyo4YFEL1rRRafIE i_cell;

#endif                                 /* typedef_i_cell */

#ifndef struct_tag_u9RUDmUMX6fTaoUoq3jMnE
#define struct_tag_u9RUDmUMX6fTaoUoq3jMnE

struct tag_u9RUDmUMX6fTaoUoq3jMnE
{
  char_T f1[8];
  char_T f2[4];
  char_T f3[2];
  char_T f4[5];
  real_T f5;
};

#endif                                 /* struct_tag_u9RUDmUMX6fTaoUoq3jMnE */

#ifndef typedef_j_cell
#define typedef_j_cell

typedef struct tag_u9RUDmUMX6fTaoUoq3jMnE j_cell;

#endif                                 /* typedef_j_cell */

#ifndef struct_tag_4Fr72VDSS1p2DUVUaSM65
#define struct_tag_4Fr72VDSS1p2DUVUaSM65

struct tag_4Fr72VDSS1p2DUVUaSM65
{
  char_T Value[4];
};

#endif                                 /* struct_tag_4Fr72VDSS1p2DUVUaSM65 */

#ifndef typedef_s_4Fr72VDSS1p2DUVUaSM65
#define typedef_s_4Fr72VDSS1p2DUVUaSM65

typedef struct tag_4Fr72VDSS1p2DUVUaSM65 s_4Fr72VDSS1p2DUVUaSM65;

#endif                                 /* typedef_s_4Fr72VDSS1p2DUVUaSM65 */

#ifndef struct_tag_s5dx9rF0ldvANooHKWqmmO
#define struct_tag_s5dx9rF0ldvANooHKWqmmO

struct tag_s5dx9rF0ldvANooHKWqmmO
{
  real_T NameLength;
  uint8_T Name[17];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[8];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
};

#endif                                 /* struct_tag_s5dx9rF0ldvANooHKWqmmO */

#ifndef typedef_s5dx9rF0ldvANooHKWqmmO
#define typedef_s5dx9rF0ldvANooHKWqmmO

typedef struct tag_s5dx9rF0ldvANooHKWqmmO s5dx9rF0ldvANooHKWqmmO;

#endif                                 /* typedef_s5dx9rF0ldvANooHKWqmmO */

#ifndef struct_tag_nHE6XPZMd5ZTyWI9A7THrH
#define struct_tag_nHE6XPZMd5ZTyWI9A7THrH

struct tag_nHE6XPZMd5ZTyWI9A7THrH
{
  s5dx9rF0ldvANooHKWqmmO f1;
  s5dx9rF0ldvANooHKWqmmO f2;
  s5dx9rF0ldvANooHKWqmmO f3;
  s5dx9rF0ldvANooHKWqmmO f4;
  s5dx9rF0ldvANooHKWqmmO f5;
  s5dx9rF0ldvANooHKWqmmO f6;
  s5dx9rF0ldvANooHKWqmmO f7;
  s5dx9rF0ldvANooHKWqmmO f8;
  s5dx9rF0ldvANooHKWqmmO f9;
};

#endif                                 /* struct_tag_nHE6XPZMd5ZTyWI9A7THrH */

#ifndef typedef_s_nHE6XPZMd5ZTyWI9A7THrH
#define typedef_s_nHE6XPZMd5ZTyWI9A7THrH

typedef struct tag_nHE6XPZMd5ZTyWI9A7THrH s_nHE6XPZMd5ZTyWI9A7THrH;

#endif                                 /* typedef_s_nHE6XPZMd5ZTyWI9A7THrH */

#ifndef struct_tag_RR14JofujREwA4XAeLriw
#define struct_tag_RR14JofujREwA4XAeLriw

struct tag_RR14JofujREwA4XAeLriw
{
  s_nHE6XPZMd5ZTyWI9A7THrH _data;
};

#endif                                 /* struct_tag_RR14JofujREwA4XAeLriw */

#ifndef typedef_s_RR14JofujREwA4XAeLriw
#define typedef_s_RR14JofujREwA4XAeLriw

typedef struct tag_RR14JofujREwA4XAeLriw s_RR14JofujREwA4XAeLriw;

#endif                                 /* typedef_s_RR14JofujREwA4XAeLriw */

#ifndef struct_tag_S6b7M2jwogcGCeHUYmW6eF
#define struct_tag_S6b7M2jwogcGCeHUYmW6eF

struct tag_S6b7M2jwogcGCeHUYmW6eF
{
  real_T NumBodies;
  real_T MaxNumBodies;
  real_T Gravity[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[16];
  real_T VelocityDoFMap[16];
  real_T MaxNameLength;
  real_T MaxJointPositionNumber;
  uint8_T DataFormat;
  real_T JointPositionLimits[4];
  s_RR14JofujREwA4XAeLriw Bodies;
  sNn4ag7c45nI1bdx4I2q2xB Joints[9];
};

#endif                                 /* struct_tag_S6b7M2jwogcGCeHUYmW6eF */

#ifndef typedef_s_S6b7M2jwogcGCeHUYmW6eF
#define typedef_s_S6b7M2jwogcGCeHUYmW6eF

typedef struct tag_S6b7M2jwogcGCeHUYmW6eF s_S6b7M2jwogcGCeHUYmW6eF;

#endif                                 /* typedef_s_S6b7M2jwogcGCeHUYmW6eF */

#ifndef struct_tag_oqflo8tPmhJ6sxPFLZiJGH
#define struct_tag_oqflo8tPmhJ6sxPFLZiJGH

struct tag_oqflo8tPmhJ6sxPFLZiJGH
{
  b_cell_wrap _data;
};

#endif                                 /* struct_tag_oqflo8tPmhJ6sxPFLZiJGH */

#ifndef typedef_s_oqflo8tPmhJ6sxPFLZiJGH
#define typedef_s_oqflo8tPmhJ6sxPFLZiJGH

typedef struct tag_oqflo8tPmhJ6sxPFLZiJGH s_oqflo8tPmhJ6sxPFLZiJGH;

#endif                                 /* typedef_s_oqflo8tPmhJ6sxPFLZiJGH */

#ifndef struct_tag_TnEayzHWuHj1hMPKnEr7h
#define struct_tag_TnEayzHWuHj1hMPKnEr7h

struct tag_TnEayzHWuHj1hMPKnEr7h
{
  cell _data;
};

#endif                                 /* struct_tag_TnEayzHWuHj1hMPKnEr7h */

#ifndef typedef_s_TnEayzHWuHj1hMPKnEr7h
#define typedef_s_TnEayzHWuHj1hMPKnEr7h

typedef struct tag_TnEayzHWuHj1hMPKnEr7h s_TnEayzHWuHj1hMPKnEr7h;

#endif                                 /* typedef_s_TnEayzHWuHj1hMPKnEr7h */

#ifndef struct_tag_lnEOVMt12CNg5nSw1iwvNF
#define struct_tag_lnEOVMt12CNg5nSw1iwvNF

struct tag_lnEOVMt12CNg5nSw1iwvNF
{
  c_cell_wrap _data;
};

#endif                                 /* struct_tag_lnEOVMt12CNg5nSw1iwvNF */

#ifndef typedef_s_lnEOVMt12CNg5nSw1iwvNF
#define typedef_s_lnEOVMt12CNg5nSw1iwvNF

typedef struct tag_lnEOVMt12CNg5nSw1iwvNF s_lnEOVMt12CNg5nSw1iwvNF;

#endif                                 /* typedef_s_lnEOVMt12CNg5nSw1iwvNF */

#ifndef struct_tag_rLqvsRnn1YgNlP4UZHEHjG
#define struct_tag_rLqvsRnn1YgNlP4UZHEHjG

struct tag_rLqvsRnn1YgNlP4UZHEHjG
{
  b_cell _data;
};

#endif                                 /* struct_tag_rLqvsRnn1YgNlP4UZHEHjG */

#ifndef typedef_s_rLqvsRnn1YgNlP4UZHEHjG
#define typedef_s_rLqvsRnn1YgNlP4UZHEHjG

typedef struct tag_rLqvsRnn1YgNlP4UZHEHjG s_rLqvsRnn1YgNlP4UZHEHjG;

#endif                                 /* typedef_s_rLqvsRnn1YgNlP4UZHEHjG */

#ifndef struct_tag_HNEgOhGwwuu4IndkThqyM
#define struct_tag_HNEgOhGwwuu4IndkThqyM

struct tag_HNEgOhGwwuu4IndkThqyM
{
  c_cell _data;
};

#endif                                 /* struct_tag_HNEgOhGwwuu4IndkThqyM */

#ifndef typedef_s_HNEgOhGwwuu4IndkThqyM
#define typedef_s_HNEgOhGwwuu4IndkThqyM

typedef struct tag_HNEgOhGwwuu4IndkThqyM s_HNEgOhGwwuu4IndkThqyM;

#endif                                 /* typedef_s_HNEgOhGwwuu4IndkThqyM */

#ifndef struct_tag_w3m1Q26ivrDTAtgc0mcqVE
#define struct_tag_w3m1Q26ivrDTAtgc0mcqVE

struct tag_w3m1Q26ivrDTAtgc0mcqVE
{
  s_FDrX8kOEjZXLXru8nW4swE _data;
};

#endif                                 /* struct_tag_w3m1Q26ivrDTAtgc0mcqVE */

#ifndef typedef_s_w3m1Q26ivrDTAtgc0mcqVE
#define typedef_s_w3m1Q26ivrDTAtgc0mcqVE

typedef struct tag_w3m1Q26ivrDTAtgc0mcqVE s_w3m1Q26ivrDTAtgc0mcqVE;

#endif                                 /* typedef_s_w3m1Q26ivrDTAtgc0mcqVE */

#ifndef struct_tag_mNpfPkpGE2ymZ9hNiT782E
#define struct_tag_mNpfPkpGE2ymZ9hNiT782E

struct tag_mNpfPkpGE2ymZ9hNiT782E
{
  d_cell _data;
};

#endif                                 /* struct_tag_mNpfPkpGE2ymZ9hNiT782E */

#ifndef typedef_s_mNpfPkpGE2ymZ9hNiT782E
#define typedef_s_mNpfPkpGE2ymZ9hNiT782E

typedef struct tag_mNpfPkpGE2ymZ9hNiT782E s_mNpfPkpGE2ymZ9hNiT782E;

#endif                                 /* typedef_s_mNpfPkpGE2ymZ9hNiT782E */

#ifndef struct_tag_RXzHB0cSwVmz9QtsDQbPBG
#define struct_tag_RXzHB0cSwVmz9QtsDQbPBG

struct tag_RXzHB0cSwVmz9QtsDQbPBG
{
  e_cell _data;
};

#endif                                 /* struct_tag_RXzHB0cSwVmz9QtsDQbPBG */

#ifndef typedef_s_RXzHB0cSwVmz9QtsDQbPBG
#define typedef_s_RXzHB0cSwVmz9QtsDQbPBG

typedef struct tag_RXzHB0cSwVmz9QtsDQbPBG s_RXzHB0cSwVmz9QtsDQbPBG;

#endif                                 /* typedef_s_RXzHB0cSwVmz9QtsDQbPBG */

#ifndef struct_tag_MY3jsqmREaTzOC09vCGedD
#define struct_tag_MY3jsqmREaTzOC09vCGedD

struct tag_MY3jsqmREaTzOC09vCGedD
{
  d_cell_wrap _data;
};

#endif                                 /* struct_tag_MY3jsqmREaTzOC09vCGedD */

#ifndef typedef_s_MY3jsqmREaTzOC09vCGedD
#define typedef_s_MY3jsqmREaTzOC09vCGedD

typedef struct tag_MY3jsqmREaTzOC09vCGedD s_MY3jsqmREaTzOC09vCGedD;

#endif                                 /* typedef_s_MY3jsqmREaTzOC09vCGedD */

#ifndef struct_tag_qH9OLvRzrE6jZf6Q0KWeS
#define struct_tag_qH9OLvRzrE6jZf6Q0KWeS

struct tag_qH9OLvRzrE6jZf6Q0KWeS
{
  f_cell _data;
};

#endif                                 /* struct_tag_qH9OLvRzrE6jZf6Q0KWeS */

#ifndef typedef_s_qH9OLvRzrE6jZf6Q0KWeS
#define typedef_s_qH9OLvRzrE6jZf6Q0KWeS

typedef struct tag_qH9OLvRzrE6jZf6Q0KWeS s_qH9OLvRzrE6jZf6Q0KWeS;

#endif                                 /* typedef_s_qH9OLvRzrE6jZf6Q0KWeS */

#ifndef struct_tag_kIjER3TOnaUUvjksbP9imB
#define struct_tag_kIjER3TOnaUUvjksbP9imB

struct tag_kIjER3TOnaUUvjksbP9imB
{
  g_cell _data;
};

#endif                                 /* struct_tag_kIjER3TOnaUUvjksbP9imB */

#ifndef typedef_s_kIjER3TOnaUUvjksbP9imB
#define typedef_s_kIjER3TOnaUUvjksbP9imB

typedef struct tag_kIjER3TOnaUUvjksbP9imB s_kIjER3TOnaUUvjksbP9imB;

#endif                                 /* typedef_s_kIjER3TOnaUUvjksbP9imB */

#ifndef struct_tag_Vg7IRWIOcrGzOKGyhkX96B
#define struct_tag_Vg7IRWIOcrGzOKGyhkX96B

struct tag_Vg7IRWIOcrGzOKGyhkX96B
{
  h_cell _data;
};

#endif                                 /* struct_tag_Vg7IRWIOcrGzOKGyhkX96B */

#ifndef typedef_s_Vg7IRWIOcrGzOKGyhkX96B
#define typedef_s_Vg7IRWIOcrGzOKGyhkX96B

typedef struct tag_Vg7IRWIOcrGzOKGyhkX96B s_Vg7IRWIOcrGzOKGyhkX96B;

#endif                                 /* typedef_s_Vg7IRWIOcrGzOKGyhkX96B */

#ifndef struct_tag_mcoCTymCR3qfYJPxx4rUaD
#define struct_tag_mcoCTymCR3qfYJPxx4rUaD

struct tag_mcoCTymCR3qfYJPxx4rUaD
{
  i_cell _data;
};

#endif                                 /* struct_tag_mcoCTymCR3qfYJPxx4rUaD */

#ifndef typedef_s_mcoCTymCR3qfYJPxx4rUaD
#define typedef_s_mcoCTymCR3qfYJPxx4rUaD

typedef struct tag_mcoCTymCR3qfYJPxx4rUaD s_mcoCTymCR3qfYJPxx4rUaD;

#endif                                 /* typedef_s_mcoCTymCR3qfYJPxx4rUaD */

#ifndef struct_tag_64qU89zzi5moV4oLaqjD3D
#define struct_tag_64qU89zzi5moV4oLaqjD3D

struct tag_64qU89zzi5moV4oLaqjD3D
{
  j_cell _data;
};

#endif                                 /* struct_tag_64qU89zzi5moV4oLaqjD3D */

#ifndef typedef_s_64qU89zzi5moV4oLaqjD3D
#define typedef_s_64qU89zzi5moV4oLaqjD3D

typedef struct tag_64qU89zzi5moV4oLaqjD3D s_64qU89zzi5moV4oLaqjD3D;

#endif                                 /* typedef_s_64qU89zzi5moV4oLaqjD3D */

#ifndef typedef_InstanceStruct_4qGqzNfuCILJPKulquYI8B
#define typedef_InstanceStruct_4qGqzNfuCILJPKulquYI8B

typedef struct {
  SimStruct *S;
  robotics_slmanip_internal_block_GravityTorqueBlock sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real_T (*u0)[2];
  real_T (*b_y0)[2];
} InstanceStruct_4qGqzNfuCILJPKulquYI8B;

#endif                                 /* typedef_InstanceStruct_4qGqzNfuCILJPKulquYI8B */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_4qGqzNfuCILJPKulquYI8B(SimStruct *S, int_T method,
  void* data);

#endif
