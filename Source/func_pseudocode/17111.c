-[AMActionLoaderServiceInstance _activatePreviouslyActiveApplication]
void __cdecl -[AMActionLoaderServiceInstance _activatePreviouslyActiveApplication](
        AMActionLoaderServiceInstance *self,
        SEL a2)
{
  NSNumber *v4; // x20
  NSNumber *v5; // x21
  NSRunningApplication *v6; // x19
  NSRunningApplication *v7; // x20
  NSWorkspace *v8; // x22
  NSRunningApplication *v9; // x23
  unsigned int v10; // w24
  NSAssertionHandler *v11; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v11,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      103LL,
      CFSTR("Should be on main thread!"));
    objc_release(v11);
  }
  v4 = objc_retainAutoreleasedReturnValue(
         -[AMActionLoaderServiceInstance _previouslyActiveApplicationProcessIdentifier](
           self,
           "_previouslyActiveApplicationProcessIdentifier"));
  objc_release(v4);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(
           -[AMActionLoaderServiceInstance _previouslyActiveApplicationProcessIdentifier](
             self,
             "_previouslyActiveApplicationProcessIdentifier"));
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSRunningApplication runningApplicationWithProcessIdentifier:](
             &OBJC_CLASS___NSRunningApplication,
             "runningApplicationWithProcessIdentifier:",
             -[NSNumber intValue](v5, "intValue")));
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(+[NSRunningApplication currentApplication](&OBJC_CLASS___NSRunningApplication, "currentApplication"));
    LODWORD(v5) = -[NSRunningApplication processIdentifier](v7, "processIdentifier");
    v8 = objc_retainAutoreleasedReturnValue(+[NSWorkspace sharedWorkspace](&OBJC_CLASS___NSWorkspace, "sharedWorkspace"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSWorkspace frontmostApplication](v8, "frontmostApplication"));
    v10 = -[NSRunningApplication processIdentifier](v9, "processIdentifier");
    objc_release(v9);
    objc_release(v8);
    objc_release(v7);
    if ( (_DWORD)v5 == v10 && v6 )
      -[NSRunningApplication activateWithOptions:](v6, "activateWithOptions:", 2LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v6);
  }
}