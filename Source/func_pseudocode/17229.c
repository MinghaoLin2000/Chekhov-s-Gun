-[AMLoaderServiceAction _selectedInputTypeChanged]
void __cdecl -[AMLoaderServiceAction _selectedInputTypeChanged](AMLoaderServiceAction *self, SEL a2)
{
  AMRemoteActionDelegateXPCProtocol *v3; // x20
  AMAction *v4; // x19
  NSString *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _actionDelegate](self, "_actionDelegate"));
  v4 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
  v5 = objc_retainAutoreleasedReturnValue(-[AMAction selectedInputType](v4, "selectedInputType"));
  -[AMRemoteActionDelegateXPCProtocol remoteActionSelectedInputTypeDidChange:](
    v3,
    "remoteActionSelectedInputTypeDidChange:",
    v5);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}