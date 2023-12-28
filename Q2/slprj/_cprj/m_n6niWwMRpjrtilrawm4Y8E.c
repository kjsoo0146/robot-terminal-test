/* Include files */

#include "modelInterface.h"
#include "m_n6niWwMRpjrtilrawm4Y8E.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 20,    /* lineNo */
  "ForwardDynamicsBlock",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\Forwa"
  "rdDynamicsBlock.m"                  /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
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
  "ForwardDynamicsBlock",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\Forwa"
  "rdDynamicsBlock.m"                  /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 111, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 187, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 194, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 203, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 184, /* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 1318,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 71,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 96,  /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 106, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 140, /* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 1,   /* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 27,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 46,  /* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 145, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 163, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 158, /* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 23,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 28, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 41, /* lineNo */
  "ForwardDynamicsBlock",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotsimulink\\robotslmanip\\+robotics\\+slmanip\\+internal\\+block\\Forwa"
  "rdDynamicsBlock.m"                  /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 422,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 425,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 428,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 39, /* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 41, /* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 57, /* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 64, /* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 66, /* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 74, /* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 76, /* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 39, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 94, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 125,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 447,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 512,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 396,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 397,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 399,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 24, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\axang2tform.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 37, /* lineNo */
  "axang2rotm",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\axang2rotm.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 15, /* lineNo */
  "normalizeRows",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\normalizeRows.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 69, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 21, /* lineNo */
  "axang2tform",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\axang2tform.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 21, /* lineNo */
  "validateNumericMatrix",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\+validation\\validateNumericMatr"
  "ix.m"                               /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 93, /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 42, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 319,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 146,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 152,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 158,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 159,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 160,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 188,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 189,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 191,/* lineNo */
  "RigidBodyTreeDynamics",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 20, /* lineNo */
  "specialCholesky",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 22, /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 255,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 326,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 28,  /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 288, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 18,  /* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 138, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 133, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 122, /* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 419, /* lineNo */
  15,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 52,  /* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 33,    /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 33,  /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 432,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 442,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 425, /* lineNo */
  104,                                 /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 425, /* lineNo */
  104,                                 /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 23,  /* lineNo */
  13,                                  /* colNo */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 31,  /* lineNo */
  15,                                  /* colNo */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 31,  /* lineNo */
  17,                                  /* colNo */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 34,  /* lineNo */
  20,                                  /* colNo */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "specialCholesky",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\specialCholesky.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  433,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  433,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { 1,   /* iFirst */
  2,                                   /* iLast */
  433,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  434,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  443,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  436,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  436,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  436,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 436, /* lineNo */
  23,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  448,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  448,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  448,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  445,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  445,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 445, /* lineNo */
  39,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  445,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  445,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  437,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  446,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 25,  /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 25,  /* lineNo */
  25,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 27,  /* lineNo */
  24,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 35,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtDCInfo n_emlrtDCI = { 41,  /* lineNo */
  71,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  41,                                  /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 41,  /* lineNo */
  76,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  41,                                  /* lineNo */
  76,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 50,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtBCInfo qb_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  52,                                  /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 77,  /* lineNo */
  50,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  77,                                  /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  98,                                  /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 100, /* lineNo */
  59,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 100, /* lineNo */
  59,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 104, /* lineNo */
  46,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  104,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 68,  /* lineNo */
  23,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 68,  /* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 68,  /* lineNo */
  34,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 68,  /* lineNo */
  39,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  68,                                  /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtDCInfo x_emlrtDCI = { 80,  /* lineNo */
  31,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 80,  /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 80, /* lineNo */
  42,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 80, /* lineNo */
  47,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  80,                                  /* lineNo */
  29,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtDCInfo cb_emlrtDCI = { 81, /* lineNo */
  31,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 81, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 81, /* lineNo */
  42,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 81, /* lineNo */
  47,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  81,                                  /* lineNo */
  29,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtDCInfo gb_emlrtDCI = { 100,/* lineNo */
  24,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 100,/* lineNo */
  29,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  100,                                 /* lineNo */
  17,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  50,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  67,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  83,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 30, /* lineNo */
  23,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 30, /* lineNo */
  23,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 30, /* lineNo */
  29,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 31, /* lineNo */
  31,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 32, /* lineNo */
  30,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 30, /* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 31, /* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 32, /* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  51,                                  /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 51, /* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  44,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 54, /* lineNo */
  31,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 54, /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  57,                                  /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 57, /* lineNo */
  63,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  71,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  58,                                  /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 58, /* lineNo */
  51,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  59,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  101,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  102,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 102,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 105,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  74,                                  /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 74, /* lineNo */
  51,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  76,                                  /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 76, /* lineNo */
  54,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  36,                                  /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "axang2rotm",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+internal\\axang2rotm.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 130,/* lineNo */
  24,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 130,/* lineNo */
  24,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 131,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 136,/* lineNo */
  26,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo g_emlrtRTEI = { 139,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 145,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtDCInfo ec_emlrtDCI = { 156,/* lineNo */
  28,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  156,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 156,/* lineNo */
  33,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  156,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 157,/* lineNo */
  34,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  157,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 157,/* lineNo */
  39,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  157,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 158,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 158,/* lineNo */
  41,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  158,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 171,/* lineNo */
  51,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  173,                                 /* lineNo */
  74,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  173,                                 /* lineNo */
  83,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  176,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  176,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 187,/* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { 1,  /* iFirst */
  8,                                   /* iLast */
  193,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 198,/* lineNo */
  45,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = { 198,/* lineNo */
  25,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = { 194,/* lineNo */
  25,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  194,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = { 194,/* lineNo */
  30,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { 1,  /* iFirst */
  2,                                   /* iLast */
  194,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  194,                                 /* lineNo */
  21,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m"/* pName */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  174,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = { 132,/* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo qc_emlrtDCI = { 133,/* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo rc_emlrtDCI = { 135,/* lineNo */
  27,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo sc_emlrtDCI = { 132,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo tc_emlrtDCI = { 133,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo uc_emlrtDCI = { 135,/* lineNo */
  13,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  146,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  188,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vc_emlrtDCI = { 188,/* lineNo */
  41,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  196,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wc_emlrtDCI = { 196,/* lineNo */
  36,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  189,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xc_emlrtDCI = { 189,/* lineNo */
  46,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { 0,  /* iFirst */
  7,                                   /* iLast */
  191,                                 /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yc_emlrtDCI = { 191,/* lineNo */
  48,                                  /* colNo */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  166,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  178,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  162,                                 /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  174,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "RigidBodyTreeDynamics",             /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTreeDynamics.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo j_emlrtRTEI = { 254,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtBCInfo hf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  79,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo sc_emlrtRSI = { 13, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 28, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 133,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 138,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 419,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 122,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 18, /* lineNo */
  "validatencols",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 288,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__setup(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance, const emlrtStack *sp);
static void SystemCore_setup(const emlrtStack *sp,
  robotics_slmanip_internal_block_ForwardDynamicsBlock *obj);
static void ForwardDynamicsBlock_setupImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_ForwardDynamicsBlock *obj);
static void RigidBodyTree_defaultInitializeBodiesCellArray(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *obj, robotics_manip_internal_RigidBody *
  iobj_0);
static boolean_T b_strcmp(emxArray_char_T *a);
static boolean_T c_strcmp(emxArray_char_T *a);
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
static void mw__internal__call__reset(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance, const emlrtStack *sp, real_T b_u0[2], real_T b_u1[2], real_T
  b_u2[2], real_T b_u3[48], real_T c_y0[2]);
static void RigidBodyTreeDynamics_massMatrix(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *robot, real_T q[2], emxArray_real_T *H,
  emxArray_real_T *lambda);
static rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
  robotics_manip_internal_RigidBody *obj);
static void rigidBodyJoint_transformBodyToParent(const emlrtStack *sp,
  rigidBodyJoint *obj, real_T T[16]);
static boolean_T d_strcmp(emxArray_char_T *a);
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
static void b_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C);
static void c_mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C);
static void eml_find(const emlrtStack *sp, boolean_T x[8], int32_T i_data[],
                     int32_T i_size[1]);
static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2]);
static void eml_float_colon(const emlrtStack *sp, real_T a, real_T b,
  emxArray_real_T *y);
static void RigidBodyTreeDynamics_inverseDynamics(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *robot, real_T q[2], real_T qdot[2],
  emxArray_real_T *qddot, real_T fext[48], real_T tau[2]);
static void d_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[2],
                     real_T C[6]);
static void dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b,
  int32_T innerDimA, int32_T innerDimB);
static void e_mtimes(emxArray_real_T *A, emxArray_real_T *B, real_T C[6]);
static void crossMotion(real_T v[6], real_T motionVec[6], real_T motionVecDot[6]);
static void crossForce(real_T v[6], real_T forceVec[6], real_T forceVecDot[6]);
static void f_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C);
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
static void b_sqrt(const emlrtStack *sp, real_T *x);
static void binary_expand_op(emxArray_real_T *in1, real_T in2[2]);
static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_ForwardDynamicsBlock *pStruct);
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
  (robotics_slmanip_internal_block_ForwardDynamicsBlock *pStruct);
static void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_robotics_mani(emxArray_robotics_manip_interna
  *emxArray, int32_T oldNumel);
static void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int32_T
  oldNumel);
static void emxInit_real_T1(emxArray_real_T **pEmxArray, int32_T numDimensions);
static void emxEnsureCapacity_cell_wrap(emxArray_cell_wrap *emxArray, int32_T
  oldNumel);
static void emxInit_cell_wrap(emxArray_cell_wrap **pEmxArray, int32_T
  numDimensions);
static void emxFree_cell_wrap(emxArray_cell_wrap **pEmxArray);
static int32_T div_nzp_s32(int32_T numerator, int32_T denominator);
static void init_simulink_io_address(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance)
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

static void cgxe_mdl_initialize(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
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

static void cgxe_mdl_outputs(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T dv[2];
  int32_T i;
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *moduleInstance->u0,
    *moduleInstance->u1, *moduleInstance->u2, *moduleInstance->u3, dv);
  for (i = 0; i < 2; i++) {
    (*moduleInstance->b_y0)[i] = dv[i];
  }

  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
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
  (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance)
{
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
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance, const emlrtStack *sp)
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

static void mw__internal__call__setup(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
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
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static void SystemCore_setup(const emlrtStack *sp,
  robotics_slmanip_internal_block_ForwardDynamicsBlock *obj)
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
  ForwardDynamicsBlock_setupImpl(&st, obj);
}

static void ForwardDynamicsBlock_setupImpl(const emlrtStack *sp,
  robotics_slmanip_internal_block_ForwardDynamicsBlock *obj)
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
  b_st.site = &i_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  obj->TreeInternal.NumBodies = 8.0;
  b_st.site = &m_emlrtRSI;
  RigidBodyTree_defaultInitializeBodiesCellArray(&b_st, &obj->TreeInternal,
    &obj->TreeInternal._pobj0[0]);
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[0] = d_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[8]);
  obj->TreeInternal.Bodies[0]->Index = 1.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[1] = e_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[9]);
  obj->TreeInternal.Bodies[1]->Index = 2.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[2] = f_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[10]);
  obj->TreeInternal.Bodies[2]->Index = 3.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[3] = g_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[11]);
  obj->TreeInternal.Bodies[3]->Index = 4.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[4] = h_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[12]);
  obj->TreeInternal.Bodies[4]->Index = 5.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[5] = i_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[13]);
  obj->TreeInternal.Bodies[5]->Index = 6.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[6] = j_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[14]);
  obj->TreeInternal.Bodies[6]->Index = 7.0;
  b_st.site = &j_emlrtRSI;
  obj->TreeInternal.Bodies[7] = k_RigidBody_RigidBody(&b_st,
    &obj->TreeInternal._pobj0[15]);
  obj->TreeInternal.Bodies[7]->Index = 8.0;
  b_st.site = &k_emlrtRSI;
  RigidBodyTree_set_Gravity(&obj->TreeInternal);
  obj->TreeInternal.VelocityNumber = 2.0;
  for (i = 0; i < 16; i++) {
    obj->TreeInternal.PositionDoFMap[i] = (real_T)iv[i];
  }

  for (i = 0; i < 16; i++) {
    obj->TreeInternal.VelocityDoFMap[i] = (real_T)iv[i];
  }

  b_st.site = &l_emlrtRSI;
  l_RigidBody_RigidBody(&b_st, &obj->TreeInternal.Base);
  obj->TreeInternal.Base.Index = 0.0;
  obj->TreeInternal.matlabCodegenIsDeleted = false;
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
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[0].NameInternal->size[0] * iobj_0[0].NameInternal->size[1];
  iobj_0[0].NameInternal->size[0] = 1;
  iobj_0[0].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[0].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[0].NameInternal->data[i] = bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
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

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[0].CollisionsInternal);
  iobj_0[0].matlabCodegenIsDeleted = false;
  obj->Bodies[0] = &iobj_0[0];
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[1].NameInternal->size[0] * iobj_0[1].NameInternal->size[1];
  iobj_0[1].NameInternal->size[0] = 1;
  iobj_0[1].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[1].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[1].NameInternal->data[i] = b_bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
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

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[1].CollisionsInternal);
  iobj_0[1].matlabCodegenIsDeleted = false;
  obj->Bodies[1] = &iobj_0[1];
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[2].NameInternal->size[0] * iobj_0[2].NameInternal->size[1];
  iobj_0[2].NameInternal->size[0] = 1;
  iobj_0[2].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[2].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[2].NameInternal->data[i] = c_bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
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

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[2].CollisionsInternal);
  iobj_0[2].matlabCodegenIsDeleted = false;
  obj->Bodies[2] = &iobj_0[2];
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[3].NameInternal->size[0] * iobj_0[3].NameInternal->size[1];
  iobj_0[3].NameInternal->size[0] = 1;
  iobj_0[3].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[3].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[3].NameInternal->data[i] = d_bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
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

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[3].CollisionsInternal);
  iobj_0[3].matlabCodegenIsDeleted = false;
  obj->Bodies[3] = &iobj_0[3];
  st.site = &n_emlrtRSI;
  b_st.site = &o_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  i = iobj_0[4].NameInternal->size[0] * iobj_0[4].NameInternal->size[1];
  iobj_0[4].NameInternal->size[0] = 1;
  iobj_0[4].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(iobj_0[4].NameInternal, i);
  for (i = 0; i < 10; i++) {
    iobj_0[4].NameInternal->data[i] = e_bname[i];
  }

  b_st.site = &p_emlrtRSI;
  c_st.site = &r_emlrtRSI;
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

  b_st.site = &q_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &iobj_0[4].CollisionsInternal);
  iobj_0[4].matlabCodegenIsDeleted = false;
  obj->Bodies[4] = &iobj_0[4];
  st.site = &n_emlrtRSI;
  obj->Bodies[5] = RigidBody_RigidBody(&st, &iobj_0[5]);
  st.site = &n_emlrtRSI;
  obj->Bodies[6] = b_RigidBody_RigidBody(&st, &iobj_0[6]);
  st.site = &n_emlrtRSI;
  obj->Bodies[7] = c_RigidBody_RigidBody(&st, &iobj_0[7]);
}

static boolean_T b_strcmp(emxArray_char_T *a)
{
  static char_T cv[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 8) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 8) {
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

static boolean_T c_strcmp(emxArray_char_T *a)
{
  static char_T cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if (a->size[1] != 9) {
  } else {
    kstr = 1;
    do {
      exitg1 = 0;
      if (kstr - 1 < 9) {
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

static robotics_manip_internal_CollisionSet *CollisionSet_CollisionSet(const
  emlrtStack *sp, robotics_manip_internal_CollisionSet *obj)
{
  void* defaultCollisionObj_GeometryInternal;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_robotics_manip_interna *r;
  robotics_manip_internal_CollisionGeometry expl_temp;
  robotics_manip_internal_CollisionSet *b_obj;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  b_obj = obj;
  b_obj->Size = 0.0;
  st.site = &t_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  b_obj->MaxElements = 0.0;
  emxInit_robotics_manip_internal(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  d = emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &b_emlrtDCI,
    (emlrtConstCTX)sp);
  r->size[1] = (int32_T)emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtConstCTX)sp);
  emxEnsureCapacity_robotics_mani(r, i);
  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = r->size[0];
  b_obj->CollisionGeometries->size[1] = r->size[1];
  emxFree_robotics_manip_internal(&r);
  emxEnsureCapacity_robotics_mani(b_obj->CollisionGeometries, i);
  defaultCollisionObj_GeometryInternal = NULL;
  st.site = &u_emlrtRSI;
  d = b_obj->MaxElements;
  i = (int32_T)d - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
    &emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i <= i; b_i++) {
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    expl_temp.CollisionPrimitive = defaultCollisionObj_GeometryInternal;
    b_obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &emlrtBCI, (emlrtConstCTX)sp)] = expl_temp;
  }

  b_obj->matlabCodegenIsDeleted = false;
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
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &q_emlrtRSI;
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
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &q_emlrtRSI;
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
  st.site = &o_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(b_obj->NameInternal, i);
  for (i = 0; i < 10; i++) {
    b_obj->NameInternal->data[i] = bname[i];
  }

  st.site = &p_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &q_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &v_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &v_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &v_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &v_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &v_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &v_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &v_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &v_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
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
  st.site = &o_emlrtRSI;
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

  st.site = &x_emlrtRSI;
  b_st.site = &r_emlrtRSI;
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

  st.site = &w_emlrtRSI;
  CollisionSet_CollisionSet(&st, &b_obj->CollisionsInternal);
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void mw__internal__call__reset(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
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

  st.site = &y_emlrtRSI;
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

static void mw__internal__call__step(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance, const emlrtStack *sp, real_T b_u0[2], real_T b_u1[2], real_T
  b_u2[2], real_T b_u3[48], real_T c_y0[2])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  __m128d r1;
  __m128d r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *H;
  emxArray_real_T *L;
  emxArray_real_T *lambda;
  emxArray_real_T *r;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  robotics_slmanip_internal_block_ForwardDynamicsBlock *obj;
  real_T bias[2];
  real_T b_j;
  real_T k;
  real_T vNum;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T iend;
  int32_T j;
  int32_T n;
  char_T u[45];
  char_T c_u[4];
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

  st.site = &ab_emlrtRSI;
  obj = &moduleInstance->sysobj;
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
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &d_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  emxInit_real_T(&L, 2);
  emxInit_real_T(&lambda, 2);
  d_st.site = &cb_emlrtRSI;
  RigidBodyTreeDynamics_massMatrix(&d_st, &obj->TreeInternal, b_u0, L, lambda);
  vNum = moduleInstance->sysobj.TreeInternal.VelocityNumber;
  k = emlrtNonNegativeCheckR2012b(vNum, &d_emlrtDCI, &c_st);
  iend = (int32_T)emlrtIntegerCheckR2012b(k, &c_emlrtDCI, &c_st);
  emxInit_real_T1(&r, 1);
  i = r->size[0];
  r->size[0] = iend;
  emxEnsureCapacity_real_T1(r, i);
  for (i = 0; i < iend; i++) {
    r->data[i] = 0.0;
  }

  d_st.site = &db_emlrtRSI;
  RigidBodyTreeDynamics_inverseDynamics(&d_st, &obj->TreeInternal, b_u0, b_u1, r,
    b_u3, bias);
  emxFree_real_T(&r);
  for (i = 0; i <= 0; i += 2) {
    r1 = _mm_loadu_pd(&b_u2[0]);
    r2 = _mm_loadu_pd(&bias[0]);
    _mm_storeu_pd(&bias[0], _mm_sub_pd(r1, r2));
  }

  d_st.site = &eb_emlrtRSI;
  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    n = 0;
  } else if (L->size[0] > L->size[1]) {
    n = L->size[0];
  } else {
    n = L->size[1];
  }

  emxInit_real_T(&H, 2);
  i = H->size[0] * H->size[1];
  H->size[0] = L->size[0];
  H->size[1] = L->size[1];
  emxEnsureCapacity_real_T(H, i);
  iend = L->size[0] * L->size[1];
  if (iend - 1 >= 0) {
    memcpy(&H->data[0], &L->data[0], (uint32_T)iend * sizeof(real_T));
  }

  i = n - 1;
  emlrtForLoopVectorCheckR2021a((real_T)n, -1.0, 1.0, mxDOUBLE_CLASS, n,
    &d_emlrtRTEI, &d_st);
  for (b_i = 0; b_i <= i; b_i++) {
    iend = n - b_i;
    j = H->size[0];
    i1 = H->size[1];
    e_st.site = &oc_emlrtRSI;
    b_sqrt(&e_st, &H->data[(emlrtDynamicBoundsCheckR2012b(iend, 1, j,
             &b_emlrtBCI, &d_st) + H->size[0] * (emlrtDynamicBoundsCheckR2012b
             (iend, 1, i1, &c_emlrtBCI, &d_st) - 1)) - 1]);
    j = lambda->size[1];
    k = lambda->data[emlrtDynamicBoundsCheckR2012b(iend, 1, j, &d_emlrtBCI,
      &d_st) - 1];
    while (k > 0.0) {
      j = H->size[0];
      i1 = H->size[1];
      i2 = H->size[0];
      i3 = H->size[1];
      i4 = H->size[0];
      i5 = H->size[1];
      i6 = (int32_T)emlrtIntegerCheckR2012b(k, &e_emlrtDCI, &d_st);
      H->data[(emlrtDynamicBoundsCheckR2012b(iend, 1, i4, &j_emlrtBCI, &d_st) +
               H->size[0] * (emlrtDynamicBoundsCheckR2012b(i6, 1, i5,
                 &k_emlrtBCI, &d_st) - 1)) - 1] = H->data
        [(emlrtDynamicBoundsCheckR2012b(iend, 1, j, &f_emlrtBCI, &d_st) +
          H->size[0] * (emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, i1,
            &g_emlrtBCI, &d_st) - 1)) - 1] / H->data
        [(emlrtDynamicBoundsCheckR2012b(iend, 1, i2, &h_emlrtBCI, &d_st) +
          H->size[0] * (emlrtDynamicBoundsCheckR2012b(iend, 1, i3, &i_emlrtBCI,
            &d_st) - 1)) - 1];
      j = lambda->size[1];
      k = lambda->data[emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, j,
        &l_emlrtBCI, &d_st) - 1];
    }

    j = lambda->size[1];
    k = lambda->data[emlrtDynamicBoundsCheckR2012b(iend, 1, j, &e_emlrtBCI,
      &d_st) - 1];
    while (k > 0.0) {
      b_j = k;
      while (b_j > 0.0) {
        j = H->size[0];
        i1 = H->size[1];
        i2 = H->size[0];
        i3 = H->size[1];
        i4 = H->size[0];
        i5 = H->size[1];
        i6 = H->size[0];
        i7 = (int32_T)emlrtIntegerCheckR2012b(k, &f_emlrtDCI, &d_st);
        i8 = H->size[1];
        i9 = (int32_T)emlrtIntegerCheckR2012b(b_j, &g_emlrtDCI, &d_st);
        H->data[(emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &s_emlrtBCI, &d_st) +
                 H->size[0] * (emlrtDynamicBoundsCheckR2012b(i9, 1, i8,
                   &t_emlrtBCI, &d_st) - 1)) - 1] = H->data
          [(emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, j, &m_emlrtBCI, &d_st)
            + H->size[0] * (emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, i1,
              &n_emlrtBCI, &d_st) - 1)) - 1] - H->data
          [(emlrtDynamicBoundsCheckR2012b(iend, 1, i2, &o_emlrtBCI, &d_st) +
            H->size[0] * (emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, i3,
              &p_emlrtBCI, &d_st) - 1)) - 1] * H->data
          [(emlrtDynamicBoundsCheckR2012b(iend, 1, i4, &q_emlrtBCI, &d_st) +
            H->size[0] * (emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, i5,
              &r_emlrtBCI, &d_st) - 1)) - 1];
        j = lambda->size[1];
        b_j = lambda->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, j,
          &v_emlrtBCI, &d_st) - 1];
      }

      j = lambda->size[1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(k, &h_emlrtDCI, &d_st);
      k = lambda->data[emlrtDynamicBoundsCheckR2012b(i1, 1, j, &u_emlrtBCI,
        &d_st) - 1];
    }
  }

  i = L->size[0] * L->size[1];
  L->size[0] = H->size[0];
  L->size[1] = H->size[1];
  emxEnsureCapacity_real_T(L, i);
  iend = H->size[0] * H->size[1];
  if (iend - 1 >= 0) {
    memcpy(&L->data[0], &H->data[0], (uint32_T)iend * sizeof(real_T));
  }

  n = H->size[1];
  if ((H->size[0] == 0) || (H->size[1] == 0) || (H->size[1] <= 1)) {
  } else {
    iend = 0;
    for (j = 2; j <= n; j++) {
      for (b_i = 0; b_i <= iend; b_i++) {
        L->data[b_i + L->size[0] * (j - 1)] = 0.0;
      }

      if (iend + 1 < H->size[0]) {
        iend++;
      }
    }
  }

  emxFree_real_T(&H);
  i = (int32_T)-((-1.0 - vNum) + 1.0) - 1;
  emlrtForLoopVectorCheckR2021a(vNum, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)
    -((-1.0 - vNum) + 1.0), &b_emlrtRTEI, &c_st);
  for (b_i = 0; b_i <= i; b_i++) {
    k = vNum - (real_T)b_i;
    j = L->size[0];
    i1 = L->size[1];
    bias[emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, 2, &y_emlrtBCI, &c_st) - 1]
      = bias[(int32_T)k - 1] / L->data[(emlrtDynamicBoundsCheckR2012b((int32_T)k,
      1, j, &w_emlrtBCI, &c_st) + L->size[0] * (emlrtDynamicBoundsCheckR2012b
      ((int32_T)k, 1, i1, &x_emlrtBCI, &c_st) - 1)) - 1];
    j = lambda->size[1];
    b_j = lambda->data[emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, j,
      &ab_emlrtBCI, &c_st) - 1];
    while (b_j > 0.0) {
      j = L->size[0];
      i1 = L->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(b_j, &i_emlrtDCI, &c_st);
      bias[emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &eb_emlrtBCI, &c_st) - 1] =
        bias[(int32_T)b_j - 1] - bias[(int32_T)k - 1] * L->data
        [(emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, j, &cb_emlrtBCI, &c_st) +
          L->size[0] * (emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, i1,
            &db_emlrtBCI, &c_st) - 1)) - 1];
      j = lambda->size[1];
      b_j = lambda->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, j,
        &mb_emlrtBCI, &c_st) - 1];
    }
  }

  i = (int32_T)vNum - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, vNum, mxDOUBLE_CLASS, (int32_T)vNum,
    &c_emlrtRTEI, &c_st);
  for (b_i = 0; b_i <= i; b_i++) {
    j = lambda->size[1];
    b_j = lambda->data[emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i +
      1U), 1, j, &bb_emlrtBCI, &c_st) - 1];
    while (b_j > 0.0) {
      j = L->size[0];
      i1 = L->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(b_j, &j_emlrtDCI, &c_st);
      bias[emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, 2,
        &lb_emlrtBCI, &c_st) - 1] = bias[b_i] - L->data
        [(emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, j,
           &ib_emlrtBCI, &c_st) + L->size[0] * (emlrtDynamicBoundsCheckR2012b(i2,
            1, i1, &jb_emlrtBCI, &c_st) - 1)) - 1] *
        bias[emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, 2, &kb_emlrtBCI,
        &c_st) - 1];
      j = lambda->size[1];
      b_j = lambda->data[emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, j,
        &nb_emlrtBCI, &c_st) - 1];
    }

    j = L->size[0];
    i1 = L->size[1];
    bias[emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, 2,
      &hb_emlrtBCI, &c_st) - 1] = bias[b_i] / L->data
      [(emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, j,
         &fb_emlrtBCI, &c_st) + L->size[0] * (emlrtDynamicBoundsCheckR2012b
         ((int32_T)((uint32_T)b_i + 1U), 1, i1, &gb_emlrtBCI, &c_st) - 1)) - 1];
  }

  emxFree_real_T(&lambda);
  emxFree_real_T(&L);
  for (i = 0; i < 2; i++) {
    c_y0[i] = bias[i];
  }
}

static void RigidBodyTreeDynamics_massMatrix(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *robot, real_T q[2], emxArray_real_T *H,
  emxArray_real_T *lambda)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emlrtStack *r;
  emxArray_cell_wrap *Ic;
  emxArray_cell_wrap *X;
  emxArray_real_T *Fi;
  emxArray_real_T *Hji;
  emxArray_real_T *Si;
  emxArray_real_T *b_Fi;
  emxArray_real_T *b_b;
  emxArray_real_T *c_Fi;
  emxArray_real_T *lambda_;
  emxArray_real_T *r1;
  rigidBodyJoint *r2;
  real_T b_X[36];
  real_T T[16];
  real_T dv[16];
  real_T b[2];
  real_T p[2];
  real_T d;
  real_T nb;
  real_T pid;
  real_T vNum;
  int32_T ii_data[8];
  int32_T nonFixedIndices_data[8];
  int32_T b_Hji[2];
  int32_T iv[2];
  int32_T q_size[1];
  int32_T b_i;
  int32_T c_i;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T k;
  int32_T loop_ub;
  boolean_T mask[8];
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  nb = robot->NumBodies;
  d = emlrtNonNegativeCheckR2012b(nb, &k_emlrtDCI, (emlrtConstCTX)sp);
  emlrtIntegerCheckR2012b(d, &l_emlrtDCI, (emlrtConstCTX)sp);
  emlrtIntegerCheckR2012b(nb, &m_emlrtDCI, (emlrtConstCTX)sp);
  vNum = robot->VelocityNumber;
  i = H->size[0] * H->size[1];
  d = emlrtNonNegativeCheckR2012b(vNum, &jb_emlrtDCI, (emlrtConstCTX)sp);
  H->size[0] = (int32_T)emlrtIntegerCheckR2012b(d, &ib_emlrtDCI, (emlrtConstCTX)
    sp);
  H->size[1] = (int32_T)emlrtIntegerCheckR2012b(vNum, &kb_emlrtDCI,
    (emlrtConstCTX)sp);
  emxEnsureCapacity_real_T(H, i);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(vNum, &nb_emlrtDCI, (emlrtConstCTX)
    sp) * (int32_T)emlrtIntegerCheckR2012b(vNum, &nb_emlrtDCI, (emlrtConstCTX)sp);
  for (i = 0; i < loop_ub; i++) {
    H->data[i] = 0.0;
  }

  emxInit_real_T(&lambda_, 2);
  i = lambda_->size[0] * lambda_->size[1];
  lambda_->size[0] = 1;
  lambda_->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &lb_emlrtDCI,
    (emlrtConstCTX)sp);
  emxEnsureCapacity_real_T(lambda_, i);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(nb, &ob_emlrtDCI, (emlrtConstCTX)sp);
  for (i = 0; i < loop_ub; i++) {
    lambda_->data[i] = 0.0;
  }

  i = lambda->size[0] * lambda->size[1];
  lambda->size[0] = 1;
  lambda->size[1] = (int32_T)emlrtIntegerCheckR2012b(vNum, &mb_emlrtDCI,
    (emlrtConstCTX)sp);
  emxEnsureCapacity_real_T(lambda, i);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(vNum, &pb_emlrtDCI, (emlrtConstCTX)
    sp);
  for (i = 0; i < loop_ub; i++) {
    lambda->data[i] = 0.0;
  }

  i = (int32_T)nb - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
    &e_emlrtRTEI, (emlrtConstCTX)sp);
  emxInit_cell_wrap(&Ic, 2);
  i1 = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = (int32_T)nb;
  emxEnsureCapacity_cell_wrap(Ic, i1);
  emxInit_cell_wrap(&X, 2);
  i1 = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = (int32_T)nb;
  emxEnsureCapacity_cell_wrap(X, i1);
  for (b_i = 0; b_i <= i; b_i++) {
    for (i1 = 0; i1 < 36; i1++) {
      i2 = Ic->size[1] - 1;
      Ic->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i2, &pc_emlrtBCI,
        (emlrtConstCTX)sp)].f1[i1] = robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (b_i, 0, 7, &id_emlrtBCI, (emlrtConstCTX)sp)]->SpatialInertia[i1];
    }

    for (i1 = 0; i1 < 2; i1++) {
      b[i1] = robot->PositionDoFMap[b_i + (i1 << 3)];
    }

    for (i1 = 0; i1 < 2; i1++) {
      p[i1] = b[i1];
    }

    if (p[1] < p[0]) {
      st.site = &fb_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&st, RigidBody_get_Joint(&st,
        robot->Bodies[b_i]), T);
    } else {
      if (p[0] > p[1]) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(p[0], &n_emlrtDCI, (emlrtConstCTX)
          sp);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &ob_emlrtBCI,
          (emlrtConstCTX)sp) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(p[1], &o_emlrtDCI, (emlrtConstCTX)
          sp);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &pb_emlrtBCI,
          (emlrtConstCTX)sp);
      }

      q_size[0] = i2 - i1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        b[i2] = q[i1 + i2];
      }

      st.site = &gb_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&st, RigidBody_get_Joint(&st,
        robot->Bodies[b_i]), b, q_size, T);
    }

    i1 = X->size[1] - 1;
    tforminv(T, dv);
    tformToSpatialXform(dv, X->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &rc_emlrtBCI, (emlrtConstCTX)sp)].f1);
  }

  i = (int32_T)-((-1.0 - nb) + 1.0) - 1;
  emlrtForLoopVectorCheckR2021a(nb, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-((-1.0
    - nb) + 1.0), &f_emlrtRTEI, (emlrtConstCTX)sp);
  emxInit_real_T(&Si, 2);
  emxInit_real_T(&Fi, 2);
  emxInit_real_T(&Hji, 2);
  emxInit_real_T(&b_b, 2);
  emxInit_real_T(&b_Fi, 2);
  emxInit_real_T(&c_Fi, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    vNum = nb - (real_T)b_i;
    i1 = (int32_T)emlrtIntegerCheckR2012b(vNum, &qb_emlrtDCI, (emlrtConstCTX)sp)
      - 1;
    pid = robot->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 7, &qc_emlrtBCI,
      (emlrtConstCTX)sp)]->ParentIndex;
    c_i = emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, 8, &qb_emlrtBCI,
      (emlrtConstCTX)sp);
    for (i1 = 0; i1 < 2; i1++) {
      b[i1] = robot->VelocityDoFMap[(c_i + (i1 << 3)) - 1];
    }

    for (i1 = 0; i1 < 2; i1++) {
      p[i1] = b[i1];
    }

    if (pid > 0.0) {
      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, i1, &jc_emlrtBCI,
        (emlrtConstCTX)sp);
      i1 = Ic->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, i1, &kc_emlrtBCI,
        (emlrtConstCTX)sp);
      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, i1, &lc_emlrtBCI,
        (emlrtConstCTX)sp);
      for (i1 = 0; i1 < 6; i1++) {
        for (i2 = 0; i2 < 6; i2++) {
          b_X[i1 + 6 * i2] = 0.0;
          for (i3 = 0; i3 < 6; i3++) {
            b_X[i1 + 6 * i2] += X->data[(int32_T)vNum - 1].f1[i3 + 6 * i1] *
              Ic->data[(int32_T)vNum - 1].f1[i3 + 6 * i2];
          }
        }
      }

      for (i1 = 0; i1 < 6; i1++) {
        for (i2 = 0; i2 < 6; i2++) {
          d = 0.0;
          for (i3 = 0; i3 < 6; i3++) {
            d += b_X[i1 + 6 * i3] * X->data[(int32_T)vNum - 1].f1[i3 + 6 * i2];
          }

          i3 = Ic->size[1] - 1;
          k = (int32_T)emlrtIntegerCheckR2012b(pid, &rb_emlrtDCI, (emlrtConstCTX)
            sp) - 1;
          c_i = Ic->size[1] - 1;
          loop_ub = (int32_T)emlrtIntegerCheckR2012b(pid, &sb_emlrtDCI,
            (emlrtConstCTX)sp) - 1;
          Ic->data[emlrtDynamicBoundsCheckR2012b(loop_ub, 0, c_i, &tc_emlrtBCI,
            (emlrtConstCTX)sp)].f1[i1 + 6 * i2] = Ic->
            data[emlrtDynamicBoundsCheckR2012b(k, 0, i3, &sc_emlrtBCI,
            (emlrtConstCTX)sp)].f1[i1 + 6 * i2] + d;
        }
      }

      i1 = lambda_->size[1];
      lambda_->data[emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, i1,
        &uc_emlrtBCI, (emlrtConstCTX)sp) - 1] = pid;
      do {
        exitg1 = 0;
        i1 = lambda_->size[1];
        if (lambda_->data[emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, i1,
             &vc_emlrtBCI, (emlrtConstCTX)sp) - 1] > 0.0) {
          st.site = &hb_emlrtRSI;
          r = &st;
          i1 = lambda_->size[1];
          d = lambda_->data[emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, i1,
            &xc_emlrtBCI, &st) - 1];
          i1 = (int32_T)emlrtIntegerCheckR2012b(d, &tb_emlrtDCI, &st) - 1;
          r2 = RigidBody_get_Joint(r, robot->
            Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 7, &wc_emlrtBCI, &st)]);
          if (d_strcmp(r2->Type)) {
            i1 = lambda_->size[1];
            d = lambda_->data[emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, i1,
              &ad_emlrtBCI, &st) - 1];
            i1 = (int32_T)emlrtIntegerCheckR2012b(d, &ub_emlrtDCI, &st) - 1;
            i2 = lambda_->size[1];
            lambda_->data[emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, i2,
              &bd_emlrtBCI, &st) - 1] = robot->
              Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 7, &yc_emlrtBCI, &st)
              ]->ParentIndex;
          } else {
            exitg1 = 1;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    for (i1 = 0; i1 < 2; i1++) {
      b[i1] = robot->VelocityDoFMap[((int32_T)vNum + (i1 << 3)) - 1];
    }

    if (b[0] <= b[1]) {
      st.site = &ib_emlrtRSI;
      r = &st;
      r2 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)vNum - 1]);
      for (i1 = 0; i1 < 16; i1++) {
        T[i1] = r2->ChildToJointTransform[i1];
      }

      b_st.site = &jb_emlrtRSI;
      r = &b_st;
      r2 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)vNum - 1]);
      i1 = 6 * r2->MotionSubspace->size[1];
      i2 = b_b->size[0] * b_b->size[1];
      b_b->size[0] = 6;
      c_st.site = &jb_emlrtRSI;
      r = &c_st;
      r2 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)vNum - 1]);
      b_b->size[1] = r2->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(b_b, i2);
      loop_ub = i1 - 1;
      d_st.site = &jb_emlrtRSI;
      r = &d_st;
      r2 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)vNum - 1]);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        b_b->data[i1] = r2->MotionSubspace->data[i1];
      }

      tforminv(T, dv);
      tformToSpatialXform(dv, b_X);
      e_st.site = &nb_emlrtRSI;
      mtimes(b_X, b_b, Si);
      i1 = Ic->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, i1, &mc_emlrtBCI,
        &d_st);
      e_st.site = &nb_emlrtRSI;
      mtimes(Ic->data[(int32_T)vNum - 1].f1, Si, Fi);
      if (p[0] > p[1]) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = H->size[0];
        i2 = (int32_T)emlrtIntegerCheckR2012b(p[0], &t_emlrtDCI, &d_st);
        i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ub_emlrtBCI, &d_st) - 1;
        i2 = H->size[0];
        i3 = (int32_T)emlrtIntegerCheckR2012b(p[1], &u_emlrtDCI, &d_st);
        i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &vb_emlrtBCI, &d_st);
      }

      if (p[0] > p[1]) {
        i3 = 0;
        k = 0;
      } else {
        i3 = H->size[1];
        k = (int32_T)emlrtIntegerCheckR2012b(p[0], &v_emlrtDCI, &d_st);
        i3 = emlrtDynamicBoundsCheckR2012b(k, 1, i3, &wb_emlrtBCI, &d_st) - 1;
        k = H->size[1];
        c_i = (int32_T)emlrtIntegerCheckR2012b(p[1], &w_emlrtDCI, &d_st);
        k = emlrtDynamicBoundsCheckR2012b(c_i, 1, k, &xb_emlrtBCI, &d_st);
      }

      e_st.site = &nb_emlrtRSI;
      b_mtimes(Si, Fi, Hji);
      iv[0] = i2 - i1;
      iv[1] = k - i3;
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &(*(int32_T (*)[2])Hji->size)[0],
        2, &emlrtECI, &d_st);
      loop_ub = Hji->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        c_i = Hji->size[0];
        for (k = 0; k < c_i; k++) {
          H->data[(i1 + k) + H->size[0] * (i3 + i2)] = Hji->data[k + Hji->size[0]
            * i2];
        }
      }

      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, i1, &nc_emlrtBCI,
        &d_st);
      i1 = b_Fi->size[0] * b_Fi->size[1];
      b_Fi->size[0] = 6;
      b_Fi->size[1] = Fi->size[1];
      emxEnsureCapacity_real_T(b_Fi, i1);
      loop_ub = Fi->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (i2 = 0; i2 < 6; i2++) {
          b_Fi->data[i2 + 6 * i1] = Fi->data[i2 + 6 * i1];
        }
      }

      e_st.site = &nb_emlrtRSI;
      c_mtimes(X->data[(int32_T)vNum - 1].f1, b_Fi, Fi);
      while (pid > 0.0) {
        e_st.site = &kb_emlrtRSI;
        r = &e_st;
        i1 = (int32_T)emlrtIntegerCheckR2012b(pid, &xb_emlrtDCI, &e_st) - 1;
        r2 = RigidBody_get_Joint(r, robot->Bodies[emlrtDynamicBoundsCheckR2012b
          (i1, 0, 7, &gd_emlrtBCI, &e_st)]);
        for (i1 = 0; i1 < 16; i1++) {
          T[i1] = r2->ChildToJointTransform[i1];
        }

        f_st.site = &lb_emlrtRSI;
        r = &f_st;
        i1 = (int32_T)emlrtIntegerCheckR2012b(pid, &yb_emlrtDCI, &f_st) - 1;
        r2 = RigidBody_get_Joint(r, robot->Bodies[emlrtDynamicBoundsCheckR2012b
          (i1, 0, 7, &hd_emlrtBCI, &f_st)]);
        i1 = 6 * r2->MotionSubspace->size[1];
        i2 = b_b->size[0] * b_b->size[1];
        b_b->size[0] = 6;
        g_st.site = &lb_emlrtRSI;
        r = &g_st;
        i3 = (int32_T)emlrtIntegerCheckR2012b(pid, &yb_emlrtDCI, &g_st) - 1;
        r2 = RigidBody_get_Joint(r, robot->Bodies[emlrtDynamicBoundsCheckR2012b
          (i3, 0, 7, &hd_emlrtBCI, &g_st)]);
        b_b->size[1] = r2->MotionSubspace->size[1];
        emxEnsureCapacity_real_T(b_b, i2);
        loop_ub = i1 - 1;
        h_st.site = &lb_emlrtRSI;
        r = &h_st;
        i1 = (int32_T)emlrtIntegerCheckR2012b(pid, &yb_emlrtDCI, &h_st) - 1;
        r2 = RigidBody_get_Joint(r, robot->Bodies[emlrtDynamicBoundsCheckR2012b
          (i1, 0, 7, &hd_emlrtBCI, &h_st)]);
        for (i1 = 0; i1 <= loop_ub; i1++) {
          b_b->data[i1] = r2->MotionSubspace->data[i1];
        }

        tforminv(T, dv);
        tformToSpatialXform(dv, b_X);
        i_st.site = &nb_emlrtRSI;
        mtimes(b_X, b_b, Si);
        i1 = (int32_T)emlrtIntegerCheckR2012b(pid, &p_emlrtDCI, &h_st);
        c_i = emlrtDynamicBoundsCheckR2012b(i1, 1, 8, &rb_emlrtBCI, &h_st);
        for (i1 = 0; i1 < 2; i1++) {
          b[i1] = robot->VelocityDoFMap[(c_i + (i1 << 3)) - 1];
        }

        if (b[0] <= b[1]) {
          i_st.site = &nb_emlrtRSI;
          b_mtimes(Si, Fi, Hji);
          if (b[0] > b[1]) {
            i1 = 0;
            i2 = 0;
          } else {
            i1 = H->size[0];
            i2 = (int32_T)emlrtIntegerCheckR2012b(b[0], &x_emlrtDCI, &h_st);
            i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yb_emlrtBCI, &h_st) -
              1;
            i2 = H->size[0];
            i3 = (int32_T)emlrtIntegerCheckR2012b(b[1], &y_emlrtDCI, &h_st);
            i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ac_emlrtBCI, &h_st);
          }

          if (p[0] > p[1]) {
            i3 = 0;
            k = 0;
          } else {
            i3 = H->size[1];
            k = (int32_T)emlrtIntegerCheckR2012b(p[0], &ab_emlrtDCI, &h_st);
            i3 = emlrtDynamicBoundsCheckR2012b(k, 1, i3, &bc_emlrtBCI, &h_st) -
              1;
            k = H->size[1];
            c_i = (int32_T)emlrtIntegerCheckR2012b(p[1], &bb_emlrtDCI, &h_st);
            k = emlrtDynamicBoundsCheckR2012b(c_i, 1, k, &cc_emlrtBCI, &h_st);
          }

          iv[0] = i2 - i1;
          iv[1] = k - i3;
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &(*(int32_T (*)[2])Hji->size)
            [0], 2, &b_emlrtECI, &h_st);
          loop_ub = Hji->size[1];
          for (i2 = 0; i2 < loop_ub; i2++) {
            c_i = Hji->size[0];
            for (k = 0; k < c_i; k++) {
              H->data[(i1 + k) + H->size[0] * (i3 + i2)] = Hji->data[k +
                Hji->size[0] * i2];
            }
          }

          if (p[0] > p[1]) {
            i1 = 0;
            i2 = 0;
          } else {
            i1 = H->size[0];
            i2 = (int32_T)emlrtIntegerCheckR2012b(p[0], &cb_emlrtDCI, &h_st);
            i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &dc_emlrtBCI, &h_st) -
              1;
            i2 = H->size[0];
            i3 = (int32_T)emlrtIntegerCheckR2012b(p[1], &db_emlrtDCI, &h_st);
            i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ec_emlrtBCI, &h_st);
          }

          if (b[0] > b[1]) {
            i3 = 0;
            k = 0;
          } else {
            i3 = H->size[1];
            k = (int32_T)emlrtIntegerCheckR2012b(b[0], &eb_emlrtDCI, &h_st);
            i3 = emlrtDynamicBoundsCheckR2012b(k, 1, i3, &fc_emlrtBCI, &h_st) -
              1;
            k = H->size[1];
            c_i = (int32_T)emlrtIntegerCheckR2012b(b[1], &fb_emlrtDCI, &h_st);
            k = emlrtDynamicBoundsCheckR2012b(c_i, 1, k, &gc_emlrtBCI, &h_st);
          }

          iv[0] = i2 - i1;
          iv[1] = k - i3;
          b_Hji[0] = Hji->size[1];
          b_Hji[1] = Hji->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &b_Hji[0], 2, &c_emlrtECI,
            &h_st);
          loop_ub = Hji->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            c_i = Hji->size[1];
            for (k = 0; k < c_i; k++) {
              H->data[(i1 + k) + H->size[0] * (i3 + i2)] = Hji->data[i2 +
                Hji->size[0] * k];
            }
          }
        }

        i1 = X->size[1] - 1;
        emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, i1, &oc_emlrtBCI,
          &h_st);
        i1 = c_Fi->size[0] * c_Fi->size[1];
        c_Fi->size[0] = 6;
        c_Fi->size[1] = Fi->size[1];
        emxEnsureCapacity_real_T(c_Fi, i1);
        loop_ub = Fi->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i2 = 0; i2 < 6; i2++) {
            c_Fi->data[i2 + 6 * i1] = Fi->data[i2 + 6 * i1];
          }
        }

        i_st.site = &nb_emlrtRSI;
        c_mtimes(X->data[(int32_T)pid - 1].f1, c_Fi, Fi);
        pid = robot->Bodies[(int32_T)pid - 1]->ParentIndex;
      }
    }
  }

  emxFree_real_T(&c_Fi);
  emxFree_real_T(&b_Fi);
  emxFree_real_T(&b_b);
  emxFree_real_T(&Hji);
  emxFree_real_T(&Fi);
  emxFree_real_T(&Si);
  emxFree_cell_wrap(&X);
  emxFree_cell_wrap(&Ic);
  for (i = 0; i < 8; i++) {
    mask[i] = (robot->VelocityDoFMap[i] <= robot->VelocityDoFMap[i + 8]);
  }

  st.site = &mb_emlrtRSI;
  eml_find(&st, mask, ii_data, q_size);
  if (q_size[0] - 1 >= 0) {
    memcpy(&nonFixedIndices_data[0], &ii_data[0], (uint32_T)q_size[0] * sizeof
           (int32_T));
  }

  i = q_size[0] - 1;
  emxInit_real_T(&r1, 2);
  for (k = 0; k <= i; k++) {
    emlrtDynamicBoundsCheckR2012b(k + 1, 1, q_size[0], &sb_emlrtBCI,
      (emlrtConstCTX)sp);
    for (i1 = 0; i1 < 2; i1++) {
      b[i1] = robot->VelocityDoFMap[(nonFixedIndices_data[k] + (i1 << 3)) - 1];
    }

    for (i1 = 0; i1 < 2; i1++) {
      p[i1] = b[i1];
    }

    if (muDoubleScalarIsNaN(p[0]) || muDoubleScalarIsNaN(p[1])) {
      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = 1;
      emxEnsureCapacity_real_T(r1, i1);
      r1->data[0] = rtNaN;
    } else if (p[1] < p[0]) {
      r1->size[0] = 1;
      r1->size[1] = 0;
    } else if ((muDoubleScalarIsInf(p[0]) || muDoubleScalarIsInf(p[1])) && (p[0]
                == p[1])) {
      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = 1;
      emxEnsureCapacity_real_T(r1, i1);
      r1->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(p[0]) == p[0]) {
      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = (int32_T)(p[1] - p[0]) + 1;
      emxEnsureCapacity_real_T(r1, i1);
      loop_ub = (int32_T)(p[1] - p[0]);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        r1->data[i1] = p[0] + (real_T)i1;
      }
    } else {
      st.site = &ob_emlrtRSI;
      eml_float_colon(&st, p[0], p[1], r1);
    }

    d = emlrtNonNegativeCheckR2012b((p[1] - p[0]) + 1.0, &q_emlrtDCI,
      (emlrtConstCTX)sp);
    emlrtIntegerCheckR2012b(d, &r_emlrtDCI, (emlrtConstCTX)sp);
    if (p[0] > p[1]) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = lambda->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(p[0], &gb_emlrtDCI, (emlrtConstCTX)
        sp);
      i1 = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &hc_emlrtBCI, (emlrtConstCTX)
        sp) - 1;
      i2 = lambda->size[1];
      i3 = (int32_T)emlrtIntegerCheckR2012b(p[1], &hb_emlrtDCI, (emlrtConstCTX)
        sp);
      i2 = emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ic_emlrtBCI, (emlrtConstCTX)
        sp);
    }

    if (r1->size[1] == (int32_T)((p[1] - p[0]) + 1.0)) {
      loop_ub = r1->size[0] * r1->size[1] - 1;
      i3 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      emxEnsureCapacity_real_T(r1, i3);
      for (i3 = 0; i3 <= loop_ub; i3++) {
        r1->data[i3]--;
      }
    } else {
      binary_expand_op(r1, p);
    }

    i3 = r1->size[1];
    emlrtSubAssignSizeCheck1dR2017a(i2 - i1, i3, &d_emlrtECI, (emlrtConstCTX)sp);
    loop_ub = r1->size[1];
    for (i2 = 0; i2 < loop_ub; i2++) {
      lambda->data[i1 + i2] = r1->data[i2];
    }

    i1 = lambda_->size[1];
    if (lambda_->data[emlrtDynamicBoundsCheckR2012b(nonFixedIndices_data[k], 1,
         i1, &cd_emlrtBCI, (emlrtConstCTX)sp) - 1] == 0.0) {
      i1 = lambda->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(p[0], &vb_emlrtDCI, (emlrtConstCTX)
        sp);
      lambda->data[emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &dd_emlrtBCI,
        (emlrtConstCTX)sp) - 1] = 0.0;
    } else {
      i1 = lambda_->size[1];
      d = lambda_->data[emlrtDynamicBoundsCheckR2012b(nonFixedIndices_data[k], 1,
        i1, &ed_emlrtBCI, (emlrtConstCTX)sp) - 1];
      i1 = (int32_T)emlrtIntegerCheckR2012b(d, &s_emlrtDCI, (emlrtConstCTX)sp);
      c_i = emlrtDynamicBoundsCheckR2012b(i1, 1, 8, &tb_emlrtBCI, (emlrtConstCTX)
        sp);
      for (i1 = 0; i1 < 2; i1++) {
        b[i1] = robot->VelocityDoFMap[(c_i + (i1 << 3)) - 1];
      }

      i1 = lambda->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(p[0], &wb_emlrtDCI, (emlrtConstCTX)
        sp);
      lambda->data[emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fd_emlrtBCI,
        (emlrtConstCTX)sp) - 1] = b[1];
    }
  }

  emxFree_real_T(&r1);
  emxFree_real_T(&lambda_);
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
    st.site = &pb_emlrtRSI;
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
    b_st.site = &tc_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
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

  st.site = &qb_emlrtRSI;
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
    b_st.site = &rb_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &sb_emlrtRSI;
    c_st.site = &ub_emlrtRSI;
    d_st.site = &vb_emlrtRSI;
    e_st.site = &wb_emlrtRSI;
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
    b_st.site = &tb_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

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

static boolean_T d_strcmp(emxArray_char_T *a)
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

static void normalizeRows(const emlrtStack *sp, real_T matrix[3], real_T
  normRowMatrix[3])
{
  __m128d r;
  emlrtStack st;
  real_T y[3];
  real_T b_matrix;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&y[0], _mm_mul_pd(r, r));
  }

  for (k = 2; k < 3; k++) {
    b_matrix = matrix[2];
    y[2] = b_matrix * b_matrix;
  }

  b_matrix = sumColumnB(y);
  st.site = &xb_emlrtRSI;
  b_sqrt(&st, &b_matrix);
  b_matrix = 1.0 / b_matrix;
  for (k = 0; k <= 0; k += 2) {
    r = _mm_loadu_pd(&matrix[0]);
    _mm_storeu_pd(&normRowMatrix[0], _mm_mul_pd(r, _mm_set1_pd(b_matrix)));
  }

  for (k = 2; k < 3; k++) {
    normRowMatrix[2] = matrix[2] * b_matrix;
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

  st.site = &qb_emlrtRSI;
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
    b_st.site = &rb_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

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
      b_st.site = &ad_emlrtRSI;
      error(&b_st, y, getString(&b_st, b_message(&b_st, d_y, &d_emlrtMCI),
             &d_emlrtMCI), &d_emlrtMCI);
    }

    if (q_size[0] != 0) {
      loop_ub = 1;
    } else {
      loop_ub = 0;
    }

    for (i = 0; i < 3; i++) {
      result_data[i] = v[i];
    }

    if (loop_ub - 1 >= 0) {
      memcpy(&result_data[3], &q_data[0], (uint32_T)loop_ub * sizeof(real_T));
    }

    b_st.site = &sb_emlrtRSI;
    c_st.site = &ac_emlrtRSI;
    d_st.site = &bc_emlrtRSI;
    e_st.site = &cc_emlrtRSI;
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
      f_st.site = &yc_emlrtRSI;
      error(&f_st, g_y, getString(&f_st, c_message(&f_st, h_y, i_y, j_y,
              &e_emlrtMCI), &e_emlrtMCI), &e_emlrtMCI);
    }

    c_st.site = &ub_emlrtRSI;
    d_st.site = &vb_emlrtRSI;
    e_st.site = &wb_emlrtRSI;
    normalizeRows(&e_st, *(real_T (*)[3])&result_data[0], v);
    emlrtDynamicBoundsCheckR2012b(4, 1, loop_ub + 3, &jd_emlrtBCI, &d_st);
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
    b_st.site = &tb_emlrtRSI;
    if (b_strcmp(obj->Type) || c_strcmp(obj->Type)) {
      for (i = 0; i < 3; i++) {
        v[i] = obj->JointAxisInternal[i];
      }
    } else {
      for (i = 0; i < 3; i++) {
        v[i] = rtNaN;
      }
    }

    b_st.site = &yb_emlrtRSI;
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
        c_st.site = &uc_emlrtRSI;
        error(&c_st, c_y, getString(&c_st, b_message(&c_st, f_y, &g_emlrtMCI),
               &g_emlrtMCI), &g_emlrtMCI);
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
        c_st.site = &vc_emlrtRSI;
        error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, &f_emlrtMCI),
               &f_emlrtMCI), &f_emlrtMCI);
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

  __m128d r;
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

  for (i = 0; i <= 6; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&b_R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }

  for (i = 8; i < 9; i++) {
    b_R[8] = -R[8];
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

static void b_mtimes(emxArray_real_T *A, emxArray_real_T *B, emxArray_real_T *C)
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
  int32_T loop_ub;
  char_T TRANSA1;
  char_T TRANSB1;
  if ((A->size[1] == 0) || (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[1] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[1];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)A->size[1];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C->data[0], &ldc_t);
  }
}

static void c_mtimes(real_T A[36], emxArray_real_T *B, emxArray_real_T *C)
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
    TRANSA1 = 'T';
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

static void eml_find(const emlrtStack *sp, boolean_T x[8], int32_T i_data[],
                     int32_T i_size[1])
{
  emlrtStack st;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 < 8)) {
    if (x[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= 8) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (idx < 1) {
    idx = 0;
  }

  iv[0] = 1;
  iv[1] = idx;
  st.site = &dc_emlrtRSI;
  indexShapeCheck(&st, 8, iv);
  i_size[0] = idx;
}

static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[30];
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((matrixSize != 1) || (!(indexSize[1] != 1))) {
    c = false;
  } else {
    c = true;
  }

  st.site = &ec_emlrtRSI;
  if (c) {
    for (i = 0; i < 30; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &xc_emlrtRSI;
    error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &h_emlrtMCI),
           &h_emlrtMCI), &h_emlrtMCI);
  }
}

static void eml_float_colon(const emlrtStack *sp, real_T a, real_T b,
  emxArray_real_T *y)
{
  static const int32_T iv[2] = { 1, 21 };

  static const int32_T iv1[2] = { 1, 21 };

  static char_T b_u[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T apnd;
  real_T cdiff;
  real_T ndbl;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T nm1d2;
  char_T u[21];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  ndbl = muDoubleScalarFloor((b - a) + 0.5);
  apnd = a + ndbl;
  cdiff = apnd - b;
  if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
      (muDoubleScalarAbs(a), muDoubleScalarAbs(b))) {
    ndbl++;
    apnd = b;
  } else if (cdiff > 0.0) {
    apnd = a + (ndbl - 1.0);
  } else {
    ndbl++;
  }

  if (ndbl >= 0.0) {
    n = (int32_T)ndbl - 1;
  } else {
    n = -1;
  }

  st.site = &fc_emlrtRSI;
  if (ndbl > 2.147483647E+9) {
    for (i = 0; i < 21; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 21, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 21; i++) {
      u[i] = b_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 21, m, &u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &wc_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, b_message(&b_st, c_y, &i_emlrtMCI),
           &i_emlrtMCI), &i_emlrtMCI);
  }

  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = n + 1;
  emxEnsureCapacity_real_T(y, i);
  if (n + 1 > 0) {
    y->data[0] = a;
    if (n + 1 > 1) {
      y->data[n] = apnd;
      nm1d2 = div_nzp_s32(n, 2);
      i = nm1d2 - 2;
      for (k = 0; k <= i; k++) {
        y->data[k + 1] = a + (real_T)(k + 1);
        y->data[(n - k) - 1] = apnd - (real_T)(k + 1);
      }

      if (nm1d2 << 1 == n) {
        y->data[nm1d2] = (a + apnd) / 2.0;
      } else {
        y->data[nm1d2] = a + (real_T)nm1d2;
        y->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }
}

static void RigidBodyTreeDynamics_inverseDynamics(const emlrtStack *sp,
  robotics_manip_internal_RigidBodyTree *robot, real_T q[2], real_T qdot[2],
  emxArray_real_T *qddot, real_T fext[48], real_T tau[2])
{
  static const int32_T iv1[2] = { 1, 15 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 15 };

  static const int32_T iv4[2] = { 1, 45 };

  static char_T d_u[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static char_T c_u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n', 'n',
    'e', 'r', 'd', 'i', 'm' };

  __m128d r1;
  __m128d r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emlrtStack *b_sp;
  emxArray_cell_wrap *X;
  emxArray_cell_wrap *Xtree;
  emxArray_real_T *aB;
  emxArray_real_T *b_S;
  emxArray_real_T *f;
  emxArray_real_T *qddoti;
  emxArray_real_T *vB;
  emxArray_real_T *vJ;
  emxArray_real_T *y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  rigidBodyJoint *r;
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
  real_T c_i;
  real_T d;
  real_T nb;
  real_T pid;
  int32_T iv[2];
  int32_T qdot_size[2];
  int32_T q_size[1];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T k;
  int32_T loop_ub;
  char_T b_u[45];
  char_T u[15];
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
  for (i = 0; i < 3; i++) {
    a0[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    a0[i + 3] = -robot->Gravity[i];
  }

  nb = robot->NumBodies;
  d = emlrtNonNegativeCheckR2012b(nb, &ac_emlrtDCI, (emlrtConstCTX)sp);
  emlrtIntegerCheckR2012b(d, &bc_emlrtDCI, (emlrtConstCTX)sp);
  emlrtIntegerCheckR2012b(nb, &cc_emlrtDCI, (emlrtConstCTX)sp);
  emxInit_real_T(&vJ, 2);
  i = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  vJ->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &pc_emlrtDCI,
    (emlrtConstCTX)sp);
  emxEnsureCapacity_real_T(vJ, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &sc_emlrtDCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < loop_ub; i++) {
    vJ->data[i] = 0.0;
  }

  emxInit_real_T(&vB, 2);
  i = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &qc_emlrtDCI,
    (emlrtConstCTX)sp);
  emxEnsureCapacity_real_T(vB, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &tc_emlrtDCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < loop_ub; i++) {
    vB->data[i] = 0.0;
  }

  emxInit_real_T(&aB, 2);
  i = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = (int32_T)emlrtIntegerCheckR2012b(nb, &rc_emlrtDCI,
    (emlrtConstCTX)sp);
  emxEnsureCapacity_real_T(aB, i);
  loop_ub = 6 * (int32_T)emlrtIntegerCheckR2012b(nb, &uc_emlrtDCI,
    (emlrtConstCTX)sp);
  for (i = 0; i < loop_ub; i++) {
    aB->data[i] = 0.0;
  }

  emlrtIntegerCheckR2012b(nb, &dc_emlrtDCI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i < 2; b_i++) {
    tau[b_i] = 0.0;
  }

  i = (int32_T)nb - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
    &g_emlrtRTEI, (emlrtConstCTX)sp);
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
  for (loop_ub = 0; loop_ub <= i; loop_ub++) {
    for (i1 = 0; i1 < 36; i1++) {
      i2 = Xtree->size[1] - 1;
      Xtree->data[emlrtDynamicBoundsCheckR2012b(loop_ub, 0, i2, &ve_emlrtBCI,
        (emlrtConstCTX)sp)].f1[i1] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      i1 = Xtree->size[1] - 1;
      i1 = emlrtDynamicBoundsCheckR2012b(loop_ub, 0, i1, &te_emlrtBCI,
        (emlrtConstCTX)sp);
      Xtree->data[i1].f1[k + 6 * k] = 1.0;
    }

    for (i1 = 0; i1 < 36; i1++) {
      i2 = X->size[1] - 1;
      X->data[emlrtDynamicBoundsCheckR2012b(loop_ub, 0, i2, &we_emlrtBCI,
        (emlrtConstCTX)sp)].f1[i1] = 0.0;
    }

    for (k = 0; k < 6; k++) {
      i1 = X->size[1] - 1;
      i1 = emlrtDynamicBoundsCheckR2012b(loop_ub, 0, i1, &ue_emlrtBCI,
        (emlrtConstCTX)sp);
      X->data[i1].f1[k + 6 * k] = 1.0;
    }
  }

  i = (int32_T)nb - 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
    &h_emlrtRTEI, (emlrtConstCTX)sp);
  emxInit_real_T(&f, 2);
  i1 = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = (int32_T)nb;
  emxEnsureCapacity_real_T(f, i1);
  emxInit_real_T(&b_S, 2);
  emxInit_real_T1(&qddoti, 1);
  emxInit_real_T(&y, 2);
  for (b_i = 0; b_i <= i; b_i++) {
    st.site = &gc_emlrtRSI;
    b_sp = &st;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
      (b_i, 0, 7, &xe_emlrtBCI, &st)]);
    i1 = 6 * r->MotionSubspace->size[1];
    i2 = b_S->size[0] * b_S->size[1];
    b_S->size[0] = 6;
    b_st.site = &gc_emlrtRSI;
    b_sp = &b_st;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
    b_S->size[1] = r->MotionSubspace->size[1];
    emxEnsureCapacity_real_T(b_S, i2);
    loop_ub = i1 - 1;
    c_st.site = &gc_emlrtRSI;
    b_sp = &c_st;
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

    for (loop_ub = 0; loop_ub < 6; loop_ub++) {
      XDHOffset[loop_ub + 6 * loop_ub] = 1.0;
    }

    if (a[1] < a[0]) {
      d_st.site = &hc_emlrtRSI;
      rigidBodyJoint_transformBodyToParent(&d_st, RigidBody_get_Joint(&d_st,
        robot->Bodies[b_i]), T);
      i1 = qddoti->size[0];
      qddoti->size[0] = 1;
      emxEnsureCapacity_real_T1(qddoti, i1);
      qddoti->data[0] = 0.0;
      i1 = vJ->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &qd_emlrtBCI,
        &c_st);
      for (i1 = 0; i1 < 6; i1++) {
        vJ->data[i1 + 6 * (loop_ub - 1)] = 0.0;
      }
    } else {
      if (a[0] > a[1]) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(a[0], &ec_emlrtDCI, &c_st);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &kd_emlrtBCI, &c_st) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(a[1], &fc_emlrtDCI, &c_st);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &ld_emlrtBCI, &c_st);
      }

      if (b[0] > b[1]) {
        i3 = 0;
        i4 = 0;
      } else {
        i3 = (int32_T)emlrtIntegerCheckR2012b(b[0], &gc_emlrtDCI, &c_st);
        i3 = emlrtDynamicBoundsCheckR2012b(i3, 1, 2, &md_emlrtBCI, &c_st) - 1;
        i4 = (int32_T)emlrtIntegerCheckR2012b(b[1], &hc_emlrtDCI, &c_st);
        i4 = emlrtDynamicBoundsCheckR2012b(i4, 1, 2, &nd_emlrtBCI, &c_st);
      }

      if (b[0] > b[1]) {
        i5 = 0;
        i6 = 0;
      } else {
        i5 = qddot->size[0];
        i6 = (int32_T)emlrtIntegerCheckR2012b(b[0], &ic_emlrtDCI, &c_st);
        i5 = emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &od_emlrtBCI, &c_st) - 1;
        i6 = qddot->size[0];
        k = (int32_T)emlrtIntegerCheckR2012b(b[1], &jc_emlrtDCI, &c_st);
        i6 = emlrtDynamicBoundsCheckR2012b(k, 1, i6, &pd_emlrtBCI, &c_st);
      }

      iv[0] = 1;
      iv[1] = i6 - i5;
      d_st.site = &ic_emlrtRSI;
      indexShapeCheck(&d_st, qddot->size[0], iv);
      k = qddoti->size[0];
      qddoti->size[0] = i6 - i5;
      emxEnsureCapacity_real_T1(qddoti, k);
      loop_ub = i6 - i5;
      for (i6 = 0; i6 < loop_ub; i6++) {
        qddoti->data[i6] = qddot->data[i5 + i6];
      }

      q_size[0] = i2 - i1;
      loop_ub = i2 - i1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        a[i2] = q[i1 + i2];
      }

      d_st.site = &jc_emlrtRSI;
      b_rigidBodyJoint_transformBodyToParent(&d_st, RigidBody_get_Joint(&d_st,
        robot->Bodies[b_i]), a, q_size, T);
      d_st.site = &kc_emlrtRSI;
      b_sp = &d_st;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[b_i]);
      for (i1 = 0; i1 < 16; i1++) {
        TDHOffset[i1] = r->ChildToJointTransform[i1];
      }

      tforminv(TDHOffset, dv);
      tformToSpatialXform(dv, XDHOffset);
      e_st.site = &nb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      e_st.site = &yb_emlrtRSI;
      if (i4 - i3 != y->size[1]) {
        if (i4 - i3 == 1) {
          for (i1 = 0; i1 < 45; i1++) {
            b_u[i1] = d_u[i1];
          }

          d_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&e_st, 45, m, &b_u[0]);
          emlrtAssign(&d_y, m);
          for (i1 = 0; i1 < 45; i1++) {
            b_u[i1] = d_u[i1];
          }

          f_y = NULL;
          m = emlrtCreateCharArray(2, &iv4[0]);
          emlrtInitCharArrayR2013a(&e_st, 45, m, &b_u[0]);
          emlrtAssign(&f_y, m);
          f_st.site = &uc_emlrtRSI;
          error(&f_st, d_y, getString(&f_st, b_message(&f_st, f_y, &g_emlrtMCI),
                 &g_emlrtMCI), &g_emlrtMCI);
        } else {
          for (i1 = 0; i1 < 15; i1++) {
            u[i1] = c_u[i1];
          }

          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&e_st, 15, m, &u[0]);
          emlrtAssign(&c_y, m);
          for (i1 = 0; i1 < 15; i1++) {
            u[i1] = c_u[i1];
          }

          e_y = NULL;
          m = emlrtCreateCharArray(2, &iv3[0]);
          emlrtInitCharArrayR2013a(&e_st, 15, m, &u[0]);
          emlrtAssign(&e_y, m);
          f_st.site = &vc_emlrtRSI;
          error(&f_st, c_y, getString(&f_st, b_message(&f_st, e_y, &f_emlrtMCI),
                 &f_emlrtMCI), &f_emlrtMCI);
        }
      }

      qdot_size[0] = 1;
      qdot_size[1] = i4 - i3;
      loop_ub = i4 - i3;
      for (i1 = 0; i1 < loop_ub; i1++) {
        a[i1] = qdot[i3 + i1];
      }

      i1 = vJ->size[1];
      e_st.site = &nb_emlrtRSI;
      d_mtimes(y, a, qdot_size, *(real_T (*)[6])&vJ->data[6 *
               (emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &ff_emlrtBCI,
                 &d_st) - 1)]);
    }

    i1 = X->size[1] - 1;
    tforminv(T, dv);
    tformToSpatialXform(dv, X->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
      &df_emlrtBCI, &c_st)].f1);
    pid = robot->Bodies[b_i]->ParentIndex;
    if (pid > 0.0) {
      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &oe_emlrtBCI, &c_st);
      i1 = vB->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(pid, &kc_emlrtDCI, &c_st);
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sd_emlrtBCI, &c_st);
      i1 = vJ->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &rd_emlrtBCI,
        &c_st);
      i1 = vB->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &td_emlrtBCI, &c_st);
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
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &qe_emlrtBCI, &c_st);
      i1 = aB->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)pid, 1, i1, &ud_emlrtBCI, &c_st);
      d_st.site = &nb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      d_st.site = &yb_emlrtRSI;
      dynamic_size_checks(&d_st, qddoti, y->size[1], qddoti->size[0]);
      d_st.site = &nb_emlrtRSI;
      e_mtimes(y, qddoti, b_y);
      i1 = vB->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &vd_emlrtBCI,
        &c_st);
      i1 = vJ->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &wd_emlrtBCI, &c_st);
      crossMotion(*(real_T (*)[6])&vB->data[6 * (loop_ub - 1)], *(real_T (*)[6])
                  &vJ->data[6 * (k - 1)], dv1);
      i1 = aB->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &xd_emlrtBCI,
        &c_st);
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
      emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, i1, &re_emlrtBCI, &c_st);
      tformToSpatialXform(T, XDHOffset);
      for (i1 = 0; i1 < 6; i1++) {
        for (i2 = 0; i2 < 6; i2++) {
          b_Xtree[i1 + 6 * i2] = 0.0;
          for (i3 = 0; i3 < 6; i3++) {
            b_Xtree[i1 + 6 * i2] += Xtree->data[(int32_T)pid - 1].f1[i1 + 6 * i3]
              * XDHOffset[i3 + 6 * i2];
          }
        }
      }

      i1 = Xtree->size[1] - 1;
      memcpy(&Xtree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &gf_emlrtBCI,
              &c_st)].f1[0], &b_Xtree[0], 36U * sizeof(real_T));
    } else {
      i1 = vJ->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &yd_emlrtBCI,
        &c_st);
      i1 = vB->size[1];
      k = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &ae_emlrtBCI, &c_st);
      for (i1 = 0; i1 < 6; i1++) {
        vB->data[i1 + 6 * (k - 1)] = vJ->data[i1 + 6 * (loop_ub - 1)];
      }

      i1 = X->size[1] - 1;
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &pe_emlrtBCI, &c_st);
      d_st.site = &nb_emlrtRSI;
      mtimes(XDHOffset, b_S, y);
      d_st.site = &yb_emlrtRSI;
      dynamic_size_checks(&d_st, qddoti, y->size[1], qddoti->size[0]);
      d_st.site = &nb_emlrtRSI;
      e_mtimes(y, qddoti, b_y);
      i1 = aB->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &be_emlrtBCI,
        &c_st);
      for (i1 = 0; i1 < 6; i1++) {
        d = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          d += X->data[b_i].f1[i1 + 6 * i2] * a0[i2];
        }

        aB->data[i1 + 6 * (loop_ub - 1)] = d + b_y[i1];
      }

      i1 = Xtree->size[1] - 1;
      tformToSpatialXform(T, Xtree->data[emlrtDynamicBoundsCheckR2012b(b_i, 0,
        i1, &ef_emlrtBCI, &c_st)].f1);
    }

    for (i1 = 0; i1 < 36; i1++) {
      XDHOffset[i1] = robot->Bodies[b_i]->SpatialInertia[i1];
    }

    i1 = vB->size[1];
    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &ce_emlrtBCI, &c_st);
    i1 = Xtree->size[1] - 1;
    emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &se_emlrtBCI, &c_st);
    i1 = aB->size[1];
    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &de_emlrtBCI, &c_st);
    i1 = vB->size[1];
    loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &ee_emlrtBCI, &c_st);
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
        pid = b_X[i1] + Xtree->data[b_i].f1[i2 + 6 * i1] * fext[i2 + 6 * b_i];
        b_X[i1] = pid;
      }

      b_y[i1] = d + dv1[i1];
    }

    i1 = f->size[1];
    loop_ub = emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i1, &fe_emlrtBCI, &c_st);
    for (i1 = 0; i1 <= 4; i1 += 2) {
      r1 = _mm_loadu_pd(&b_y[i1]);
      r2 = _mm_loadu_pd(&b_X[i1]);
      _mm_storeu_pd(&f->data[i1 + 6 * (loop_ub - 1)], _mm_sub_pd(r1, r2));
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&aB);
  emxFree_real_T(&vB);
  emxFree_cell_wrap(&Xtree);
  i = (int32_T)-((-1.0 - nb) + 1.0) - 1;
  emlrtForLoopVectorCheckR2021a(nb, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-((-1.0
    - nb) + 1.0), &i_emlrtRTEI, (emlrtConstCTX)sp);
  for (b_i = 0; b_i <= i; b_i++) {
    c_i = nb - (real_T)b_i;
    st.site = &lc_emlrtRSI;
    b_sp = &st;
    i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &vc_emlrtDCI, &st) - 1;
    r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b(i1,
      0, 7, &ye_emlrtBCI, &st)]);
    if (!d_strcmp(r->Type)) {
      b_st.site = &mc_emlrtRSI;
      b_sp = &b_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &xc_emlrtDCI, &b_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 7, &bf_emlrtBCI, &b_st)]);
      for (i1 = 0; i1 < 16; i1++) {
        TDHOffset[i1] = r->ChildToJointTransform[i1];
      }

      c_st.site = &nc_emlrtRSI;
      b_sp = &c_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &yc_emlrtDCI, &c_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 7, &cf_emlrtBCI, &c_st)]);
      i1 = 6 * r->MotionSubspace->size[1];
      i2 = vJ->size[0] * vJ->size[1];
      vJ->size[0] = 6;
      d_st.site = &nc_emlrtRSI;
      b_sp = &d_st;
      i3 = (int32_T)emlrtIntegerCheckR2012b(c_i, &yc_emlrtDCI, &d_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i3, 0, 7, &cf_emlrtBCI, &d_st)]);
      vJ->size[1] = r->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(vJ, i2);
      loop_ub = i1 - 1;
      e_st.site = &nc_emlrtRSI;
      b_sp = &e_st;
      i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &yc_emlrtDCI, &e_st) - 1;
      r = RigidBody_get_Joint(b_sp, robot->Bodies[emlrtDynamicBoundsCheckR2012b
        (i1, 0, 7, &cf_emlrtBCI, &e_st)]);
      for (i1 = 0; i1 <= loop_ub; i1++) {
        vJ->data[i1] = r->MotionSubspace->data[i1];
      }

      tforminv(TDHOffset, dv);
      tformToSpatialXform(dv, XDHOffset);
      f_st.site = &nb_emlrtRSI;
      mtimes(XDHOffset, vJ, b_S);
      i1 = f->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &ge_emlrtBCI, &e_st);
      f_st.site = &nb_emlrtRSI;
      f_mtimes(b_S, *(real_T (*)[6])&f->data[6 * ((int32_T)c_i - 1)], qddoti);
      loop_ub = emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, 8, &he_emlrtBCI,
        &e_st);
      for (i1 = 0; i1 < 2; i1++) {
        b[i1] = robot->VelocityDoFMap[(loop_ub + (i1 << 3)) - 1];
      }

      if (b[0] > b[1]) {
        i1 = 0;
        i2 = 0;
      } else {
        i1 = (int32_T)emlrtIntegerCheckR2012b(b[0], &nc_emlrtDCI, &e_st);
        i1 = emlrtDynamicBoundsCheckR2012b(i1, 1, 2, &le_emlrtBCI, &e_st) - 1;
        i2 = (int32_T)emlrtIntegerCheckR2012b(b[1], &oc_emlrtDCI, &e_st);
        i2 = emlrtDynamicBoundsCheckR2012b(i2, 1, 2, &me_emlrtBCI, &e_st);
      }

      i3 = qddoti->size[0];
      emlrtSubAssignSizeCheck1dR2017a(i2 - i1, i3, &e_emlrtECI, &e_st);
      loop_ub = i2 - i1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        tau[i1 + i2] = qddoti->data[i2];
      }
    }

    i1 = (int32_T)emlrtIntegerCheckR2012b(c_i, &wc_emlrtDCI, &st) - 1;
    pid = robot->Bodies[emlrtDynamicBoundsCheckR2012b(i1, 0, 7, &af_emlrtBCI,
      &st)]->ParentIndex;
    if (pid > 0.0) {
      i1 = X->size[1] - 1;
      i2 = (int32_T)emlrtIntegerCheckR2012b(c_i, &lc_emlrtDCI, &st) - 1;
      emlrtDynamicBoundsCheckR2012b(i2, 0, i1, &ne_emlrtBCI, &st);
      i1 = f->size[1];
      emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, i1, &je_emlrtBCI, &st);
      i1 = f->size[1];
      loop_ub = emlrtDynamicBoundsCheckR2012b((int32_T)pid, 1, i1, &ie_emlrtBCI,
        &st);
      i1 = f->size[1];
      i2 = (int32_T)emlrtIntegerCheckR2012b(pid, &mc_emlrtDCI, &st);
      k = emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ke_emlrtBCI, &st);
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

  emxFree_real_T(&qddoti);
  emxFree_real_T(&b_S);
  emxFree_real_T(&f);
  emxFree_real_T(&vJ);
  emxFree_cell_wrap(&X);
}

static void d_mtimes(emxArray_real_T *A, real_T B_data[], int32_T B_size[2],
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

static void dynamic_size_checks(const emlrtStack *sp, emxArray_real_T *b,
  int32_T innerDimA, int32_T innerDimB)
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
    if (b->size[0] == 1) {
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
      st.site = &uc_emlrtRSI;
      error(&st, b_y, getString(&st, b_message(&st, d_y, &g_emlrtMCI),
             &g_emlrtMCI), &g_emlrtMCI);
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
      st.site = &vc_emlrtRSI;
      error(&st, y, getString(&st, b_message(&st, c_y, &f_emlrtMCI), &f_emlrtMCI),
            &f_emlrtMCI);
    }
  }
}

static void e_mtimes(emxArray_real_T *A, emxArray_real_T *B, real_T C[6])
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
  if ((A->size[1] == 0) || (B->size[0] == 0)) {
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
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)6;
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A->data[0], &lda_t,
          &B->data[0], &ldb_t, &beta1, &C[0], &ldc_t);
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

static void f_mtimes(emxArray_real_T *A, real_T B[6], emxArray_real_T *C)
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
  robotics_manip_internal_CollisionGeometry b_expl_temp;
  robotics_manip_internal_CollisionGeometry expl_temp;
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
    st.site = &pc_emlrtRSI;
    d = obj->Size;
    i = (int32_T)d - 1;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &j_emlrtRTEI, &st);
    for (b_i = 0; b_i <= i; b_i++) {
      b_st.site = &qc_emlrtRSI;
      i1 = obj->CollisionGeometries->size[1] - 1;
      expl_temp = obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b
        (b_i, 0, i1, &if_emlrtBCI, &b_st)];
      c_st.site = &rc_emlrtRSI;
      collisioncodegen_destructGeometry(&expl_temp.CollisionPrimitive);
      i1 = obj->CollisionGeometries->size[1] - 1;
      b_expl_temp.CollisionPrimitive = expl_temp.CollisionPrimitive;
      obj->CollisionGeometries->data[emlrtDynamicBoundsCheckR2012b(b_i, 0, i1,
        &hf_emlrtBCI, &st)] = b_expl_temp;
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

static void b_sqrt(const emlrtStack *sp, real_T *x)
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T d_u[4] = { 's', 'q', 'r', 't' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[30];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    for (i = 0; i < 30; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &sc_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  *x = muDoubleScalarSqrt(*x);
}

static void binary_expand_op(emxArray_real_T *in1, real_T in2[2])
{
  emxArray_real_T *b_in1;
  real_T b_in2;
  real_T c_in2;
  int32_T aux_0_1;
  int32_T i;
  int32_T stride_0_1;
  int32_T unnamed_idx_1;
  b_in2 = in2[1];
  c_in2 = in2[0];
  unnamed_idx_1 = (int32_T)((b_in2 - c_in2) + 1.0);
  emxInit_real_T(&b_in1, 2);
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = 1;
  if (unnamed_idx_1 == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = unnamed_idx_1;
  }

  emxEnsureCapacity_real_T(b_in1, i);
  stride_0_1 = (in1->size[1] != 1);
  aux_0_1 = 0;
  if (unnamed_idx_1 == 1) {
    unnamed_idx_1 = in1->size[1];
  }

  for (i = 0; i < unnamed_idx_1; i++) {
    b_in1->data[i] = in1->data[aux_0_1] - 1.0;
    aux_0_1 += stride_0_1;
  }

  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(in1, i);
  unnamed_idx_1 = b_in1->size[1];
  for (i = 0; i < unnamed_idx_1; i++) {
    in1->data[i] = b_in1->data[i];
  }

  emxFree_real_T(&b_in1);
}

static void emxInitStruct_robotics_slmanip_
  (robotics_slmanip_internal_block_ForwardDynamicsBlock *pStruct)
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
  (robotics_slmanip_internal_block_ForwardDynamicsBlock *pStruct)
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

    newData = emlrtCallocMex((uint32_T)i, sizeof(char_T));
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

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
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

    newData = emlrtCallocMex((uint32_T)i, sizeof
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

    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
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

    newData = emlrtCallocMex((uint32_T)i, sizeof(cell_wrap));
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

static int32_T div_nzp_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T tempAbsQuotient;
  uint32_T u;
  if (numerator < 0) {
    tempAbsQuotient = ~(uint32_T)numerator + 1U;
  } else {
    tempAbsQuotient = (uint32_T)numerator;
  }

  if (denominator < 0) {
    u = ~(uint32_T)denominator + 1U;
  } else {
    u = (uint32_T)denominator;
  }

  tempAbsQuotient /= u;
  if ((numerator < 0) != (denominator < 0)) {
    quotient = -(int32_T)tempAbsQuotient;
  } else {
    quotient = (int32_T)tempAbsQuotient;
  }

  return quotient;
}

static void init_simulink_io_address(InstanceStruct_n6niWwMRpjrtilrawm4Y8E
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (real_T (*)[2])cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->u1 = (real_T (*)[2])cgxertGetInputPortSignal(moduleInstance->S,
    1);
  moduleInstance->u2 = (real_T (*)[2])cgxertGetInputPortSignal(moduleInstance->S,
    2);
  moduleInstance->u3 = (real_T (*)[48])cgxertGetInputPortSignal
    (moduleInstance->S, 3);
  moduleInstance->b_y0 = (real_T (*)[2])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_n6niWwMRpjrtilrawm4Y8E(SimStruct *S, int_T tid)
{
  InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance =
    (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_n6niWwMRpjrtilrawm4Y8E(SimStruct *S)
{
  InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance =
    (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_n6niWwMRpjrtilrawm4Y8E(SimStruct *S, int_T tid)
{
  InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance =
    (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_n6niWwMRpjrtilrawm4Y8E(SimStruct *S)
{
  InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance =
    (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_n6niWwMRpjrtilrawm4Y8E(SimStruct *S)
{
  InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance =
    (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_n6niWwMRpjrtilrawm4Y8E(SimStruct *S)
{
  InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance =
    (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_n6niWwMRpjrtilrawm4Y8E(SimStruct *S)
{
  InstanceStruct_n6niWwMRpjrtilrawm4Y8E *moduleInstance =
    (InstanceStruct_n6niWwMRpjrtilrawm4Y8E *)calloc(1, sizeof
    (InstanceStruct_n6niWwMRpjrtilrawm4Y8E));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_n6niWwMRpjrtilrawm4Y8E);
  ssSetmdlInitializeConditions(S, mdlInitialize_n6niWwMRpjrtilrawm4Y8E);
  ssSetmdlUpdate(S, mdlUpdate_n6niWwMRpjrtilrawm4Y8E);
  ssSetmdlTerminate(S, mdlTerminate_n6niWwMRpjrtilrawm4Y8E);
  ssSetmdlEnable(S, mdlEnable_n6niWwMRpjrtilrawm4Y8E);
  ssSetmdlDisable(S, mdlDisable_n6niWwMRpjrtilrawm4Y8E);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_n6niWwMRpjrtilrawm4Y8E(SimStruct *S)
{
}

void method_dispatcher_n6niWwMRpjrtilrawm4Y8E(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_n6niWwMRpjrtilrawm4Y8E(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_n6niWwMRpjrtilrawm4Y8E(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: n6niWwMRpjrtilrawm4Y8E.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_n6niWwMRpjrtilrawm4Y8E_BuildInfoUpdate(void)
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
  elem_19 = mxCreateString(
    "robotics.core.internal.coder.CollisionGeometryBuildable");
  mxSetCell(elem_18,0,elem_19);
  elem_20 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_18,1,elem_20);
  mxSetCell(mxBIArgs,1,elem_18);
  elem_21 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_21);
  return mxBIArgs;
}

mxArray *cgxe_n6niWwMRpjrtilrawm4Y8E_fallback_info(void)
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
