-[RemoteViewBridgeSendRight portRefs]
unsigned __int64 __cdecl -[RemoteViewBridgeSendRight portRefs](RemoteViewBridgeSendRight *self, SEL a2)
{
  mach_port_urefs_t refs; // [xsp+Ch] [xbp-14h] BYREF

  refs = 0;
  if ( mach_port_get_refs(mach_task_self_, -[RemoteViewBridgeSendRight sendRight](self, "sendRight"), 0, &refs) )
    return 0LL;
  else
    return refs;
}