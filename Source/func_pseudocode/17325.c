-[AMRemoteActionRunner logMessage:withLevel:fromAction:]
void __cdecl -[AMRemoteActionRunner logMessage:withLevel:fromAction:](
        AMRemoteActionRunner *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5)
{
  id v7; // x19
  AMRemoteActionRunnerDelegate *v8; // x22
  char v9; // w23
  AMRemoteActionRunnerDelegate *v10; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = objc_retain(a3);
  if ( objc_msgSend(v7, "length") )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner delegate](self, "delegate"));
    v9 = objc_opt_respondsToSelector();
    objc_release(v8);
    if ( (v9 & 1) != 0 )
    {
      v10 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner delegate](self, "delegate"));
      -[AMRemoteActionRunnerDelegate remoteActionRunner:didLogMessage:level:](
        v10,
        "remoteActionRunner:didLogMessage:level:",
        self,
        v7,
        a4);
      objc_release(v10);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}