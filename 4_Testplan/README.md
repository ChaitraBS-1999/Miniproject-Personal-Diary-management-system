# Test Plan
|  Test ID | Description  | Expected Input  | Expected Output  | Actual Output  | Pass/Fail |
|---|---|---|---|---|---|
| TID_01  | View menu  | Shold select one option from menu| +  | add a note  |pass|
| TID_02  | View menu | Shold select one option from menu| a  | append new note  |pass|
| TID_03  | View menu  | Shold select one option from menu| v  |View previous note| pass  |
| TID_04  | View menu  |Shold select one option from menu| e  |Exit from the program| pass  |

# Low level test plan

| Test ID |Description                                              | Exp IN | Exp OUT | Actual Out |Type Of Test |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Check whether file is opened|  File pointer |SUCCESS|SUCCESS |Technical |
|  L_02       |If file empty |  enter note details |SUCCESS|SUCCESS |Technical |
|  L_03       |Display records|  Choice v  |SUCCESS|SUCCESS|Technical |
|  L_04       |Update records(note not found)| E |File not found|Exit|Technical |
|  L_05       |Update record(note found)|Enter dte|SUCCESS|SUCCESS|Technical |


