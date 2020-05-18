//--------------------------------------------------------------------------
// (C) Copyright Actifsource GmbH  2012-2015
//
// Use or copying of all or any part of the document, except as
// permitted by the License Agreement is prohibited.
//--------------------------------------------------------------------------

// Header files from the environment$
#include <stdio.h>

// Header files from external components

// Header files from own component

// Own header file
#include "Statemachine_TestStm.h"

int main()
{
  T_Statemachine_TestStm testStm;

  printf("\n->Init\n");
  initStatemachine_TestStm(&testStm);

  printf("\n->EventIn\n");
  triggerStatemachine_TestStm(&testStm,TestStmEvent_EventIn);

  printf("\n->EventIn\n");
  triggerStatemachine_TestStm(&testStm,TestStmEvent_EventIn);

  printf("\n->EventSelf\n");
  triggerStatemachine_TestStm(&testStm,TestStmEvent_EventSelf);

  printf("\n->EventOut\n");
  triggerStatemachine_TestStm(&testStm,TestStmEvent_EventOut);

  printf("\n->EventSelf\n");
  triggerStatemachine_TestStm(&testStm,TestStmEvent_EventSelf);

  printf("\n->EventHistory\n");
  triggerStatemachine_TestStm(&testStm,TestStmEvent_EventHistory);

  printf("\n->EventHistory\n");
  triggerStatemachine_TestStm(&testStm,TestStmEvent_EventHistory);

  return 0;
}
