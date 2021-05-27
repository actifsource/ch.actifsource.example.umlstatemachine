//--------------------------------------------------------------------------
// (C) Copyright Actifsource GmbH  2012-2015
//
// Use or copying of all or any part of the document, except as
// permitted by the License Agreement is prohibited.
//--------------------------------------------------------------------------

// Header files from the environment
#include <limits.h>
/* Begin Protected Region [[EnvironmentInclude]] */
#include <stdio.h>
/* End Protected Region   [[EnvironmentInclude]] */

// Header files from external components
/* Begin Protected Region [[ComponentInclude]] */

/* End Protected Region   [[ComponentInclude]] */

// Header files from own component
#include "Statemachine_TestStm.h"

// Own header file 


// ----------------------------------------------------------------------------

extern void execState_TestStm_TestState(T_Statemachine_TestStm* pStatemachineBase, T_Event_TestStm eEvent);
extern void execState_TestStm_SS2(T_Statemachine_TestStm* pStatemachineBase, T_Event_TestStm eEvent);
extern void execState_TestStm_SS2_S21(T_Statemachine_TestStm* pStatemachineBase, T_Event_TestStm eEvent);
extern void execState_TestStm_SS2_SS22(T_Statemachine_TestStm* pStatemachineBase, T_Event_TestStm eEvent);
extern void execState_TestStm_SS2_SS22_SS221(T_Statemachine_TestStm* pStatemachineBase, T_Event_TestStm eEvent);
extern void execState_TestStm_SS2_SS22_SS221_S2211(T_Statemachine_TestStm* pStatemachineBase, T_Event_TestStm eEvent);
extern void execState_TestStm_SS1(T_Statemachine_TestStm* pStatemachineBase, T_Event_TestStm eEvent);
extern void execState_TestStm_SS1_S11(T_Statemachine_TestStm* pStatemachineBase, T_Event_TestStm eEvent);

// ----------------------------------------------------------------------------

inline int sharedGuard_g_S1_S1(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e85f4-9905-11ea-8568-8df113ebd62f,Guard]] */
  printf("sharedGuard_g_S1_S1\n");
  return 1;
  /* End Protected Region   [[ba1e85f4-9905-11ea-8568-8df113ebd62f,Guard]] */
}
 
// ----------------------------------------------------------------------------

inline int sharedGuard_g_SS1_SS2(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e85f5-9905-11ea-8568-8df113ebd62f,Guard]] */
  printf("sharedGuard_g_SS1_SS2\n");
  return 1;
  /* End Protected Region   [[ba1e85f5-9905-11ea-8568-8df113ebd62f,Guard]] */
}
 
// ----------------------------------------------------------------------------

inline int sharedGuard_g_SS2_SS1(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e85f6-9905-11ea-8568-8df113ebd62f,Guard]] */
  printf("sharedGuard_g_SS2_SS1\n");
  return 1;
  /* End Protected Region   [[ba1e85f6-9905-11ea-8568-8df113ebd62f,Guard]] */
}
 
// ----------------------------------------------------------------------------

inline int sharedGuard_g_SS1_SS2_H(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e85f7-9905-11ea-8568-8df113ebd62f,Guard]] */
  printf("sharedGuard_g_SS1_SS2_H\n");
  return 1;
  /* End Protected Region   [[ba1e85f7-9905-11ea-8568-8df113ebd62f,Guard]] */
}
 
// ----------------------------------------------------------------------------

inline int sharedGuard_g_S21_SS22(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e85f8-9905-11ea-8568-8df113ebd62f,Guard]] */
  printf("sharedGuard_g_S21_SS22\n");
  return 1;
  /* End Protected Region   [[ba1e85f8-9905-11ea-8568-8df113ebd62f,Guard]] */
}
 
// ----------------------------------------------------------------------------

inline int sharedGuard_g_SS22_S21(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e85f9-9905-11ea-8568-8df113ebd62f,Guard]] */
  printf("sharedGuard_g_SS22_S21\n");
  return 1;
  /* End Protected Region   [[ba1e85f9-9905-11ea-8568-8df113ebd62f,Guard]] */
}
 
// ----------------------------------------------------------------------------

inline int sharedGuard_g_SS22_SS22(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e85fa-9905-11ea-8568-8df113ebd62f,Guard]] */
  printf("sharedGuard_g_SS22_SS22\n");
  return 1;
  /* End Protected Region   [[ba1e85fa-9905-11ea-8568-8df113ebd62f,Guard]] */
}
 
// ----------------------------------------------------------------------------

inline int sharedGuard_g_SS22_SS22_H(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e85fb-9905-11ea-8568-8df113ebd62f,Guard]] */
  printf("sharedGuard_g_SS22_SS22_H\n");
  return 1;
  /* End Protected Region   [[ba1e85fb-9905-11ea-8568-8df113ebd62f,Guard]] */
}
 
// ----------------------------------------------------------------------------

inline void sharedFunction_do_S11(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e864a-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_do_S11\n");
  /* End Protected Region   [[ba1e864a-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_do_S21(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e864c-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_do_S21\n");
  /* End Protected Region   [[ba1e864c-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_do_S2211(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e864e-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_do_S2211\n");
  /* End Protected Region   [[ba1e864e-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_entry_SS1(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8650-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_entry_SS1\n");
  /* End Protected Region   [[ba1e8650-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_exit_SS1(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8652-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_exit_SS1\n");
  /* End Protected Region   [[ba1e8652-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_entry_S11(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8654-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_entry_S11\n");
  /* End Protected Region   [[ba1e8654-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_exit_S11(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8656-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_exit_S11\n");
  /* End Protected Region   [[ba1e8656-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_entry_SS2(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8658-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_entry_SS2\n");
  /* End Protected Region   [[ba1e8658-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_exit_SS2(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e865a-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_exit_SS2\n");
  /* End Protected Region   [[ba1e865a-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_entry_S21(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e865c-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_entry_S21\n");
  /* End Protected Region   [[ba1e865c-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_exit_S21(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e865e-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_exit_S21\n");
  /* End Protected Region   [[ba1e865e-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_entry_SS22(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8660-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_entry_SS22\n");
  /* End Protected Region   [[ba1e8660-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_exit_SS22(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8662-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_exit_SS22\n");
  /* End Protected Region   [[ba1e8662-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_entry_SS221(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8664-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_entry_SS221\n");
  /* End Protected Region   [[ba1e8664-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_exit_SS221(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8666-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_exit_SS221\n");
  /* End Protected Region   [[ba1e8666-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_entry_S2211(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8668-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_entry_S2211\n");
  /* End Protected Region   [[ba1e8668-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_exit_S2211(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e866a-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_exit_S2211\n");
  /* End Protected Region   [[ba1e866a-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_t_S1_S1(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e866c-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_t_S1_S1\n");
  /* End Protected Region   [[ba1e866c-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_t_SS1_SS2(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e866e-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_t_SS1_SS2\n");
  /* End Protected Region   [[ba1e866e-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_t_SS2_SS1(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8670-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_t_SS2_SS1\n");
  /* End Protected Region   [[ba1e8670-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_t_SS1_SS2_H(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8672-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_t_SS1_SS2_H\n");
  /* End Protected Region   [[ba1e8672-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_t_S21_SS22(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8674-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_t_S21_SS22\n");
  /* End Protected Region   [[ba1e8674-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_t_SS22_S21(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8676-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_t_SS22_S21\n");
  /* End Protected Region   [[ba1e8676-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_t_SS22_SS22(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8678-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_t_SS22_SS22\n");
  /* End Protected Region   [[ba1e8678-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------

inline void sharedFunction_t_SS22_SS22_H(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e867a-9905-11ea-8568-8df113ebd62f,Function]] */
  printf("sharedFunction_t_SS22_SS22_H\n");
  /* End Protected Region   [[ba1e867a-9905-11ea-8568-8df113ebd62f,Function]] */
}

// ----------------------------------------------------------------------------
// StateBase TestStm_TestState
// ----------------------------------------------------------------------------

inline void localEntryFunction_TestStm_TestState(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  pPrivate->TestDataInteger = ((int)(pPrivate->TestDataInteger * 1000));
}

// ----------------------------------------------------------------------------

inline void localExitFunction_TestStm_TestState(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8615-9905-11ea-8568-8df113ebd62f,ExitFunction]] */
  printf("localExitFunction_TestStm\n");
  /* End Protected Region   [[ba1e8615-9905-11ea-8568-8df113ebd62f,ExitFunction]] */
}

// ----------------------------------------------------------------------------

inline void localStateFunction_TestStm_TestState(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  if (pPrivate->TestDataInteger <= 100)
  {
    pPrivate->TestDataInteger = 100;
  }
}

// ----------------------------------------------------------------------------

inline int localGuard_TestStm_TestState_TO_SS1(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  return (pPrivate->TestDataInteger <= 100);
}

// ----------------------------------------------------------------------------

inline void localTransitionFunction_TestStm_TestState_TO_SS1_Guard(T_PublicMemberVariable_TestStm* pPublic,T_PrivateMemberVariable_TestStm* pPrivate)
{
  /* Begin Protected Region [[ba1e8615-9905-11ea-8568-8df113ebd62f,ba1e8602-9905-11ea-8568-8df113ebd62f,TransitionFunction]] */
  printf("localTransitionFunction_TestStm\n");
  /* End Protected Region   [[ba1e8615-9905-11ea-8568-8df113ebd62f,ba1e8602-9905-11ea-8568-8df113ebd62f,TransitionFunction]] */
}


// ----------------------------------------------------------------------------
// Init Statemachine
// ----------------------------------------------------------------------------

void initStatemachine_TestStm(T_Statemachine_TestStm* pStatemachine)
{
  pStatemachine->currentState = 0;
  pStatemachine->historyState_SS2 = execState_TestStm_SS2_S21;
  execState_TestStm_SS1_S11(pStatemachine,TestStmEvent__Entry);
  execState_TestStm_SS1_S11(pStatemachine,TestStmEvent__State);
}

// ----------------------------------------------------------------------------

void execState_TestStm_TestState(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  T_PublicMemberVariable_TestStm* pPublicMemberVariable = &pStatemachine->publicMemberVariable;
  T_PrivateMemberVariable_TestStm* pPrivateMemberVariable = &pStatemachine->privateMemberVariable;
  if (eEvent == TestStmEvent__Entry)
  {
    localEntryFunction_TestStm_TestState(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_TestState;
  }
  else if (eEvent == TestStmEvent__State)
  {
    localStateFunction_TestStm_TestState(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent__Exit)
  {
    localExitFunction_TestStm_TestState(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent_EventIn && localGuard_TestStm_TestState_TO_SS1(pPublicMemberVariable,pPrivateMemberVariable))
  {
    T_StateFunction_TestStm currentState = pStatemachine->currentState;
    pStatemachine->currentState = execState_TestStm_TestState;
    currentState(pStatemachine,TestStmEvent__Exit);
    localTransitionFunction_TestStm_TestState_TO_SS1_Guard(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS1;
    execState_TestStm_SS1_S11(pStatemachine,TestStmEvent__Entry);
    pStatemachine->currentState(pStatemachine,TestStmEvent__State);
  }
}

// ----------------------------------------------------------------------------

void execState_TestStm_SS2(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  T_PublicMemberVariable_TestStm* pPublicMemberVariable = &pStatemachine->publicMemberVariable;
  T_PrivateMemberVariable_TestStm* pPrivateMemberVariable = &pStatemachine->privateMemberVariable;
  if (eEvent == TestStmEvent__Entry)
  {
    sharedFunction_entry_SS2(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent__Exit)
  {
    sharedFunction_exit_SS2(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent_EventOut && sharedGuard_g_SS2_SS1(pPublicMemberVariable,pPrivateMemberVariable))
  {
    pStatemachine->historyState_SS2 = pStatemachine->currentState;
    T_StateFunction_TestStm currentState = pStatemachine->currentState;
    pStatemachine->currentState = execState_TestStm_SS2;
    currentState(pStatemachine,TestStmEvent__Exit);
    sharedFunction_t_SS2_SS1(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS1;
    execState_TestStm_SS1_S11(pStatemachine,TestStmEvent__Entry);
    pStatemachine->currentState(pStatemachine,TestStmEvent__State);
  }
}

// ----------------------------------------------------------------------------

void execState_TestStm_SS2_S21(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  T_PublicMemberVariable_TestStm* pPublicMemberVariable = &pStatemachine->publicMemberVariable;
  T_PrivateMemberVariable_TestStm* pPrivateMemberVariable = &pStatemachine->privateMemberVariable;
  if (eEvent == TestStmEvent__Entry)
  {
    if (pStatemachine->currentState != execState_TestStm_SS2_S21) 
    {
      execState_TestStm_SS2(pStatemachine,TestStmEvent__Entry);
    }
    sharedFunction_entry_S21(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS2_S21;
  }
  else if (eEvent == TestStmEvent__State)
  {
    sharedFunction_do_S21(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent__Exit)
  {
    sharedFunction_exit_S21(pPublicMemberVariable,pPrivateMemberVariable);
    if (pStatemachine->currentState != execState_TestStm_SS2_S21)
    {
      execState_TestStm_SS2(pStatemachine,TestStmEvent__Exit);
    }
  }
  else if (eEvent == TestStmEvent_EventIn && sharedGuard_g_S21_SS22(pPublicMemberVariable,pPrivateMemberVariable))
  {
    T_StateFunction_TestStm currentState = pStatemachine->currentState;
    pStatemachine->currentState = execState_TestStm_SS2_S21;
    currentState(pStatemachine,TestStmEvent__Exit);
    sharedFunction_t_S21_SS22(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS2_SS22;
    execState_TestStm_SS2_SS22_SS221_S2211(pStatemachine,TestStmEvent__Entry);
    pStatemachine->currentState(pStatemachine,TestStmEvent__State);
  }
  else
  {
    execState_TestStm_SS2(pStatemachine,eEvent);
  }
}

// ----------------------------------------------------------------------------

void execState_TestStm_SS2_SS22(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  T_PublicMemberVariable_TestStm* pPublicMemberVariable = &pStatemachine->publicMemberVariable;
  T_PrivateMemberVariable_TestStm* pPrivateMemberVariable = &pStatemachine->privateMemberVariable;
  if (eEvent == TestStmEvent__Entry)
  {
    if (pStatemachine->currentState != execState_TestStm_SS2_SS22) 
    {
      execState_TestStm_SS2(pStatemachine,TestStmEvent__Entry);
    }
    sharedFunction_entry_SS22(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent__Exit)
  {
    sharedFunction_exit_SS22(pPublicMemberVariable,pPrivateMemberVariable);
    if (pStatemachine->currentState != execState_TestStm_SS2_SS22)
    {
      execState_TestStm_SS2(pStatemachine,TestStmEvent__Exit);
    }
  }
  else if (eEvent == TestStmEvent_EventSelf && sharedGuard_g_SS22_SS22(pPublicMemberVariable,pPrivateMemberVariable))
  {
    pStatemachine->historyState_SS2 = pStatemachine->currentState;
    T_StateFunction_TestStm currentState = pStatemachine->currentState;
    pStatemachine->currentState = execState_TestStm_SS2_SS22;
    currentState(pStatemachine,TestStmEvent__Exit);
    sharedFunction_t_SS22_SS22(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS2_SS22;
    execState_TestStm_SS2_SS22_SS221_S2211(pStatemachine,TestStmEvent__Entry);
    pStatemachine->currentState(pStatemachine,TestStmEvent__State);
  }
  else if (eEvent == TestStmEvent_EventHistory && sharedGuard_g_SS22_SS22_H(pPublicMemberVariable,pPrivateMemberVariable))
  {
    pStatemachine->historyState_SS2 = pStatemachine->currentState;
    T_StateFunction_TestStm currentState = pStatemachine->currentState;
    pStatemachine->currentState = execState_TestStm_SS2_SS22;
    currentState(pStatemachine,TestStmEvent__Exit);
    sharedFunction_t_SS22_SS22_H(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS2_SS22;
    pStatemachine->historyState_SS2(pStatemachine,TestStmEvent__Entry);
    pStatemachine->currentState(pStatemachine,TestStmEvent__State);
  }
  else
  {
    execState_TestStm_SS2(pStatemachine,eEvent);
  }
}

// ----------------------------------------------------------------------------

void execState_TestStm_SS2_SS22_SS221(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  T_PublicMemberVariable_TestStm* pPublicMemberVariable = &pStatemachine->publicMemberVariable;
  T_PrivateMemberVariable_TestStm* pPrivateMemberVariable = &pStatemachine->privateMemberVariable;
  if (eEvent == TestStmEvent__Entry)
  {
    if (pStatemachine->currentState != execState_TestStm_SS2_SS22_SS221) 
    {
      execState_TestStm_SS2_SS22(pStatemachine,TestStmEvent__Entry);
    }
    sharedFunction_entry_SS221(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent__Exit)
  {
    sharedFunction_exit_SS221(pPublicMemberVariable,pPrivateMemberVariable);
    if (pStatemachine->currentState != execState_TestStm_SS2_SS22_SS221)
    {
      execState_TestStm_SS2_SS22(pStatemachine,TestStmEvent__Exit);
    }
  }
  else
  {
    execState_TestStm_SS2_SS22(pStatemachine,eEvent);
  }
}

// ----------------------------------------------------------------------------

void execState_TestStm_SS2_SS22_SS221_S2211(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  T_PublicMemberVariable_TestStm* pPublicMemberVariable = &pStatemachine->publicMemberVariable;
  T_PrivateMemberVariable_TestStm* pPrivateMemberVariable = &pStatemachine->privateMemberVariable;
  if (eEvent == TestStmEvent__Entry)
  {
    if (pStatemachine->currentState != execState_TestStm_SS2_SS22_SS221_S2211) 
    {
      execState_TestStm_SS2_SS22_SS221(pStatemachine,TestStmEvent__Entry);
    }
    sharedFunction_entry_S2211(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS2_SS22_SS221_S2211;
  }
  else if (eEvent == TestStmEvent__State)
  {
    sharedFunction_do_S2211(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent__Exit)
  {
    sharedFunction_exit_S2211(pPublicMemberVariable,pPrivateMemberVariable);
    if (pStatemachine->currentState != execState_TestStm_SS2_SS22_SS221_S2211)
    {
      execState_TestStm_SS2_SS22_SS221(pStatemachine,TestStmEvent__Exit);
    }
  }
  else
  {
    execState_TestStm_SS2_SS22_SS221(pStatemachine,eEvent);
  }
}

// ----------------------------------------------------------------------------

void execState_TestStm_SS1(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  T_PublicMemberVariable_TestStm* pPublicMemberVariable = &pStatemachine->publicMemberVariable;
  T_PrivateMemberVariable_TestStm* pPrivateMemberVariable = &pStatemachine->privateMemberVariable;
  if (eEvent == TestStmEvent__Entry)
  {
    sharedFunction_entry_SS1(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent__Exit)
  {
    sharedFunction_exit_SS1(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent_EventIn && sharedGuard_g_SS1_SS2(pPublicMemberVariable,pPrivateMemberVariable))
  {
    T_StateFunction_TestStm currentState = pStatemachine->currentState;
    pStatemachine->currentState = execState_TestStm_SS1;
    currentState(pStatemachine,TestStmEvent__Exit);
    sharedFunction_t_SS1_SS2(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS2;
    execState_TestStm_SS2_S21(pStatemachine,TestStmEvent__Entry);
    pStatemachine->currentState(pStatemachine,TestStmEvent__State);
  }
  else if (eEvent == TestStmEvent_EventHistory && sharedGuard_g_SS1_SS2_H(pPublicMemberVariable,pPrivateMemberVariable))
  {
    T_StateFunction_TestStm currentState = pStatemachine->currentState;
    pStatemachine->currentState = execState_TestStm_SS1;
    currentState(pStatemachine,TestStmEvent__Exit);
    sharedFunction_t_SS1_SS2_H(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS2;
    pStatemachine->historyState_SS2(pStatemachine,TestStmEvent__Entry);
    pStatemachine->currentState(pStatemachine,TestStmEvent__State);
  }
}

// ----------------------------------------------------------------------------

void execState_TestStm_SS1_S11(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  T_PublicMemberVariable_TestStm* pPublicMemberVariable = &pStatemachine->publicMemberVariable;
  T_PrivateMemberVariable_TestStm* pPrivateMemberVariable = &pStatemachine->privateMemberVariable;
  if (eEvent == TestStmEvent__Entry)
  {
    if (pStatemachine->currentState != execState_TestStm_SS1_S11) 
    {
      execState_TestStm_SS1(pStatemachine,TestStmEvent__Entry);
    }
    sharedFunction_entry_S11(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState = execState_TestStm_SS1_S11;
  }
  else if (eEvent == TestStmEvent__State)
  {
    sharedFunction_do_S11(pPublicMemberVariable,pPrivateMemberVariable);
  }
  else if (eEvent == TestStmEvent__Exit)
  {
    sharedFunction_exit_S11(pPublicMemberVariable,pPrivateMemberVariable);
    if (pStatemachine->currentState != execState_TestStm_SS1_S11)
    {
      execState_TestStm_SS1(pStatemachine,TestStmEvent__Exit);
    }
  }
  else if (eEvent == TestStmEvent_EventSelf && sharedGuard_g_S1_S1(pPublicMemberVariable,pPrivateMemberVariable))
  {
    sharedFunction_t_S1_S1(pPublicMemberVariable,pPrivateMemberVariable);
    pStatemachine->currentState(pStatemachine,TestStmEvent__State);
  }
  else
  {
    execState_TestStm_SS1(pStatemachine,eEvent);
  }
}

// ----------------------------------------------------------------------------

void triggerStatemachine_TestStm(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent)
{
  pStatemachine->currentState(pStatemachine,eEvent);
}


// ----------------------------------------------------------------------------

/* Actifsource ID=[d32dc97e-b5ef-11e1-8a32-8d8f10205acf,ba1e85f3-9905-11ea-8568-8df113ebd62f,BvSl4Imrds4EAShqZFBUHvbViU0=] */
