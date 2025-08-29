-[AMActionLoaderServiceInstance activatingWindowHandlerWillActivate:]
void __cdecl -[AMActionLoaderServiceInstance activatingWindowHandlerWillActivate:](
        AMActionLoaderServiceInstance *self,
        SEL a2,
        id a3)
{
  NSWorkspace *v4; // x21
  NSRunningApplication *v5; // x20
  NSNumber *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[NSWorkspace frontmostApplication](v4, "frontmostApplication"));
  objc_release(v4);
  if ( v5 && -[NSRunningApplication processIdentifier](v5, "processIdentifier") )
  {
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSNumber numberWithInt:](
             &OBJC_CLASS___NSNumber,
             "numberWithInt:",
             -[NSRunningApplication processIdentifier](v5, "processIdentifier")));
    -[AMActionLoaderServiceInstance set_previouslyActiveApplicationProcessIdentifier:](
      self,
      "set_previouslyActiveApplicationProcessIdentifier:",
      v6);
    objc_release(v6);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}