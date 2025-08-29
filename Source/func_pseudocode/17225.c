-[AMLoaderServiceAction remoteActionRunner:didLogMessage:level:]
void __cdecl -[AMLoaderServiceAction remoteActionRunner:didLogMessage:level:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5)
{
  id v8; // x19
  AMRemoteActionDelegateXPCProtocol *v9; // x0
  AMRemoteActionDelegateXPCProtocol *v10; // x23
  AMAction *v11; // x24
  AMRemoteActionDelegateXPCProtocol *v12; // x21
  void *v13; // x22
  NSAssertionHandler *v14; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retain(a4);
  if ( objc_msgSend(v8, "length") )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _actionDelegate](self, "_actionDelegate"));
    if ( v9 )
    {
      v10 = v9;
      v11 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
      objc_release(v11);
      objc_release(v10);
      if ( v11 )
      {
        if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
        {
          v14 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
          -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
            v14,
            "handleFailureInMethod:object:file:lineNumber:description:",
            a2,
            self,
            CFSTR("AMLoaderServiceAction.m"),
            812LL,
            CFSTR("Should not be called on main thread!"));
          objc_release(v14);
        }
        v12 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _actionDelegate](self, "_actionDelegate"));
        v13 = objc_retainAutoreleasedReturnValue(
                -[AMRemoteActionDelegateXPCProtocol synchronousRemoteObjectProxyWithErrorHandler:](
                  v12,
                  "synchronousRemoteObjectProxyWithErrorHandler:",
                  &stru_10001C9A8));
        objc_msgSend(v13, "remoteActionLogMessage:level:", v8, a5);
        objc_release(v13);
        objc_release(v12);
      }
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}