# Banking-Management-System
A  basic level bank system to test my cpp skills.
"'
                         ┌────────────────────────────┐
                         │      BANKING SYSTEM        │
                         │   (main function starts)   │
                         └────────────┬───────────────┘
                                      │
                                      ▼
                    ┌─────────────────────────────────┐
                    │ User Input (ONLY ONCE)          │
                    │ - Name                         │
                    │ - CNIC                         │
                    │ - Balance = 500                │
                    └────────────┬────────────────────┘
                                 │
                                 ▼
                    ┌─────────────────────────────────┐
                    │ MAIN OPTION FUNCTION LOOP      │◀-----------------------------               
                    │ "SELECT YOUR OPTION"           │                               |
                    └────────────┬────────────────────┘                              |
                                 │                                                   |
          ┌──────────────────────┼──────────────────────────┐                        |
          │                      │                          │                        |
          ▼                      ▼                          ▼                        |
 ┌────────────────┐   ┌────────────────────┐   ┌────────────────────┐                |
 │ OPTION 1       │   │ OPTION 2           │   │ OPTION 3           │                |
 │ VIEW DETAILS   │   │ DEPOSIT MONEY      │   │ WITHDRAW MONEY     │                |
 └──────┬─────────┘   └────────┬───────────┘   └────────┬───────────┘                |
        │                      │                        │                            |
        │                      │                        │                            |
        ▼                      ▼                        ▼                            |
 ┌────────────────┐   ┌────────────────────┐   ┌────────────────────┐                |
 │ Print:         │   │ Ask deposit amount │   │ Ask withdraw amt   │                |
 │ - Name         │   │ Add to balance     │   │ Compare with bal   │                |
 │ - CNIC         │   │ Update balance     │   │                    │                |
 │ - Balance      │   │ Show new balance   │   │ IF amount > balance│                |
 └──────┬─────────┘   └────────┬───────────┘   │ → "Insufficient"   │                |
        │                      │               │ ELSE subtract      │                |
        │                      │               └────────┬───────────┘                |
        │                      │                        │                            | 
        └──────────────┬───────┴──────────────┬────────┘                             |
                       ▼                      ▼                                      |   
              ┌────────────────────────────────────────┐                             |
              │ RETURN TO MAIN OPTION FUNCTION          │-----------------------------
              │ (RECURSIVE CALL → LOOP BACK MENU)       │
              └────────────────────────────────────────┘

"'
                
