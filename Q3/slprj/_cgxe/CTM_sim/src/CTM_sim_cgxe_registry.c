#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                CTM_sim_cgxe
#include "simstruc.h"
#include "CTM_sim_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_CTM_sim_method_dispatcher(S, SS_CALL_MDL_START, NULL);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }
}

#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlInitializeConditions method directly.\n");
}

#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlUpdate method directly.\n");
}

static void mdlOutputs(SimStruct* S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlOutputs method directly.\n");
}

static void mdlTerminate(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlTerminate method directly.\n");
}

static void mdlInitializeSizes(SimStruct *S)
{
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
}

static mxArray* cgxe_get_supported_modules(void)
{
  mxArray* mxModules = mxCreateCellMatrix(4, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 549433286;
  checksumData[1] = 2264148292;
  checksumData[2] = 1394649542;
  checksumData[3] = 1512202448;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 930671309;
  checksumData[1] = 480553441;
  checksumData[2] = 2083317479;
  checksumData[3] = 4079338517;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1893313736;
  checksumData[1] = 2398404728;
  checksumData[2] = 1459756684;
  checksumData[3] = 1957484927;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3355122802;
  checksumData[1] = 549235063;
  checksumData[2] = 874419924;
  checksumData[3] = 2781015444;
  mxSetCell(mxModules, 3, mxChksum);
  return mxModules;
}

static int cgxe_process_get_checksums(int nlhs, mxArray* plhs[], int nrhs, const
  mxArray* prhs[])
{
  const char* checksumFields[] = { "modules", "model", "makefile", "target",
    "overall" };

  mxArray* mxChecksum = mxCreateStructMatrix(1, 1, 5, checksumFields);
  mxSetField(mxChecksum, 0, "modules", cgxe_get_supported_modules());

  {
    mxArray* mxModelChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxModelChksum);
    checksumData[0] = 2911909001;
    checksumData[1] = 465830130;
    checksumData[2] = 1938408695;
    checksumData[3] = 3700982851;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 1863187051;
    checksumData[1] = 3822399650;
    checksumData[2] = 742923066;
    checksumData[3] = 3407842702;
    mxSetField(mxChecksum, 0, "makefile", mxMakefileChksum);
  }

  {
    mxArray* mxTargetChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxTargetChksum);
    checksumData[0] = 2911221907;
    checksumData[1] = 2308967934;
    checksumData[2] = 2419390157;
    checksumData[3] = 1906300239;
    mxSetField(mxChecksum, 0, "target", mxTargetChksum);
  }

  {
    mxArray* mxOverallChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxOverallChksum);
    checksumData[0] = 3615543170;
    checksumData[1] = 3018355358;
    checksumData[2] = 963616508;
    checksumData[3] = 3213673625;
    mxSetField(mxChecksum, 0, "overall", mxOverallChksum);
  }

  plhs[0] = mxChecksum;
  return 1;
}

static int cgxe_mex_unlock_call(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  while (mexIsLocked()) {
    mexUnlock();
  }

  return 1;
}

static SimStruct* cgxe_unpack_simstruct(const mxArray *mxS)
{
  uint32_T *uintPtr = (uint32_T*)malloc(sizeof(SimStruct*));
  int nEl = sizeof(SimStruct*)/sizeof(uint32_T);
  uint32_T *uintDataPtr = (uint32_T *)mxGetData(mxS);
  int el;
  SimStruct *S;
  for (el=0; el < nEl; el++) {
    uintPtr[el] = uintDataPtr[el];
  }

  memcpy(&S,uintPtr,sizeof(SimStruct*));
  free(uintPtr);
  return S;
}

static int cgxe_get_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_CTM_sim_method_dispatcher(S, SS_CALL_MDL_GET_SIM_STATE, (void *)
    (plhs));
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_set_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_CTM_sim_method_dispatcher(S, SS_CALL_MDL_SET_SIM_STATE, (void *)
    prhs[2]);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_get_BuildInfoUpdate(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "FAU8KyrDQYUp9atreb3T4G") == 0) {
    extern mxArray *cgxe_FAU8KyrDQYUp9atreb3T4G_BuildInfoUpdate(void);
    plhs[0] = cgxe_FAU8KyrDQYUp9atreb3T4G_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "G0TGdfWLU7lDoL4R3O6AXE") == 0) {
    extern mxArray *cgxe_G0TGdfWLU7lDoL4R3O6AXE_BuildInfoUpdate(void);
    plhs[0] = cgxe_G0TGdfWLU7lDoL4R3O6AXE_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "AKShaqSWlWB5lVeRjU05XB") == 0) {
    extern mxArray *cgxe_AKShaqSWlWB5lVeRjU05XB_BuildInfoUpdate(void);
    plhs[0] = cgxe_AKShaqSWlWB5lVeRjU05XB_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "xSE9GNLJOSGMLwcrwI4qWD") == 0) {
    extern mxArray *cgxe_xSE9GNLJOSGMLwcrwI4qWD_BuildInfoUpdate(void);
    plhs[0] = cgxe_xSE9GNLJOSGMLwcrwI4qWD_BuildInfoUpdate();
    return 1;
  }

  return 0;
}

static int cgxe_get_fallback_info(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "FAU8KyrDQYUp9atreb3T4G") == 0) {
    extern mxArray *cgxe_FAU8KyrDQYUp9atreb3T4G_fallback_info(void);
    plhs[0] = cgxe_FAU8KyrDQYUp9atreb3T4G_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "G0TGdfWLU7lDoL4R3O6AXE") == 0) {
    extern mxArray *cgxe_G0TGdfWLU7lDoL4R3O6AXE_fallback_info(void);
    plhs[0] = cgxe_G0TGdfWLU7lDoL4R3O6AXE_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "AKShaqSWlWB5lVeRjU05XB") == 0) {
    extern mxArray *cgxe_AKShaqSWlWB5lVeRjU05XB_fallback_info(void);
    plhs[0] = cgxe_AKShaqSWlWB5lVeRjU05XB_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "xSE9GNLJOSGMLwcrwI4qWD") == 0) {
    extern mxArray *cgxe_xSE9GNLJOSGMLwcrwI4qWD_fallback_info(void);
    plhs[0] = cgxe_xSE9GNLJOSGMLwcrwI4qWD_fallback_info();
    return 1;
  }

  return 0;
}

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

static int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray* plhs[], int nrhs,
  const mxArray* prhs[])
{
  char commandName[64];
  if (nrhs < 1 || !mxIsChar(prhs[0]))
    return 0;
  mxGetString(prhs[0], commandName, sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName, "get_checksums") == 0) {
    return cgxe_process_get_checksums(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_unlock") == 0) {
    return cgxe_mex_unlock_call(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_sim_state") == 0) {
    return cgxe_get_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "set_sim_state") == 0) {
    return cgxe_set_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_BuildInfoUpdate") == 0) {
    return cgxe_get_BuildInfoUpdate(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_fallback_info") == 0) {
    return cgxe_get_fallback_info(nlhs, plhs, nrhs, prhs);
  }

  return 0;
}

#include "simulink.c"