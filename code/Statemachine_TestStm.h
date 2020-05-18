//--------------------------------------------------------------------------
// (C) Copyright Actifsource GmbH  2012-2015
//
// Use or copying of all or any part of the document, except as
// permitted by the License Agreement is prohibited.
//--------------------------------------------------------------------------

#ifndef Statemachine_TestStm_H_
#define Statemachine_TestStm_H_

// Header files from the environment

// Header files from external components

// Header files from own component

// Type and Forward declarations

/** Events for StatemachineBase TestStm. */
typedef enum Event_TestStm
{
  TestStmEvent__Entry = -3,
  TestStmEvent__State = -2,
  TestStmEvent__Exit = -1, 
  TestStmEvent_EventIn,
  TestStmEvent_EventOut,
  TestStmEvent_EventSelf,
  TestStmEvent_EventHistory,
  TestStmEvent__NrOfState
} T_Event_TestStm;

typedef struct PublicMemberVariable_TestStm
{
  float TestDataFloat;
} T_PublicMemberVariable_TestStm; 

typedef struct PrivateMemberVariable_TestStm
{
  int TestDataInteger;
} T_PrivateMemberVariable_TestStm; 

/** Forwarding data structure for StatemachineBase TestStm. */
typedef struct Statemachine_TestStm T_Statemachine_TestStm;

typedef void (*T_StateFunction_TestStm)(T_Statemachine_TestStm*, T_Event_TestStm);

/** Data structure for StatemachineBase TestStm. */
typedef struct Statemachine_TestStm
{
  T_StateFunction_TestStm currentState;
  T_StateFunction_TestStm historyState_SS2;
  T_PublicMemberVariable_TestStm publicMemberVariable;
  T_PrivateMemberVariable_TestStm privateMemberVariable;
} T_Statemachine_TestStm;

/**
 *  Initializes the state machine.
 *  @param pStatemachineBase The statemachine to initialize.
 */
extern void initStatemachine_TestStm(T_Statemachine_TestStm* pStatemachine);

/**
 *  Triggers the state machine.
 *  @param pStatemachineBase The statemachine to trigger.
 *  @param eEvent The trigger event.
 */
extern void triggerStatemachine_TestStm(T_Statemachine_TestStm* pStatemachine, T_Event_TestStm eEvent);

#endif

/* Actifsource ID=[b2480177-b5ef-11e1-8a32-8d8f10205acf,ba1e85f3-9905-11ea-8568-8df113ebd62f,ekBhDhAsDrWC2bZy0r8xMcj5a/s=] */
