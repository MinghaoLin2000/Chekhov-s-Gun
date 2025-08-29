-[AMLoaderServiceAction parametersObserverDidChangeParameters:]
void __cdecl -[AMLoaderServiceAction parametersObserverDidChangeParameters:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3)
{
  AMRemoteActionDelegateXPCProtocol *v4; // x19
  AMAction *v5; // x21
  void *v6; // x22
  void *v7; // x23
  AMAction *v8; // x20
  void *v9; // x24
  void *v10; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _actionDelegate](self, "_actionDelegate", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMAction parameters](v5, "parameters"));
  v7 = objc_msgSend(v6, "copy");
  v8 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
  v9 = objc_retainAutoreleasedReturnValue(-[AMAction parameterProperties](v8, "parameterProperties"));
  v10 = objc_msgSend(v9, "copy");
  -[AMRemoteActionDelegateXPCProtocol remoteActionParametersDidChange:parameterProperties:](
    v4,
    "remoteActionParametersDidChange:parameterProperties:",
    v7,
    v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}