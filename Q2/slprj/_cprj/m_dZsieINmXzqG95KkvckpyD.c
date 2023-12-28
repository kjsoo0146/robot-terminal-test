/* Include files */

#include "modelInterface.h"
#include "m_dZsieINmXzqG95KkvckpyD.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 20,    /* lineNo */
  "GravityTorqueBlock",                /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GravityTorqueBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 7,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 21,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 33,  /* lineNo */
  "GravityTorqueBlock",                /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GravityTorqueBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1372,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 47,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 69,  /* lineNo */
  "VisualizationInfo",                 /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 74,  /* lineNo */
  "randi",                             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/randi.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 107, /* lineNo */
  "rand",                              /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/rand.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 45,  /* lineNo */
  "eml_rand",                          /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 23,  /* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/private/eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 51,  /* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 111, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 133, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 185, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 192, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 201, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 182, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 1332,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 71,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 96,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 106,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 140,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 1,  /* lineNo */
  "InternalAccess",                    /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/robotics/robotutils/+robotics/+core/+internal/InternalAccess.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 27, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 46, /* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 145,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 163,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 158,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 23, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 28, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 41, /* lineNo */
  "GravityTorqueBlock",                /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotsimulink/robotslmanip/+robotics/+slmanip/+internal/+block/GravityTorqueBlo"
  "ck.m"                               /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 146,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 152,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 159,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 160,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 188,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 189,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 191,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 94, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 447,/* lineNo */
  "RigidBody",                         /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBody.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 512,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 397,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 399,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/robotics/robotutils/axang2tform.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/axang2tform.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 37, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/axang2rotm.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/normalizeRows.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 21, /* lineNo */
  "axang2tform",                       /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/robotics/robotutils/axang2tform.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/+validation/validateNumericMatrix.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 93, /* lineNo */
  "validateattributes",                /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/eml/+coder/+internal/matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 264,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 342,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionGeometry.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 158, /* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 288, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 138, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 133, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 70,    /* lineNo */
  17,                                  /* colNo */
  "VisualizationInfo",                 /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  62,                                  /* iLast */
  70,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "VisualizationInfo",                 /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/VisualizationInfo.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = { 52,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 130, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 130, /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 131, /* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 136, /* lineNo */
  26,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 139,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 145,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pName */
};

static emlrtDCInfo h_emlrtDCI = { 156, /* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  156,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 156, /* lineNo */
  33,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  156,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 157, /* lineNo */
  34,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  157,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 157, /* lineNo */
  39,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  157,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 158, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  158,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 158, /* lineNo */
  41,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  158,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 171, /* lineNo */
  51,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  173,                                 /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  173,                                 /* lineNo */
  83,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  176,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  176,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 187,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pName */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  193,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 198, /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 194, /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  194,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 194, /* lineNo */
  30,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  194,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  194,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m"/* pName */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  174,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 132, /* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 133, /* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 135, /* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 198, /* lineNo */
  45,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 132, /* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 133, /* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 135, /* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  146,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  188,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 188, /* lineNo */
  41,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  196,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 196,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  189,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 189,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  191,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 191,/* lineNo */
  48,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  166,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  178,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  162,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  174,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/shared/robotics/robotutilsint/+robotics/+internal/axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 263,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m"/* pName */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo kc_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/robotics/robotmanip/+robotics/+manip/+internal/error.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 158,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/randfun/eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 133,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 138,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/eml/+coder/+internal/+valattr/validatencols.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 288,/* lineNo */
  "cat",                               /* fcnName */
  "/Applications/MATLAB_R2023b.app/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance);
static void cgxe_mdl_derivative(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__setup(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp);
static void SystemCore_setup(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj);
static void GravityTorqueBlock_setupImpl(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj);
static void RigidBodyTree_initVisualizationInfo
  (InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance, const emlrtStack *sp);
static void b_rand(InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance, const
                   emlrtStack *sp, real_T r[5]);
static void RigidBodyTree_defaultInitializeBodiesCellArray(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody *
  iobj_0);
static boolean_T b_strcmp(emxArray_char_T *b);
static boolean_T c_strcmp(emxArray_char_T *b);
static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj);
static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void RigidBodyTree_set_Gravity(robotics_manip_internal_RigidBodyTree *obj);
static robotics_manip_internal_RigidBody *l_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj);
static void mw__internal__call__reset(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp, real_T b_u0[2], real_T c_y0[2]);
static void GravityTorqueBlock_stepImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj, real_T q[2], real_T
  jointTorq[2]);
static rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj);
static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16]);
static boolean_T d_strcmp(emxArray_char_T *b);
static void rigidBodyJoint_get_JointAxis(rigidBodyJoint *obj, real_T ax[3]);
static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3]);
static real_T sumColumnB(real_T x[3]);
static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void permute(real_T a[9], real_T b[9]);
static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16]);
static void tforminv(real_T T[16], real_T Tinv[16]);
static void tformToSpatialXform(real_T T[16], real_T X[36]);
static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void b_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[2],
                     real_T C[6]);
static void dynamic_size_checks(const emlrtStack *sp, int32_T b_size[1], int32_T
  innerDimA, int32_T innerDimB);
static void c_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[1],
                     real_T C[6]);
static void crossMotion(real_T v[6], real_T motionVec[6], real_T motionVecDot[6]);
static void crossForce(real_T v[6], real_T forceVec[6], real_T forceVecDot[6]);
static boolean_T e_strcmp(emxArray_char_T *a);
static void d_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C);
static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location);
static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T d_state[625]);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GravityTorqueBlock *pStruct);
static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct);
static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions);
static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions);
static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void emxInit_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray, int32_T numDimensions);
static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[16]);
static void emxFree_char_T(emxArray_char_T **pEmxArray);
static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct);
static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxFree_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray);
static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct);
static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct);
static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[16]);
static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GravityTorqueBlock *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel);
static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions);
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T numDimensions);
static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray);
static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel);
static void init_simulink_io_address(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetSimStateCompliance(moduleInstance->S, 4);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "robotics_system_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->b_y0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_derivative(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance)
{
  static uint32_T uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
    1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
    2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
    951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
    1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
    1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
    3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
    1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
    761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
    3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
    699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
    1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
    4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
    3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
    4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
    170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
    1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
    1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
    1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
    3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
    501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
    1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
    2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
    2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
    4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
    2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
    2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
    3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
    733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
    1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
    627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
    3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
    3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
    3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
    354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
    1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
    1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
    3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
    2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
    2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
    548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
    1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
    3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
    2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
    191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
    3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
    396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
    3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
    2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
    3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
    1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
    1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
    976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
    2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
    766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
    3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
    1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
    607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
    3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
    1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
    2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
    4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
    551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
    3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
    1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
    552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
    181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
    3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
    4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
    478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
    3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
    786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
    2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
    4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
    4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
    3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
    3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
    370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
    3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
    1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
    2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
    2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
    4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
    1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
    506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
    138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
    3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
    1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
    2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
    643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
    1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
    4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
    4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
    1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
    3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
    3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
    3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
    190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
    2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
    453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
    4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
    2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
    363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
    1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
    2844269403U, 79981964U, 624U };

  int32_T i;
  emxInitStruct_robotics_slmanip_(&moduleInstance->sysobj);
  for (i = 0; i < 16; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].
      CollisionsInternal.matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.CollisionsInternal.matlabCodegenIsDeleted
    = true;
  for (i = 0; i < 16; i++) {
    moduleInstance->sysobj.TreeInternal._pobj0[i].matlabCodegenIsDeleted = true;
  }

  moduleInstance->sysobj.TreeInternal.Base.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.TreeInternal.matlabCodegenIsDeleted = true;
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  moduleInstance->method = 7U;
  moduleInstance->method_not_empty = true;
  moduleInstance->state = 1144108930U;
  moduleInstance->state_not_empty = true;
  for (i = 0; i < 2; i++) {
    moduleInstance->b_state[i] = 158852560U * (uint32_T)i + 362436069U;
  }

  moduleInstance->b_state_not_empty = true;
  memcpy(&moduleInstance->c_state[0], &uv[0], 625U * sizeof(uint32_T));
  moduleInstance->c_state_not_empty = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  robotics_manip_internal_RigidBody *b_obj;
  robotics_manip_internal_RigidBodyTree *obj;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = NULL;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  obj = &moduleInstance->sysobj.TreeInternal;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }

  st.site = NULL;
  b_obj = &moduleInstance->sysobj.TreeInternal.Base;
  if (!b_obj->matlabCodegenIsDeleted) {
    b_obj->matlabCodegenIsDeleted = true;
  }

  for (i = 0; i < 16; i++) {
    st.site = NULL;
    b_obj = &moduleInstance->sysobj.TreeInternal._pobj0[i];
    if (!b_obj->matlabCodegenIsDeleted) {
      b_obj->matlabCodegenIsDeleted = true;
    }
  }

  st.site = NULL;
  handle_matlabCodegenDestructor(&st,
    &moduleInstance->sysobj.TreeInternal.Base.CollisionsInternal);
  for (i = 0; i < 16; i++) {
    st.site = NULL;
    handle_matlabCodegenDestructor(&st,
      &moduleInstance->sysobj.TreeInternal._pobj0[i].CollisionsInternal);
  }

  emxFreeStruct_robotics_slmanip_(&moduleInstance->sysobj);
}

static void mw__internal__call__setup(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  SystemCore_setup(moduleInstance, &st, &moduleInstance->sysobj);
}

static void SystemCore_setup(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  GravityTorqueBlock_setupImpl(moduleInstance, &st, obj);
}

static void GravityTorqueBlock_setupImpl(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj)
{
  static int8_T iv[16] = { 0, 0, 1, 2, 0, 0, 0, 0, -1, -1, 1, 2, -1, -1, -1, -1
  };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &g_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &q_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  RigidBodyTree_initVisualizationInfo(moduleInstance, &b_st);
  obj->TreeInternal.NumBodies = 8.0;
  b_st.site = &v_emlrtRSI;
  RigidBodyTree_defaultInitializeBodiesCellArray(&b_st, &obj->TreeInternal,
    &obj->TreeInternal._pobj0[0]);
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[0] = d_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[8]);
  obj->TreeInternal.Bodies[0]->Index = 1.0;
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[1] = e_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[9]);
  obj->TreeInternal.Bodies[1]->Index = 2.0;
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[2] = f_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[10]);
  obj->TreeInternal.Bodies[2]->Index = 3.0;
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[3] = g_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[11]);
  obj->TreeInternal.Bodies[3]->Index = 4.0;
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[4] = h_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[12]);
  obj->TreeInternal.Bodies[4]->Index = 5.0;
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[5] = i_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[13]);
  obj->TreeInternal.Bodies[5]->Index = 6.0;
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[6] = j_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[14]);
  obj->TreeInternal.Bodies[6]->Index = 7.0;
  b_st.site = &s_emlrtRSI;
  obj->TreeInternal.Bodies[7] = k_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[15]);
  obj->TreeInternal.Bodies[7]->Index = 8.0;
  b_st.site = &t_emlrtRSI;
  RigidBodyTree_set_Gravity(&obj->TreeInternal);
  for (i = 0; i < 16; i++) {
    obj->TreeInternal.PositionDoFMap[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal.VelocityDoFMap[i] = (real_T)iv[i];
  }

  b_st.site = &u_emlrtRSI;
  l_RigidBody_RigidBody(&b_st, &obj->TreeInternal.Base);
  obj->TreeInternal.Base.Index = 0.0;
  obj->TreeInternal.matlabCodegenIsDeleted = false;
}

static void RigidBodyTree_initVisualizationInfo
  (InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance, const emlrtStack *sp)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T idx[5];
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &i_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  b_rand(moduleInstance, &d_st, idx);
  for (k = 0; k < 5; k++) {
    idx[k] = muDoubleScalarFloor(idx[k] * 62.0) + 1.0;
  }

  for (i = 0; i < 5; i++) {
    k = (int32_T)emlrtIntegerCheckR2012b(idx[i], &emlrtDCI, &b_st);
    emlrtDynamicBoundsCheckR2012b(k, 1, 62, &emlrtBCI, &b_st);
  }
}

static void b_rand(InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance, const
                   emlrtStack *sp, real_T r[5])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &n_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_st.site = &o_emlrtRSI;
    d = eml_rand_mt19937ar(&c_st, moduleInstance->c_state);
    r[k] = d;
  }
}

static void RigidBodyTree_defaultInitializeBodiesCellArray(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody *
  iobj_0)
{
  static char_T b_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '2'
  };

  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '1' };

  static char_T c_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '3'
  };

  static char_T d_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '4'
  };

  static char_T e_bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '5'
  };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &w_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &x_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[0].NameInternal->size[0] * iobj_0[0].NameInternal->size[1];
  iobj_0[0].NameInternal->size[0] = 1;
  iobj_0[0].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[0].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[0].NameInternal->data[i] = bname[i];
  }

  b_st.site = &y_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  i = iobj_0[0].JointInternal.Type->size[0] * iobj_0[0].JointInternal.Type->
    size[1];
  iobj_0[0].JointInternal.Type->size[0] = 1;
  iobj_0[0].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[0].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[0].JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[0].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[0].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[0].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[0].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[0].JointInternal.MotionSubspace->size[0] * iobj_0[0].
    JointInternal.MotionSubspace->size[1];
  iobj_0[0].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[0].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[0].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[0].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[0].Index = -1.0;
  iobj_0[0].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[0].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &ab_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[0].CollisionsInternal);
  iobj_0[0].matlabCodegenIsDeleted = false;
  obj->Bodies[0] = &iobj_0[0];
  st.site = &w_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[1].NameInternal->size[0] * iobj_0[1].NameInternal->size[1];
  iobj_0[1].NameInternal->size[0] = 1;
  iobj_0[1].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[1].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[1].NameInternal->data[i] = b_bname[i];
  }

  b_st.site = &y_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  i = iobj_0[1].JointInternal.Type->size[0] * iobj_0[1].JointInternal.Type->
    size[1];
  iobj_0[1].JointInternal.Type->size[0] = 1;
  iobj_0[1].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[1].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[1].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[1].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[1].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[1].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[1].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[1].JointInternal.MotionSubspace->size[0] * iobj_0[1].
    JointInternal.MotionSubspace->size[1];
  iobj_0[1].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[1].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[1].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[1].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[1].Index = -1.0;
  iobj_0[1].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[1].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &ab_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[1].CollisionsInternal);
  iobj_0[1].matlabCodegenIsDeleted = false;
  obj->Bodies[1] = &iobj_0[1];
  st.site = &w_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[2].NameInternal->size[0] * iobj_0[2].NameInternal->size[1];
  iobj_0[2].NameInternal->size[0] = 1;
  iobj_0[2].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[2].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[2].NameInternal->data[i] = c_bname[i];
  }

  b_st.site = &y_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  i = iobj_0[2].JointInternal.Type->size[0] * iobj_0[2].JointInternal.Type->
    size[1];
  iobj_0[2].JointInternal.Type->size[0] = 1;
  iobj_0[2].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[2].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[2].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[2].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[2].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[2].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[2].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[2].JointInternal.MotionSubspace->size[0] * iobj_0[2].
    JointInternal.MotionSubspace->size[1];
  iobj_0[2].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[2].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[2].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[2].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[2].Index = -1.0;
  iobj_0[2].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[2].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &ab_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[2].CollisionsInternal);
  iobj_0[2].matlabCodegenIsDeleted = false;
  obj->Bodies[2] = &iobj_0[2];
  st.site = &w_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[3].NameInternal->size[0] * iobj_0[3].NameInternal->size[1];
  iobj_0[3].NameInternal->size[0] = 1;
  iobj_0[3].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[3].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[3].NameInternal->data[i] = d_bname[i];
  }

  b_st.site = &y_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  i = iobj_0[3].JointInternal.Type->size[0] * iobj_0[3].JointInternal.Type->
    size[1];
  iobj_0[3].JointInternal.Type->size[0] = 1;
  iobj_0[3].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[3].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[3].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[3].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[3].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[3].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[3].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[3].JointInternal.MotionSubspace->size[0] * iobj_0[3].
    JointInternal.MotionSubspace->size[1];
  iobj_0[3].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[3].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[3].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[3].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[3].Index = -1.0;
  iobj_0[3].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[3].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &ab_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[3].CollisionsInternal);
  iobj_0[3].matlabCodegenIsDeleted = false;
  obj->Bodies[3] = &iobj_0[3];
  st.site = &w_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[4].NameInternal->size[0] * iobj_0[4].NameInternal->size[1];
  iobj_0[4].NameInternal->size[0] = 1;
  iobj_0[4].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[4].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[4].NameInternal->data[i] = e_bname[i];
  }

  b_st.site = &y_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  i = iobj_0[4].JointInternal.Type->size[0] * iobj_0[4].JointInternal.Type->
    size[1];
  iobj_0[4].JointInternal.Type->size[0] = 1;
  iobj_0[4].JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(iobj_0[4].JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    iobj_0[4].JointInternal.Type->data[i] = cv[i];
  }

  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_0[4].JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = iobj_0[4].JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = iobj_0[4].JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      iobj_0[4].JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = iobj_0[4].JointInternal.MotionSubspace->size[0] * iobj_0[4].
    JointInternal.MotionSubspace->size[1];
  iobj_0[4].JointInternal.MotionSubspace->size[0] = 6;
  iobj_0[4].JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(iobj_0[4].JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    iobj_0[4].JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  iobj_0[4].Index = -1.0;
  iobj_0[4].ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    iobj_0[4].SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  b_st.site = &ab_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[4].CollisionsInternal);
  iobj_0[4].matlabCodegenIsDeleted = false;
  obj->Bodies[4] = &iobj_0[4];
  st.site = &w_emlrtRSI;
  obj->Bodies[5] = RigidBody_RigidBody(&st, &iobj_0[5]);
  st.site = &w_emlrtRSI;
  obj->Bodies[6] = b_RigidBody_RigidBody(&st, &iobj_0[6]);
  st.site = &w_emlrtRSI;
  obj->Bodies[7] = c_RigidBody_RigidBody(&st, &iobj_0[7]);
}

static boolean_T b_strcmp(emxArray_char_T *b)
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b->size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
        if (cv[kstr - 1] != b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static boolean_T c_strcmp(emxArray_char_T *b)
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b->size[1] != 9) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
        if (cv[kstr - 1] != b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj)
{
  static void *t0_GeometryInternal = NULL;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_robotics_manip_interna *r;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  emxInit_robotics_manip_internal(&r, 2);
  b_obj = obj;
  b_obj->Size = 0.0;
  st.site = &db_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_obj->MaxElements = 0.0;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &c_emlrtDCI,
    (emlrtConstCTX)sp);
  r->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtConstCTX)
    sp);
  emxEnsureCapacity_robotics_mani(r, i);
  for (i = 0; i < 2; i++) {
    iv[i] = r->size[i];
  }

  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = iv[0];
  b_obj->CollisionGeometries->size[1] = iv[1];
  emxEnsureCapacity_robotics_mani(b_obj->CollisionGeometries, i);
  st.site = &eb_emlrtRSI;
  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    expl_temp.CollisionPrimitive = t0_GeometryInternal;
    b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &b_emlrtBCI, (emlrtConstCTX)sp)] = expl_temp;
  }

  b_obj->matlabCodegenIsDeleted = false;
  emxFree_robotics_manip_internal(&r);
  return b_obj;
}

static robotics_manip_internal_RigidBody *RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '6' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &y_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &ab_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *b_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '7' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &y_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &ab_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *c_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T bname[10] = { 'd', 'u', 'm', 'm', 'y', 'b', 'o', 'd', 'y', '8' };

  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &y_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  b_obj->Index = -1.0;
  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }

  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }

  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = (real_T)msubspace_data[i];
  }

  st.site = &ab_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *d_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 1.2506407081630646E-5, 0.0, -1.755774678296497E-7,
    0.0, 9.63401131614482E-6, 0.0, 0.0, 2.1907079879448666E-5, 0.0,
    -9.63401131614482E-6, 0.0, -2.4429201311861481E-5, -1.755774678296497E-7,
    0.0, 1.9274903797818021E-5, -0.0, 2.4429201311861481E-5, 0.0, 0.0,
    -9.63401131614482E-6, -0.0, 0.079119962, 0.0, 0.0, 9.63401131614482E-6, 0.0,
    2.4429201311861481E-5, 0.0, 0.079119962, 0.0, 0.0, -2.4429201311861481E-5,
    0.0, 0.0, 0.0, 0.079119962 };

  static char_T cv[5] = { 'l', 'i', 'n', 'k', '1' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 0.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = (real_T)iv3[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *e_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.00025598100376758852, 2.2027827360445393E-11,
    1.0252109176940595E-6, 0.0, -0.0046677771601933669, 5.3182680022675086E-5,
    2.2027827360445393E-11, 0.00025410713499454023, -2.4941268032790773E-6,
    0.0046677771601933669, 0.0, 2.9703975819561897E-5, 1.0252109176940595E-6,
    -2.4941268032790773E-6, 1.8888027986020151E-5, -5.3182680022675086E-5,
    -2.9703975819561897E-5, 0.0, 0.0, 0.0046677771601933669,
    -5.3182680022675086E-5, 0.098406837, 0.0, 0.0, -0.0046677771601933669, 0.0,
    -2.9703975819561897E-5, 0.0, 0.098406837, 0.0, 5.3182680022675086E-5,
    2.9703975819561897E-5, 0.0, 0.0, 0.0, 0.098406837 };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.012, 0.0, 0.017, 1.0 };

  static char_T cv[5] = { 'l', 'i', 'n', 'k', '2' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 1.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *f_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 0.0017632141516686539, -6.368433412722551E-7,
    -0.00018371649145547766, 0.0, -0.0140866554520649, 5.22780188213871E-5,
    -6.368433412722551E-7, 0.0017902634754422204, -6.8885291018321461E-6,
    0.0140866554520649, 0.0, -0.00142780695846381, -0.00018371649145547766,
    -6.8885291018321461E-6, 7.50846247383926E-5, -5.22780188213871E-5,
    0.00142780695846381, 0.0, 0.0, 0.0140866554520649, -5.22780188213871E-5,
    0.13850917, 0.0, 0.0, -0.0140866554520649, 0.0, 0.00142780695846381, 0.0,
    0.13850917, 0.0, 5.22780188213871E-5, -0.00142780695846381, 0.0, 0.0, 0.0,
    0.13850917 };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0595, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'l', 'i', 'n', 'k', '3' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 1, 0, 0, 0, 0 };

  static int8_T iv2[3] = { 0, 0, 1 };

  static int8_T iv5[3] = { 0, 1, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 2.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv5[i];
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *g_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 3.0680964548160883E-5, -5.97440725674762E-6,
    -2.973545034809753E-6, 0.0, -2.9752646170879803E-5, 5.16776256140592E-5,
    -5.97440725674762E-6, 0.001339392874088295, -2.3100409454553815E-11,
    2.9752646170879803E-5, 0.0, -0.0120678498884958, -2.973545034809753E-6,
    -2.3100409454553815E-11, 0.0013486539735492638, -5.16776256140592E-5,
    0.0120678498884958, 0.0, 0.0, 2.9752646170879803E-5, -5.16776256140592E-5,
    0.13274562, 0.0, 0.0, -2.9752646170879803E-5, 0.0, 0.0120678498884958, 0.0,
    0.13274562, 0.0, 5.16776256140592E-5, -0.0120678498884958, 0.0, 0.0, 0.0,
    0.13274562 };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.024, 0.0, 0.128, 1.0 };

  static char_T cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T cv[5] = { 'l', 'i', 'n', 'k', '4' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv4[6] = { 0, 1, 0, 0, 0, 0 };

  static int8_T iv2[3] = { 0, 0, 1 };

  static int8_T iv5[3] = { 0, 1, 0 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 3.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 8;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 8; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)iv4[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv5[i];
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *h_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 1.0000794633468697E-9, -1.6285761910986751E-17,
    -3.94068810286908E-13, 0.0, -8.9142216E-12, 3.6839985E-16,
    -1.6285761910986751E-17, 1.0020337005343641E-9, -3.2839979003067596E-18,
    8.9142216E-12, 0.0, -4.4206755E-11, -3.94068810286908E-13,
    -3.2839979003067596E-18, 1.0019542371877657E-9, -3.6839985E-16,
    4.4206755E-11, 0.0, 0.0, 8.9142216E-12, -3.6839985E-16, 1.0E-9, 0.0, 0.0,
    -8.9142216E-12, 0.0, 4.4206755E-11, 0.0, 1.0E-9, 0.0, 3.6839985E-16,
    -4.4206755E-11, 0.0, 0.0, 0.0, 1.0E-9 };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.124, 0.0, 0.0, 1.0 };

  static char_T cv[5] = { 'l', 'i', 'n', 'k', '5' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 4.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *i_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 1.0E-9, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 1.0E-9, 0.0,
    0.0, 0.0, -0.0, 0.0, 0.0, 1.0E-9, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 1.0E-9,
    0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.0E-9, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.0E-9
  };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.126, 0.0, 0.0, 1.0 };

  static char_T cv[17] = { 'e', 'n', 'd', '_', 'e', 'f', 'f', 'e', 'c', 't', 'o',
    'r', '_', 'l', 'i', 'n', 'k' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 17;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 17; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 5.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *j_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 1.0E-9, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 1.0E-9, 0.0,
    0.0, 0.0, -0.0, 0.0, 0.0, 1.0E-9, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 1.0E-9,
    0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.0E-9, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.0E-9
  };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0817, 0.021, 0.0, 1.0 };

  static char_T cv[12] = { 'g', 'r', 'i', 'p', 'p', 'e', 'r', '_', 'l', 'i', 'n',
    'k' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 12;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 12; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 5.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static robotics_manip_internal_RigidBody *k_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static real_T dv[36] = { 1.0E-9, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 1.0E-9, 0.0,
    0.0, 0.0, -0.0, 0.0, 0.0, 1.0E-9, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 1.0E-9,
    0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.0E-9, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.0E-9
  };

  static real_T dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0817, -0.021, 0.0, 1.0 };

  static char_T cv[16] = { 'g', 'r', 'i', 'p', 'p', 'e', 'r', '_', 'l', 'i', 'n',
    'k', '_', 's', 'u', 'b' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv3[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 16;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 16; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = 5.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = dv[i];
  }

  st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.JointToParentTransform[i] = dv1[i];
  }

  for (i = 0; i < 16; i++) {
    b_obj->JointInternal.ChildToJointTransform[i] = (real_T)iv3[i];
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    b_obj->JointInternal.JointAxisInternal[i] = 0.0;
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void RigidBodyTree_set_Gravity(robotics_manip_internal_RigidBodyTree *obj)
{
  static real_T dv[3] = { 0.0, 0.0, -9.80665 };

  int32_T i;
  for (i = 0; i < 3; i++) {
    obj->Gravity[i] = dv[i];
  }
}

static robotics_manip_internal_RigidBody *l_RigidBody_RigidBody(const emlrtStack
  *sp, robotics_manip_internal_RigidBody *obj)
{
  static char_T cv[5] = { 'w', 'o', 'r', 'l', 'd' };

  static char_T cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static int8_T iv[6] = { 0, 0, 1, 0, 0, 0 };

  static int8_T iv1[6] = { 0, 0, 0, 0, 0, 1 };

  static int8_T iv2[3] = { 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  robotics_manip_internal_RigidBody *b_obj;
  int32_T i;
  int32_T loop_ub;
  int8_T msubspace_data[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &x_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 5; i++) {
    b_obj->NameInternal->data[i] = cv[i];
  }

  b_obj->ParentIndex = -1.0;
  for (i = 0; i < 36; i++) {
    b_obj->SpatialInertia[i] = 0.0;
  }

  st.site = &hb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  i = b_obj->JointInternal.Type->size[0] * b_obj->JointInternal.Type->size[1];
  b_obj->JointInternal.Type->size[0] = 1;
  b_obj->JointInternal.Type->size[1] = 5;
  emxEnsureCapacity_char_T(b_obj->JointInternal.Type, i);
  for (i = 0; i < 5; i++) {
    b_obj->JointInternal.Type->data[i] = cv1[i];
  }

  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->JointInternal.Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = b_obj->JointInternal.Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = b_obj->JointInternal.Type->data[i];
  }

  if (b_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (c_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = iv1[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = (real_T)iv2[i];
    }
    break;

   default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }

    for (i = 0; i < 3; i++) {
      b_obj->JointInternal.JointAxisInternal[i] = 0.0;
    }
    break;
  }

  i = b_obj->JointInternal.MotionSubspace->size[0] *
    b_obj->JointInternal.MotionSubspace->size[1];
  b_obj->JointInternal.MotionSubspace->size[0] = 6;
  b_obj->JointInternal.MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(b_obj->JointInternal.MotionSubspace, i);
  for (i = 0; i < 6; i++) {
    b_obj->JointInternal.MotionSubspace->data[i] = (real_T)msubspace_data[i];
  }

  st.site = &gb_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void mw__internal__call__reset(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &ib_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance, const emlrtStack *sp, real_T b_u0[2], real_T c_y0[2])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T varargout_1[2];
  int32_T i;
  char_T u[45];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &d_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.matlabCodegenIsDeleted = false;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &jb_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(moduleInstance, &c_st, &moduleInstance->sysobj);
  }

  b_st.site = &d_emlrtRSI;
  GravityTorqueBlock_stepImpl(&b_st, &moduleInstance->sysobj, b_u0, varargout_1);
  for (i = 0; i < 2; i++) {
    c_y0[i] = varargout_1[i];
  }
}

static void GravityTorqueBlock_stepImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_GravityTorqueBlock *obj, real_T q[2], real_T
  jointTorq[2])
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T d_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  emlrtStack *b_sp;
  emxArray_cell_wrap *X;
  emxArray_cell_wrap *Xtree;
  emxArray_real_T *aB;
  emxArray_real_T *b_S;
  emxArray_real_T *f;
  emxArray_real_T *taui;
  emxArray_real_T *vB;
  emxArray_real_T *vJ;
  emxArray_real_T *y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  rigidBodyJoint *r;
  robotics_manip_internal_RigidBodyTree *robot;
  real_T XDHOffset[36];
  real_T b_Xtree[36];
  real_T T[16];
  real_T TDHOffset[16];
  real_T dv[16];
  real_T a0[6];
  real_T b_X[6];
  real_T b_y[6];
  real_T dv1[6];
  real_T a[2];
  real_T b[2];
  real_T b_data[2];
  real_T c_i;
  real_T d;
  real_T nb;
  real_T pid;
  int32_T b_size[2];
  int32_T q_size[1];
  int32_T qddoti_size[1];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T k;
  int32_T loop_ub;
  char_T b_u[45];
  char_T u[15];
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  robot = &obj->TreeInternal;
  for (i = 0; i < 3; i++) {
    a0[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    a0[i + 3] = -obj->TreeInternal.Gravity[i];
  }

  nb = obj->TreeInternal.NumBodies;
  d = emlrtNonNegativeCheckR2012b(nb, &d_emlrtDCI, &st);
  emlrtIntegerCheckR2012b(d, &e_emlrtDCI, &st);
  emlrtIntegerCheckR2012b(nb, &f_emlrtDCI, &st);
  emxInit_real_T(&vJ, 2);
  i = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  vJ->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &r_emlrtDCI, &st);
  emxEnsureCapacity_real_T(vJ, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &v_emlrtDCI, &st);
  for (i = 0; i < loop_ub; i++) {
    vJ->data[i] = 0.0;
  }

  emxInit_real_T(&vB, 2);
  i = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &s_emlrtDCI, &st);
  emxEnsureCapacity_real_T(vB, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &w_emlrtDCI, &st);
  for (i = 0; i < loop_ub; i++) {
    vB->data[i] = 0.0;
  }

  emxInit_real_T(&aB, 2);
  i = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &t_emlrtDCI, &st);
  emxEnsureCapacity_real_T(aB, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &x_emlrtDCI, &st);
  for (i = 0; i < loop_ub; i++) {
    aB->data[i] = 0.0;
  }

  emlrtIntegerCheckR2012b(nb, &g_emlrtDCI, &st);
  for (b_i = 0; b_i < 2; b_i++) {
    jointTorq[b_i] = 0.0;
  }

  i = (int32_T)nb - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
    &b_emlrtRTEI, &st);
  emxInit_cell_wrap(&Xtree, 2);
  i1 = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = (int32_T)nb;
  emxEnsureCapacity_cell_wrap(Xtree, i1);
  emxInit_cell_wrap(&X, 2);
  i1 = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = (int32_T)nb;
  emxEnsureCapacity_cell_wrap(X, i1);
  for (k = 0; k <= i; k++) {
    for (i1 = 0; i1 < 36; i1++) {
      i2 = Xtree->size[1] - 1;
      Xtree->data[emlrtDynamicBoundsCheckR2012b(k, 0, i2, &nb_emlrtBCI, &st)]
        .f1[i1] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      i1 = Xtree->size[1] - 1;
      i1 = emlrtDynamicBoundsCheckR2012b(k, 0, i1, &gb_emlrtBCI, &st);
      Xtree->data[i1].f1[loop_ub + 6 * loop_ub] = 1.0;
    }

    for (i1 = 0; i1 < 36; i1++) {
      i2 = X->size[1] - 1;
      X->data[emlrtDynamicBoundsCheckR2012b(k, 0, i2, &ob_emlrtBCI, &st)].f1[i1]
        = 0.0;
    }

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      i1 = X->size[1] - 1;
      i1 = emlrtDynamicBoundsCheckR2012b(k, 0, i1, &hb_emlrtBCI, &st);
      X->data[i1].f1[loop_ub + 6 * loop_ub] = 1.0;
    }
  }

  i = (int32_T)nb - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
    &c_emlrtRTEI, &st);
  emxInit_real_T(&f, 2);
  i1 = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = (int32_T)nb;
  emxEnsureCapacity_real_T(f, i1);
  emxInit_real_T(&b_S, 2);
  emxInit_real_T(&y, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    b_st.site = &lb_emlrtRSI;
    b_sp = &b_st;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
      (b_i, 0, 7, &pb_emlrtBCI, &b_st)]);
    i1 = 6 * r->MotionSubspace->size[1];
    i2 = b_S->size[0] * b_S->size[1];
    b_S->size[0] = 6;
    c_st.site = &lb_emlrtRSI;
    b_sp = &c_st;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
    b_S->size[1] = r->MotionSubspace->size[1];
    emxEnsureCapacity_real_T(b_S, i2);
    loop_ub = i1 - 1;
    d_st.site = &lb_emlrtRSI;
    b_sp = &d_st;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_S->data[i1] = r->MotionSubspace->data[i1];
    }

    for (i1 = 0; i1 < 2; i1++) {
      a[i1] = robot->PositionDoFMap[b_i + (i1 << 3)];
    }

    for (i1 = 0; i1 < 2; i1++) {
      b[i1] = robot->VelocityDoFMap[b_i + (i1 << 3)];
    }

    for (i1 = 0; i1 < 36; i1++) {
      XDHOffset[i1] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      XDHOffset[k + 6 * k] = 1.0;
    }

    if (a[1] < a[0]) {
      e_st.site = &mb_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&e_st, RigidBody_get_Joint(&e_st,
        robot->Bodies[b_i]), T);
      qddoti_size[0] = 1;
      a[0] = 0.0;
      i1 = vJ->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &i_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        vJ->data[i1 + 6 * (loop_ub - 1)] = 0.0;
      }
    } else {
      if (a[0] > a[1]) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(a[0], &h_emlrtDCI, &d_st);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &c_emlrtBCI, &d_st) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(a[1], &i_emlrtDCI, &d_st);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &d_emlrtBCI, &d_st);
      }

      if (b[0] > b[1]) {
        k = 1;
        loop_ub = 0;
      } else {
        k = (int32_T)emlrtIntegerCheckR2012b(b[0], &j_emlrtDCI, &d_st);
        k = emlrtDynamicBoundsCheckR2012b(k, 1, 2, &e_emlrtBCI, &d_st);
        loop_ub = (int32_T)emlrtIntegerCheckR2012b(b[1], &k_emlrtDCI, &d_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 2, &f_emlrtBCI,
          &d_st);
      }

      b_size[0] = 1;
      b_size[1] = (loop_ub - k) + 1;
      loop_ub -= k;
      for (k = 0; k <= loop_ub; k++) {
        b_data[k] = 0.0;
      }

      if (b[0] > b[1]) {
        k = 1;
        loop_ub = 0;
      } else {
        k = (int32_T)emlrtIntegerCheckR2012b(b[0], &l_emlrtDCI, &d_st);
        k = emlrtDynamicBoundsCheckR2012b(k, 1, 2, &g_emlrtBCI, &d_st);
        loop_ub = (int32_T)emlrtIntegerCheckR2012b(b[1], &m_emlrtDCI, &d_st);
        loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 2, &h_emlrtBCI,
          &d_st);
      }

      qddoti_size[0] = (loop_ub - k) + 1;
      loop_ub -= k;
      for (k = 0; k <= loop_ub; k++) {
        a[k] = 0.0;
      }

      q_size[0] = i2 - i1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        b[i2] = q[i1 + i2];
      }

      e_st.site = &nb_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&e_st, RigidBody_get_Joint(&e_st,
        robot->Bodies[b_i]), b, q_size, T);
      e_st.site = &ob_emlrtRSI;
      b_sp = &e_st;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
      for (i1 = 0; i1 < 16; i1++) {
        TDHOffset[i1] = r->ChildToJointTransform[i1];
      }

      tforminv(TDHOffset, dv);
      tformToSpatialXform(dv, XDHOffset);
      f_st.site = &sb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      f_st.site = &tb_emlrtRSI;
      if (y->size[1] != b_size[1]) {
        if (b_size[1] == 1) {
          for (i1 = 0; i1 < 45; i1++) {
            b_u[i1] = d_u[i1];
          }

          d_y = NULL;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&f_st, 45, m, &b_u[0]);
          emlrtAssign(&d_y, m);
          for (i1 = 0; i1 < 45; i1++) {
            b_u[i1] = d_u[i1];
          }

          f_y = NULL;
          m = emlrtCreateCharArray(2, &iv3[0]);
          emlrtInitCharArrayR2013a(&f_st, 45, m, &b_u[0]);
          emlrtAssign(&f_y, m);
          g_st.site = &nc_emlrtRSI;
          error(&g_st, d_y, getString(&g_st, b_message(&g_st, f_y, &h_emlrtMCI),
                 &h_emlrtMCI), &h_emlrtMCI);
        } else {
          for (i1 = 0; i1 < 15; i1++) {
            u[i1] = c_u[i1];
          }

          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv[0]);
          emlrtInitCharArrayR2013a(&f_st, 15, m, &u[0]);
          emlrtAssign(&c_y, m);
          for (i1 = 0; i1 < 15; i1++) {
            u[i1] = c_u[i1];
          }

          e_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&f_st, 15, m, &u[0]);
          emlrtAssign(&e_y, m);
          g_st.site = &oc_emlrtRSI;
          error(&g_st, c_y, getString(&g_st, b_message(&g_st, e_y, &g_emlrtMCI),
                 &g_emlrtMCI), &g_emlrtMCI);
        }
      }

      i1 = vJ->size[1];
      f_st.site = &sb_emlrtRSI;
      b_mtimes(y, b_data, b_size, *(real_T (*)[6])&vJ->data[6 *
               (emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &wb_emlrtBCI,
                 &e_st) - 1)]);
    }

    i1 = X->size[1] - 1;
    tforminv(T, dv);
    tformToSpatialXform(dv, X->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &ub_emlrtBCI, &d_st)].f1);
    pid = robot->Bodies[b_i]->ParentIndex;
    if (pid > 0.0) {
      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &jb_emlrtBCI, &d_st);
      i1 = vB->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(pid, &n_emlrtDCI, &d_st);
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &k_emlrtBCI, &d_st);
      i1 = vJ->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &j_emlrtBCI, &d_st);
      i1 = vB->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &l_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[b_i].f1[i1 + 6 * i2] * vB->data[i2 + 6 * ((int32_T)pid -
            1)];
        }

        b_y[i1] = vJ->data[i1 + 6 * (loop_ub - 1)] + d;
      }

      for (i1 = 0; i1 < 6; i1++) {
        vB->data[i1 + 6 * (k - 1)] = b_y[i1];
      }

      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &lb_emlrtBCI, &d_st);
      i1 = aB->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)pid, 1, i1, &m_emlrtBCI, &d_st);
      e_st.site = &sb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      e_st.site = &tb_emlrtRSI;
      dynamic_size_checks(&e_st, qddoti_size, y->size[1], qddoti_size[0]);
      e_st.site = &sb_emlrtRSI;
      c_mtimes(y, a, qddoti_size, b_y);
      i1 = vB->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &n_emlrtBCI, &d_st);
      i1 = vJ->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &o_emlrtBCI, &d_st);
      crossMotion(*(real_T (*)[6])&vB->data[6 * (loop_ub - 1)], *(real_T (*)[6])
                  &vJ->data[6 * (k - 1)], dv1);
      i1 = aB->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &p_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[b_i].f1[i1 + 6 * i2] * aB->data[i2 + 6 * ((int32_T)pid -
            1)];
        }

        b_X[i1] = (d + b_y[i1]) + dv1[i1];
      }

      for (i1 = 0; i1 < 6; i1++) {
        aB->data[i1 + 6 * (loop_ub - 1)] = b_X[i1];
      }

      i1 = Xtree->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, i1, &fb_emlrtBCI, &d_st);
      tformToSpatialXform(T, XDHOffset);
      for (i1 = 0; i1 < 6; i1++) {
        for (i2 = 0; i2 < 6; i2++) {
          b_Xtree[i1 + 6 * i2] = 0.0;
          for (k = 0; k < 6; k++) {
            b_Xtree[i1 + 6 * i2] += Xtree->data[(int32_T)pid - 1].f1[i1 + 6 * k]
              * XDHOffset[k + 6 * i2];
          }
        }
      }

      i1 = Xtree->size[1] - 1;
      memcpy(&Xtree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &xb_emlrtBCI,
              &d_st)].f1[0], &b_Xtree[0], 36U * sizeof(real_T));
    } else {
      i1 = vJ->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &q_emlrtBCI, &d_st);
      i1 = vB->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &r_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        vB->data[i1 + 6 * (k - 1)] = vJ->data[i1 + 6 * (loop_ub - 1)];
      }

      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &kb_emlrtBCI, &d_st);
      e_st.site = &sb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      e_st.site = &tb_emlrtRSI;
      dynamic_size_checks(&e_st, qddoti_size, y->size[1], qddoti_size[0]);
      e_st.site = &sb_emlrtRSI;
      c_mtimes(y, a, qddoti_size, b_y);
      i1 = aB->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &s_emlrtBCI, &d_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[b_i].f1[i1 + 6 * i2] * a0[i2];
        }

        aB->data[i1 + 6 * (loop_ub - 1)] = d + b_y[i1];
      }

      i1 = Xtree->size[1] - 1;
      tformToSpatialXform(T, Xtree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
        i1, &vb_emlrtBCI, &d_st)].f1);
    }

    for (i1 = 0; i1 < 36; i1++) {
      XDHOffset[i1] = robot->Bodies[b_i]->SpatialInertia[i1];
    }

    i1 = vB->size[1];
    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &t_emlrtBCI, &d_st);
    i1 = Xtree->size[1] - 1;
    emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &mb_emlrtBCI, &d_st);
    i1 = aB->size[1];
    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &u_emlrtBCI, &d_st);
    i1 = vB->size[1];
    loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &v_emlrtBCI, &d_st);
    for (i1 = 0; i1 < 6; i1++) {
      b_y[i1] = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        pid = b_y[i1] + XDHOffset[i1 + 6 * i2] * vB->data[i2 + 6 * b_i];
        b_y[i1] = pid;
      }
    }

    crossForce(*(real_T (*)[6])&vB->data[6 * (loop_ub - 1)], b_y, dv1);
    for (i1 = 0; i1 < 6; i1++) {
      d = 0.0;
      b_X[i1] = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        d += XDHOffset[i1 + 6 * i2] * aB->data[i2 + 6 * b_i];
        pid = b_X[i1] + Xtree->data[b_i].f1[i2 + 6 * i1] * 0.0;
        b_X[i1] = pid;
      }

      b_y[i1] = d + dv1[i1];
    }

    i1 = f->size[1];
    loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &w_emlrtBCI, &d_st);
    for (i1 = 0; i1 < 6; i1++) {
      f->data[i1 + 6 * (loop_ub - 1)] = b_y[i1] - b_X[i1];
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&aB);
  emxFree_real_T(&vB);
  emxFree_cell_wrap(&Xtree);
  i = (int32_T)-((-1.0 - nb) + 1.0) - 1;
  emlrtForLoopVectorCheckR2021a(nb, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-((-1.0
    - nb) + 1.0), &d_emlrtRTEI, &st);
  emxInit_real_T1(&taui, 1);
  for (b_i = 0; b_i <= i; b_i++) {
    c_i = nb - (real_T)b_i;
    b_st.site = &pb_emlrtRSI;
    b_sp = &b_st;
    i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &y_emlrtDCI, &b_st) - 1;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b(i1,
      0, 7, &qb_emlrtBCI, &b_st)]);
    if (!e_strcmp(r->Type)) {
      c_st.site = &qb_emlrtRSI;
      b_sp = &c_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &bb_emlrtDCI, &c_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 7, &sb_emlrtBCI, &c_st)]);
      for (i1 = 0; i1 < 16; i1++) {
        TDHOffset[i1] = r->ChildToJointTransform[i1];
      }

      d_st.site = &rb_emlrtRSI;
      b_sp = &d_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &cb_emlrtDCI, &d_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 7, &tb_emlrtBCI, &d_st)]);
      i1 = 6 * r->MotionSubspace->size[1];
      i2 = vJ->size[0] * vJ->size[1];
      vJ->size[0] = 6;
      e_st.site = &rb_emlrtRSI;
      b_sp = &e_st;
      k = (int32_T)emlrtIntegerCheckR2012b(c_i, &cb_emlrtDCI, &e_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (k, 0, 7, &tb_emlrtBCI, &e_st)]);
      vJ->size[1] = r->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(vJ, i2);
      loop_ub = i1 - 1;
      f_st.site = &rb_emlrtRSI;
      b_sp = &f_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &cb_emlrtDCI, &f_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 7, &tb_emlrtBCI, &f_st)]);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        vJ->data[i1] = r->MotionSubspace->data[i1];
      }

      tforminv(TDHOffset, dv);
      tformToSpatialXform(dv, XDHOffset);
      g_st.site = &sb_emlrtRSI;
      mtimes(XDHOffset, vJ, b_S);
      i1 = f->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &x_emlrtBCI, &f_st);
      g_st.site = &sb_emlrtRSI;
      d_mtimes(b_S, *(real_T (*)[6])&f->data[6 * ((int32_T)c_i - 1)], taui);
      loop_ub = emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, 8, &y_emlrtBCI,
        &f_st);
      for (i1 = 0; i1 < 2; i1++) {
        b[i1] = robot->VelocityDoFMap[(loop_ub + (i1 << 3)) - 1];
      }

      if (b[0] > b[1]) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(b[0], &p_emlrtDCI, &f_st);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &db_emlrtBCI, &f_st) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(b[1], &q_emlrtDCI, &f_st);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &eb_emlrtBCI, &f_st);
      }

      k = taui->size[0];
      emlrtSubAssignSizeCheck1dR2017a(i2 - i1, k, &emlrtECI, &f_st);
      loop_ub = i2 - i1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        jointTorq[i1 + i2] = taui->data[i2];
      }
    }

    i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &ab_emlrtDCI, &b_st) - 1;
    pid = robot->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 7, &rb_emlrtBCI,
      &b_st)]->ParentIndex;
    if (pid > 0.0) {
      i1 = X->size[1] - 1;
      i2 = (int32_T)emlrtIntegerCheckR2012b(c_i, &u_emlrtDCI, &b_st) - 1;
      emlrtDynamicBoundsCheckR2012b(i2, 0, i1, &ib_emlrtBCI, &b_st);
      i1 = f->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &bb_emlrtBCI, &b_st);
      i1 = f->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b((int32_T)pid, 1, i1, &ab_emlrtBCI,
        &b_st);
      i1 = f->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(pid, &o_emlrtDCI, &b_st);
      k = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI, &b_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[(int32_T)c_i - 1].f1[i2 + 6 * i1] * f->data[i2 + 6 *
            ((int32_T)c_i - 1)];
        }

        b_y[i1] = f->data[i1 + 6 * (loop_ub - 1)] + d;
      }

      for (i1 = 0; i1 < 6; i1++) {
        f->data[i1 + 6 * (k - 1)] = b_y[i1];
      }
    }
  }

  emxFree_real_T(&taui);
  emxFree_real_T(&b_S);
  emxFree_real_T(&f);
  emxFree_real_T(&vJ);
  emxFree_cell_wrap(&X);
}

static rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'r', 'o', 'b', 'o', 't', 'i', 'c', 's', ':', 'r',
    'o', 'b', 'o', 't', 'm', 'a', 'n', 'i', 'p', ':', 'r', 'i', 'g', 'i', 'd',
    'b', 'o', 'd', 'y', ':', 'N', 'o', 'S', 'u', 'c', 'h', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'F', 'o', 'r', 'B', 'a', 's', 'e' };

  static char_T d_u[5] = { 'J', 'o', 'i', 'n', 't' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->Index == 0.0) {
    st.site = &ub_emlrtRSI;
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &lc_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  return &obj->JointInternal;
}

static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  real_T a[16];
  real_T b[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T b_v[3];
  real_T v[3];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  st.site = &vb_emlrtRSI;
  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (d_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &wb_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    b_st.site = &xb_emlrtRSI;
    c_st.site = &ac_emlrtRSI;
    d_st.site = &bc_emlrtRSI;
    e_st.site = &cc_emlrtRSI;
    normalizeRows(&e_st, v, b_v);
    for (i = 0; i < 16; i++) {
      b[i] = 0.0;
    }

    cat(b_v[0] * b_v[0] * 0.0 + 1.0, b_v[0] * b_v[1] * 0.0 - b_v[2] * 0.0, b_v[0]
        * b_v[2] * 0.0 + b_v[1] * 0.0, b_v[0] * b_v[1] * 0.0 + b_v[2] * 0.0,
        b_v[1] * b_v[1] * 0.0 + 1.0, b_v[1] * b_v[2] * 0.0 - b_v[0] * 0.0, b_v[0]
        * b_v[2] * 0.0 - b_v[1] * 0.0, b_v[1] * b_v[2] * 0.0 + b_v[0] * 0.0,
        b_v[2] * b_v[2] * 0.0 + 1.0, dv);
    permute(dv, dv1);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b[loop_ub + (i << 2)] = dv1[loop_ub + 3 * i];
      }
    }

    b[15] = 1.0;
    break;

   default:
    b_st.site = &yb_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b[i + 12] = v[i] * 0.0;
    }

    for (i = 0; i < 4; i++) {
      b[(i << 2) + 3] = (real_T)iv[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static boolean_T d_strcmp(emxArray_char_T *b)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (b->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (cv[kstr - 1] != b->data[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void rigidBodyJoint_get_JointAxis(rigidBodyJoint *obj, real_T ax[3])
{
  static char_T cv1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  emxArray_char_T *a;
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  boolean_T b_bool;
  boolean_T guard1;
  emxInit_char_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(a, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    a->data[i] = obj->Type->data[i];
  }

  b_bool = false;
  if (a->size[1] != 8) {
  } else {
    loop_ub = 1;
    do {
      exitg1 = 0;
      if (loop_ub - 1 < 8) {
        if (a->data[loop_ub - 1] != cv[loop_ub - 1]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (b_bool) {
    guard1 = true;
  } else {
    i = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->Type->size[1];
    emxEnsureCapacity_char_T(a, i);
    loop_ub = obj->Type->size[1];
    for (i = 0; i < loop_ub; i++) {
      a->data[i] = obj->Type->data[i];
    }

    b_bool = false;
    if (a->size[1] != 9) {
    } else {
      loop_ub = 1;
      do {
        exitg1 = 0;
        if (loop_ub - 1 < 9) {
          if (a->data[loop_ub - 1] != cv1[loop_ub - 1]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      guard1 = true;
    } else {
      for (i = 0; i < 3; i++) {
        ax[i] = rtNaN;
      }
    }
  }

  if (guard1) {
    for (i = 0; i < 3; i++) {
      ax[i] = obj->JointAxisInternal[i];
    }
  }

  emxFree_char_T(&a);
}

static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T d_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  real_T y[3];
  real_T b_matrix;
  int32_T k;
  char_T u[30];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (k = 0; k < 3; k++) {
    b_matrix = matrix[k];
    y[k] = b_matrix * b_matrix;
  }

  b_matrix = sumColumnB(y);
  st.site = &dc_emlrtRSI;
  if (b_matrix < 0.0) {
    for (k = 0; k < 30; k++) {
      u[k] = b_u[k];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 30; k++) {
      u[k] = b_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 4; k++) {
      c_u[k] = d_u[k];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &kc_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, message(&b_st, c_y, d_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  b_matrix = 1.0 / muDoubleScalarSqrt(b_matrix);
  for (k = 0; k < 3; k++) {
    normRowMatrix[k] = matrix[k] * b_matrix;
  }
}

static real_T sumColumnB(real_T x[3])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 2; k++) {
    y += x[k + 1];
  }

  return y;
}

static void cat(real_T varargin_1, real_T varargin_2, real_T varargin_3, real_T
                varargin_4, real_T varargin_5, real_T varargin_6, real_T
                varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void permute(real_T a[9], real_T b[9])
{
  int32_T b_k;
  int32_T k;
  for (k = 0; k < 3; k++) {
    for (b_k = 0; b_k < 3; b_k++) {
      b[k + 3 * b_k] = a[b_k + 3 * k];
    }
  }
}

static void b_rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T q_data[], int32_T q_size[1], real_T T[16])
{
  static const int32_T iv[2] = { 1, 39 };

  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 39 };

  static const int32_T iv5[2] = { 1, 15 };

  static const int32_T iv6[2] = { 1, 45 };

  static const int32_T iv7[2] = { 1, 35 };

  static const int32_T iv8[2] = { 1, 48 };

  static const int32_T iv9[2] = { 1, 5 };

  static char_T j_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T f_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T d_u[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  static char_T h_u[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'a', 'x', 'a',
    'n', 'g', '2', 't', 'f', 'o', 'r', 'm', ':', 'i', 'n', 'c', 'o', 'r', 'r',
    'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T e_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  static char_T l_u[5] = { 'a', 'x', 'a', 'n', 'g' };

  static int8_T iv4[4] = { 0, 0, 0, 1 };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *m;
  const mxArray *y;
  real_T a[16];
  real_T b[16];
  real_T b_a[16];
  real_T b_b[16];
  real_T dv[9];
  real_T dv1[9];
  real_T result_data[4];
  real_T v[3];
  real_T cth;
  real_T sth;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  char_T i_u[48];
  char_T c_u[45];
  char_T u[39];
  char_T g_u[35];
  char_T b_u[15];
  char_T k_u[5];
  int8_T b_I[9];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  for (i = 0; i < 16; i++) {
    a[i] = obj->JointToParentTransform[i];
  }

  st.site = &vb_emlrtRSI;
  emxInit_char_T(&switch_expression, 2);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(switch_expression, i);
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression->data[i] = obj->Type->data[i];
  }

  if (d_strcmp(switch_expression)) {
    loop_ub = 0;
  } else if (b_strcmp(switch_expression)) {
    loop_ub = 1;
  } else {
    loop_ub = -1;
  }

  emxFree_char_T(&switch_expression);
  switch (loop_ub) {
   case 0:
    for (i = 0; i < 16; i++) {
      b[i] = 0.0;
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b[loop_ub + (loop_ub << 2)] = 1.0;
    }
    break;

   case 1:
    b_st.site = &wb_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    if ((q_size[0] == 1) || (q_size[0] == 0)) {
    } else {
      for (i = 0; i < 39; i++) {
        u[i] = d_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 39; i++) {
        u[i] = d_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&st, 39, m, &u[0]);
      emlrtAssign(&d_y, m);
      b_st.site = &qc_emlrtRSI;
      error(&b_st, y, getString(&b_st, b_message(&b_st, d_y, &e_emlrtMCI),
             &e_emlrtMCI), &e_emlrtMCI);
    }

    if (q_size[0] != 0) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
    }

    for (i = 0; i < 3; i++) {
      result_data[i] = v[i];
    }

    for (i = 0; i < loop_ub; i++) {
      result_data[3] = q_data[0];
    }

    b_st.site = &xb_emlrtRSI;
    c_st.site = &ec_emlrtRSI;
    d_st.site = &fc_emlrtRSI;
    e_st.site = &gc_emlrtRSI;
    if (loop_ub + 3 != 4) {
      for (i = 0; i < 35; i++) {
        g_u[i] = h_u[i];
      }

      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&e_st, 35, m, &g_u[0]);
      emlrtAssign(&g_y, m);
      for (i = 0; i < 48; i++) {
        i_u[i] = j_u[i];
      }

      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&e_st, 48, m, &i_u[0]);
      emlrtAssign(&h_y, m);
      for (i = 0; i < 5; i++) {
        k_u[i] = l_u[i];
      }

      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv9[0]);
      emlrtInitCharArrayR2013a(&e_st, 5, m, &k_u[0]);
      emlrtAssign(&i_y, m);
      j_y = NULL;
      m = emlrtCreateDoubleScalar(4.0);
      emlrtAssign(&j_y, m);
      f_st.site = &pc_emlrtRSI;
      error(&f_st, g_y, getString(&f_st, c_message(&f_st, h_y, i_y, j_y,
              &f_emlrtMCI), &f_emlrtMCI), &f_emlrtMCI);
    }

    c_st.site = &ac_emlrtRSI;
    d_st.site = &bc_emlrtRSI;
    e_st.site = &cc_emlrtRSI;
    normalizeRows(&e_st, *(real_T (*)[3])&result_data[0], v);
    emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &yb_emlrtBCI, &d_st);
    cth = muDoubleScalarCos(result_data[3]);
    sth = muDoubleScalarSin(result_data[3]);
    for (i = 0; i < 16; i++) {
      b[i] = 0.0;
    }

    cat(v[0] * v[0] * (1.0 - cth) + cth, v[0] * v[1] * (1.0 - cth) - v[2] * sth,
        v[0] * v[2] * (1.0 - cth) + v[1] * sth, v[0] * v[1] * (1.0 - cth) + v[2]
        * sth, v[1] * v[1] * (1.0 - cth) + cth, v[1] * v[2] * (1.0 - cth) - v[0]
        * sth, v[0] * v[2] * (1.0 - cth) - v[1] * sth, v[1] * v[2] * (1.0 - cth)
        + v[0] * sth, v[2] * v[2] * (1.0 - cth) + cth, dv);
    permute(dv, dv1);
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b[loop_ub + (i << 2)] = dv1[loop_ub + 3 * i];
      }
    }

    b[15] = 1.0;
    break;

   default:
    b_st.site = &yb_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    b_st.site = &tb_emlrtRSI;
    if (q_size[0] != 1) {
      if (q_size[0] == 1) {
        for (i = 0; i < 45; i++) {
          c_u[i] = f_u[i];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &c_u[0]);
        emlrtAssign(&c_y, m);
        for (i = 0; i < 45; i++) {
          c_u[i] = f_u[i];
        }

        f_y = NULL;
        m = emlrtCreateCharArray(2, &iv6[0]);
        emlrtInitCharArrayR2013a(&b_st, 45, m, &c_u[0]);
        emlrtAssign(&f_y, m);
        c_st.site = &nc_emlrtRSI;
        error(&c_st, c_y, getString(&c_st, b_message(&c_st, f_y, &h_emlrtMCI),
               &h_emlrtMCI), &h_emlrtMCI);
      } else {
        for (i = 0; i < 15; i++) {
          b_u[i] = e_u[i];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        for (i = 0; i < 15; i++) {
          b_u[i] = e_u[i];
        }

        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv5[0]);
        emlrtInitCharArrayR2013a(&b_st, 15, m, &b_u[0]);
        emlrtAssign(&e_y, m);
        c_st.site = &oc_emlrtRSI;
        error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &g_emlrtMCI),
               &g_emlrtMCI), &g_emlrtMCI);
      }
    }

    for (i = 0; i < 9; i++) {
      b_I[i] = 0;
    }

    for (loop_ub = 0; loop_ub < 3; loop_ub++) {
      b_I[loop_ub + 3 * loop_ub] = 1;
    }

    cth = q_data[0];
    for (i = 0; i < 3; i++) {
      for (loop_ub = 0; loop_ub < 3; loop_ub++) {
        b[loop_ub + (i << 2)] = (real_T)b_I[loop_ub + 3 * i];
      }

      b[i + 12] = v[i] * cth;
    }

    for (i = 0; i < 4; i++) {
      b[(i << 2) + 3] = (real_T)iv4[i];
    }
    break;
  }

  for (i = 0; i < 16; i++) {
    b_b[i] = obj->ChildToJointTransform[i];
  }

  for (i = 0; i < 4; i++) {
    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      b_a[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        b_a[i + (loop_ub << 2)] += a[i + (i1 << 2)] * b[i1 + (loop_ub << 2)];
      }
    }

    for (loop_ub = 0; loop_ub < 4; loop_ub++) {
      T[i + (loop_ub << 2)] = 0.0;
      for (i1 = 0; i1 < 4; i1++) {
        T[i + (loop_ub << 2)] += b_a[i + (i1 << 2)] * b_b[i1 + (loop_ub << 2)];
      }
    }
  }
}

static void tforminv(real_T T[16], real_T Tinv[16])
{
  static int8_T iv[4] = { 0, 0, 0, 1 };

  real_T R[9];
  real_T b_R[9];
  real_T c_R[3];
  int32_T i;
  int32_T i1;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      R[i1 + 3 * i] = T[i + (i1 << 2)];
    }
  }

  for (i = 0; i < 9; i++) {
    b_R[i] = -R[i];
  }

  for (i = 0; i < 3; i++) {
    c_R[i] = 0.0;
    for (i1 = 0; i1 < 3; i1++) {
      Tinv[i1 + (i << 2)] = R[i1 + 3 * i];
      c_R[i] += b_R[i + 3 * i1] * T[i1 + 12];
    }

    Tinv[i + 12] = c_R[i];
  }

  for (i = 0; i < 4; i++) {
    Tinv[(i << 2) + 3] = (real_T)iv[i];
  }
}

static void tformToSpatialXform(real_T T[16], real_T X[36])
{
  real_T R[9];
  real_T dv[9];
  real_T dv1[9];
  int32_T i;
  int32_T i1;
  int32_T i2;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      R[i1 + 3 * i] = T[i1 + (i << 2)];
    }
  }

  dv[0] = 0.0;
  dv[3] = -T[14];
  dv[6] = T[13];
  dv[1] = T[14];
  dv[4] = 0.0;
  dv[7] = -T[12];
  dv[2] = -T[13];
  dv[5] = T[12];
  dv[8] = 0.0;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      dv1[i + 3 * i1] = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        dv1[i + 3 * i1] += dv[i + 3 * i2] * R[i2 + 3 * i1];
      }

      X[i1 + 6 * i] = R[i1 + 3 * i];
      X[i1 + 6 * (i + 3)] = 0.0;
    }
  }

  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      X[(i1 + 6 * i) + 3] = dv1[i1 + 3 * i];
      X[(i1 + 6 * (i + 3)) + 3] = R[i1 + 3 * i];
    }
  }
}

static void mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if (B->size[1] == 0) {
    C->size[0] = 6;
    C->size[1] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)6;
    i = C->size[0] * C->size[1];
    C->size[0] = 6;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t, &B->
          data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void b_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[2],
                     real_T C[6])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[1] == 0) || (B_size[1] == 0)) {
    for (i = 0; i < 6; i++) {
      C[i] = 0.0;
    }
  } else {
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)1;
    ldc_t = (ptrdiff_t)6;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

static void dynamic_size_checks(const emlrtStack *sp, int32_T b_size[1], int32_T
  innerDimA, int32_T innerDimB)
{
  static const int32_T iv[2] = { 1, 15 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 15 };

  static const int32_T iv3[2] = { 1, 45 };

  static char_T d_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[45];
  char_T u[15];
  st.prev = sp;
  st.tls = sp->tls;
  if (innerDimA != innerDimB) {
    if (b_size[0] == 1) {
      for (i = 0; i < 45; i++) {
        b_u[i] = d_u[i];
      }

      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &b_u[0]);
      emlrtAssign(&b_y, m);
      for (i = 0; i < 45; i++) {
        b_u[i] = d_u[i];
      }

      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 45, m, &b_u[0]);
      emlrtAssign(&d_y, m);
      st.site = &nc_emlrtRSI;
      error(&st, b_y, getString(&st, b_message(&st, d_y, &h_emlrtMCI),
             &h_emlrtMCI), &h_emlrtMCI);
    } else {
      for (i = 0; i < 15; i++) {
        u[i] = c_u[i];
      }

      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &u[0]);
      emlrtAssign(&y, m);
      for (i = 0; i < 15; i++) {
        u[i] = c_u[i];
      }

      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 15, m, &u[0]);
      emlrtAssign(&c_y, m);
      st.site = &oc_emlrtRSI;
      error(&st, y, getString(&st, b_message(&st, c_y, &g_emlrtMCI), &g_emlrtMCI),
            &g_emlrtMCI);
    }
  }
}

static void c_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[1],
                     real_T C[6])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[1] == 0) || (B_size[0] == 0)) {
    for (i = 0; i < 6; i++) {
      C[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)6;
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)B_size[0];
    ldc_t = (ptrdiff_t)6;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B_data[0], &ldb_t, &beta1, &C[0], &ldc_t);
  }
}

static void crossMotion(real_T v[6], real_T motionVec[6], real_T motionVecDot[6])
{
  real_T b_sc1[36];
  real_T sc1[9];
  int32_T i;
  int32_T i1;
  sc1[0] = 0.0;
  sc1[3] = -v[2];
  sc1[6] = v[1];
  sc1[1] = v[2];
  sc1[4] = 0.0;
  sc1[7] = -v[0];
  sc1[2] = -v[1];
  sc1[5] = v[0];
  sc1[8] = 0.0;
  b_sc1[3] = 0.0;
  b_sc1[9] = -v[5];
  b_sc1[15] = v[4];
  b_sc1[4] = v[5];
  b_sc1[10] = 0.0;
  b_sc1[16] = -v[3];
  b_sc1[5] = -v[4];
  b_sc1[11] = v[3];
  b_sc1[17] = 0.0;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_sc1[i1 + 6 * i] = sc1[i1 + 3 * i];
      b_sc1[i1 + 6 * (i + 3)] = 0.0;
      b_sc1[(i1 + 6 * (i + 3)) + 3] = sc1[i1 + 3 * i];
    }
  }

  for (i = 0; i < 6; i++) {
    motionVecDot[i] = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      motionVecDot[i] += b_sc1[i + 6 * i1] * motionVec[i1];
    }
  }
}

static void crossForce(real_T v[6], real_T forceVec[6], real_T forceVecDot[6])
{
  real_T b_sc1[36];
  real_T sc1[9];
  int32_T i;
  int32_T i1;
  sc1[0] = 0.0;
  sc1[3] = -v[2];
  sc1[6] = v[1];
  sc1[1] = v[2];
  sc1[4] = 0.0;
  sc1[7] = -v[0];
  sc1[2] = -v[1];
  sc1[5] = v[0];
  sc1[8] = 0.0;
  b_sc1[18] = 0.0;
  b_sc1[24] = -v[5];
  b_sc1[30] = v[4];
  b_sc1[19] = v[5];
  b_sc1[25] = 0.0;
  b_sc1[31] = -v[3];
  b_sc1[20] = -v[4];
  b_sc1[26] = v[3];
  b_sc1[32] = 0.0;
  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_sc1[i1 + 6 * i] = sc1[i1 + 3 * i];
      b_sc1[(i1 + 6 * i) + 3] = 0.0;
      b_sc1[(i1 + 6 * (i + 3)) + 3] = sc1[i1 + 3 * i];
    }
  }

  for (i = 0; i < 6; i++) {
    forceVecDot[i] = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      forceVecDot[i] += b_sc1[i + 6 * i1] * forceVec[i1];
    }
  }
}

static boolean_T e_strcmp(emxArray_char_T *a)
{
  static char_T cv[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 5) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 5) {
        if (a->data[kstr - 1] != cv[kstr - 1]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void d_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T alpha1;
  real_T beta1;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  if (A->size[1] == 0) {
    C->size[0] = 0;
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)1;
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0];
    C->size[0] = A->size[1];
    emxEnsureCapacity_real_T1(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void handle_matlabCodegenDestructor(const emlrtStack *sp,
  robotics_manip_internal_CollisionSet *obj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionGeometry r;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    st.site = &hc_emlrtRSI;
    d = obj->Size;
    i = (int32_T)d - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &e_emlrtRTEI, &st);
    for (b_i = 0; b_i <= i; b_i++) {
      b_st.site = &ic_emlrtRSI;
      i1 = obj->CollisionGeometries->size[1] - 1;
      r = obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
        i1, &bc_emlrtBCI, &b_st)];
      c_st.site = &jc_emlrtRSI;
      collisioncodegen_destructGeometry(&r.CollisionPrimitive);
      i1 = obj->CollisionGeometries->size[1] - 1;
      expl_temp.CollisionPrimitive = r.CollisionPrimitive;
      obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
        &ac_emlrtBCI, &st)] = expl_temp;
    }
  }
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0],
    "message", true, location);
}

static real_T eml_rand_mt19937ar(const emlrtStack *sp, uint32_T d_state[625])
{
  static const int32_T iv[2] = { 1, 37 };

  static const int32_T iv1[2] = { 1, 37 };

  static char_T c_u[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T r;
  int32_T exitg1;
  int32_T k;
  int32_T kk;
  uint32_T u[2];
  uint32_T mti;
  uint32_T y;
  char_T b_u[37];
  boolean_T exitg2;
  boolean_T isvalid;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &p_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
      mti = d_state[624] + 1U;
      if (mti >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (d_state[kk] & 2147483648U) | (d_state[kk + 1] & 2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          d_state[kk] = d_state[kk + 397] ^ y;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (d_state[kk + 227] & 2147483648U) | (d_state[kk + 228] &
            2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          d_state[kk + 227] = d_state[kk] ^ y;
        }

        y = (d_state[623] & 2147483648U) | (d_state[0] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        d_state[623] = d_state[396] ^ y;
        mti = 1U;
      }

      y = d_state[(int32_T)mti - 1];
      d_state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      y ^= y >> 18U;
      u[k] = y;
    }

    r = 1.1102230246251565E-16 * ((real_T)(u[0] >> 5U) * 6.7108864E+7 + (real_T)
      (u[1] >> 6U));
    if (r == 0.0) {
      if ((d_state[624] >= 1U) && (d_state[624] < 625U)) {
        isvalid = true;
      } else {
        isvalid = false;
      }

      if (isvalid) {
        isvalid = false;
        k = 0;
        exitg2 = false;
        while ((!exitg2) && (k + 1 < 625)) {
          if (d_state[k] == 0U) {
            k++;
          } else {
            isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!isvalid) {
        for (k = 0; k < 37; k++) {
          b_u[k] = c_u[k];
        }

        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        for (k = 0; k < 37; k++) {
          b_u[k] = c_u[k];
        }

        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&st, 37, m, &b_u[0]);
        emlrtAssign(&c_y, m);
        b_st.site = &mc_emlrtRSI;
        error(&b_st, b_y, getString(&b_st, b_message(&b_st, c_y, &b_emlrtMCI),
               &b_emlrtMCI), &b_emlrtMCI);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GravityTorqueBlock *pStruct)
{
  emxInitStruct_robotics_manip_in(&pStruct->TreeInternal);
}

static void emxInitStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  b_emxInitStruct_robotics_manip_in(&pStruct->Base);
  emxInitMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void b_emxInitStruct_robotics_manip_in(robotics_manip_internal_RigidBody *
  pStruct)
{
  emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
  c_emxInitStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxInit_char_T(emxArray_char_T **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocMex(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxInit_char_T(&pStruct->Type, 2);
  emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void c_emxInitStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxInit_robotics_manip_internal(&pStruct->CollisionGeometries, 2);
}

static void emxInit_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray, int32_T numDimensions)
{
  emxArray_robotics_manip_interna *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_robotics_manip_interna *)emlrtMallocMex(sizeof
    (emxArray_robotics_manip_interna));
  emxArray = *pEmxArray;
  emxArray->data = (robotics_manip_internal_CollisionGeometry *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInitMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[16])
{
  int32_T i;
  for (i = 0; i < 16; i++) {
    b_emxInitStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

static void emxFreeStruct_robotics_manip_in(robotics_manip_internal_RigidBody
  *pStruct)
{
  emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
  b_emxFreeStruct_robotics_manip_in(&pStruct->CollisionsInternal);
}

static void emxFreeStruct_rigidBodyJoint(rigidBodyJoint *pStruct)
{
  emxFree_char_T(&pStruct->Type);
  emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void emxFree_robotics_manip_internal(emxArray_robotics_manip_interna
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_robotics_manip_interna *)NULL) {
    if (((*pEmxArray)->data != (robotics_manip_internal_CollisionGeometry *)NULL)
        && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_robotics_manip_interna *)NULL;
  }
}

static void b_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_CollisionSet *pStruct)
{
  emxFree_robotics_manip_internal(&pStruct->CollisionGeometries);
}

static void c_emxFreeStruct_robotics_manip_in
  (robotics_manip_internal_RigidBodyTree *pStruct)
{
  emxFreeStruct_robotics_manip_in(&pStruct->Base);
  emxFreeMatrix_robotics_manip_in(pStruct->_pobj0);
}

static void emxFreeMatrix_robotics_manip_in(robotics_manip_internal_RigidBody
  pMatrix[16])
{
  int32_T i;
  for (i = 0; i < 16; i++) {
    emxFreeStruct_robotics_manip_in(&pMatrix[i]);
  }
}

static void emxFreeStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_GravityTorqueBlock *pStruct)
{
  c_emxFreeStruct_robotics_manip_in(&pStruct->TreeInternal);
}

static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof
      (robotics_manip_internal_CollisionGeometry));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof
             (robotics_manip_internal_CollisionGeometry) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (robotics_manip_internal_CollisionGeometry *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(cell_wrap));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(cell_wrap) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (cell_wrap *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions)
{
  emxArray_cell_wrap *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_cell_wrap *)emlrtMallocMex(sizeof(emxArray_cell_wrap));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray)
{
  if (*pEmxArray != (emxArray_cell_wrap *)NULL) {
    if (((*pEmxArray)->data != (cell_wrap *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap *)NULL;
  }
}

static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtMallocMex((uint32_T)i * sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void init_simulink_io_address(InstanceStruct_dZsieINmXzqG95KkvckpyD
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[2])cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y0 = (real_T (*)[2])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_dZsieINmXzqG95KkvckpyD(SimStruct *S, int_T tid)
{
  InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance =
    (InstanceStruct_dZsieINmXzqG95KkvckpyD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_dZsieINmXzqG95KkvckpyD(SimStruct *S)
{
  InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance =
    (InstanceStruct_dZsieINmXzqG95KkvckpyD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_dZsieINmXzqG95KkvckpyD(SimStruct *S, int_T tid)
{
  InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance =
    (InstanceStruct_dZsieINmXzqG95KkvckpyD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlDerivatives_dZsieINmXzqG95KkvckpyD(SimStruct *S)
{
  InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance =
    (InstanceStruct_dZsieINmXzqG95KkvckpyD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_derivative(moduleInstance);
}

static void mdlTerminate_dZsieINmXzqG95KkvckpyD(SimStruct *S)
{
  InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance =
    (InstanceStruct_dZsieINmXzqG95KkvckpyD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_dZsieINmXzqG95KkvckpyD(SimStruct *S)
{
  InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance =
    (InstanceStruct_dZsieINmXzqG95KkvckpyD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_dZsieINmXzqG95KkvckpyD(SimStruct *S)
{
  InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance =
    (InstanceStruct_dZsieINmXzqG95KkvckpyD *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_dZsieINmXzqG95KkvckpyD(SimStruct *S)
{
  InstanceStruct_dZsieINmXzqG95KkvckpyD *moduleInstance =
    (InstanceStruct_dZsieINmXzqG95KkvckpyD *)calloc(1, sizeof
    (InstanceStruct_dZsieINmXzqG95KkvckpyD));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_dZsieINmXzqG95KkvckpyD);
  ssSetmdlInitializeConditions(S, mdlInitialize_dZsieINmXzqG95KkvckpyD);
  ssSetmdlUpdate(S, mdlUpdate_dZsieINmXzqG95KkvckpyD);
  ssSetmdlDerivatives(S, mdlDerivatives_dZsieINmXzqG95KkvckpyD);
  ssSetmdlTerminate(S, mdlTerminate_dZsieINmXzqG95KkvckpyD);
  ssSetmdlEnable(S, mdlEnable_dZsieINmXzqG95KkvckpyD);
  ssSetmdlDisable(S, mdlDisable_dZsieINmXzqG95KkvckpyD);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_dZsieINmXzqG95KkvckpyD(SimStruct *S)
{
}

void method_dispatcher_dZsieINmXzqG95KkvckpyD(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_dZsieINmXzqG95KkvckpyD(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_dZsieINmXzqG95KkvckpyD(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: dZsieINmXzqG95KkvckpyD.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_dZsieINmXzqG95KkvckpyD_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,2);
  elem_6 = mxCreateString("blas.h");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("collisioncodegen_api.hpp");
  mxSetCell(elem_5,1,elem_7);
  mxSetCell(elem_3,1,elem_5);
  elem_8 = mxCreateCellMatrix(1,2);
  elem_9 = mxCreateString("");
  mxSetCell(elem_8,0,elem_9);
  elem_10 = mxCreateString("");
  mxSetCell(elem_8,1,elem_10);
  mxSetCell(elem_3,2,elem_8);
  elem_11 = mxCreateCellMatrix(1,2);
  elem_12 = mxCreateString("");
  mxSetCell(elem_11,0,elem_12);
  elem_13 = mxCreateString("");
  mxSetCell(elem_11,1,elem_13);
  mxSetCell(elem_3,3,elem_11);
  mxSetCell(elem_1,1,elem_3);
  elem_14 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_14);
  elem_15 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_15);
  elem_16 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_16);
  elem_17 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_17);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_18 = mxCreateCellMatrix(1,2);
  elem_19 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_18,0,elem_19);
  elem_20 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_18,1,elem_20);
  mxSetCell(mxBIArgs,1,elem_18);
  elem_21 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_21);
  return mxBIArgs;
}

mxArray *cgxe_dZsieINmXzqG95KkvckpyD_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
