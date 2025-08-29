-[AMRemoteActionRunner loopWorkflowFromAction:withInput:]
void __cdecl -[AMRemoteActionRunner loopWorkflowFromAction:withInput:](
        AMRemoteActionRunner *self,
        SEL a2,
        id a3,
        id a4)
{
  NSAssertionHandler *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler", a3, a4));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v6,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("AMRemoteActionRunner.m"),
    294LL,
    CFSTR("Loop support not implemented here!"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}