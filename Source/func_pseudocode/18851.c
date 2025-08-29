-[RemoteViewBridgeSendRight invalidate]
void __cdecl -[RemoteViewBridgeSendRight invalidate](RemoteViewBridgeSendRight *self, SEL a2)
{
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[RemoteViewBridgeSendRight sendRight](self, "sendRight")
    && -[RemoteViewBridgeSendRight sendRight](self, "sendRight") != -1 )
  {
    if ( mach_port_mod_refs(mach_task_self_, -[RemoteViewBridgeSendRight sendRight](self, "sendRight"), 0, -1) )
      mach_port_deallocate(mach_task_self_, -[RemoteViewBridgeSendRight sendRight](self, "sendRight"));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[RemoteViewBridgeSendRight setSendRight:](self, "setSendRight:", 0LL);
  }
}