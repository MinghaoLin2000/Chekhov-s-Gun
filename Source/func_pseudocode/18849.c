+[RemoteViewBridgeSendRight wrapSendRight:transferOwnership:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[RemoteViewBridgeSendRight wrapSendRight:transferOwnership:](id a1, SEL a2, unsigned int a3, bool a4)
{
  __int64 v5; // x19
  RemoteViewBridgeSendRight *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a3 - 1 > 0xFFFFFFFD )
  {
    v6 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)&a3;
    v6 = objc_opt_new(&OBJC_CLASS___RemoteViewBridgeSendRight);
    if ( v6 )
    {
      if ( a4 || !mach_port_mod_refs(mach_task_self_, v5, 0, 1) )
        -[RemoteViewBridgeSendRight setSendRight:](v6, "setSendRight:", v5);
    }
    else
    {
      mach_port_deallocate(mach_task_self_, v5);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}