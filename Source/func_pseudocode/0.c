-[MacOSSharingExtensionContext initWithInputItems:listenerEndpoint:contextUUID:]
MacOSSharingExtensionContext *__cdecl -[MacOSSharingExtensionContext initWithInputItems:listenerEndpoint:contextUUID:](
        MacOSSharingExtensionContext *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  MacOSSharingExtensionContext *v5; // x19
  dispatch_group_t v6; // x0
  OS_dispatch_group *barrier; // x8
  objc_super v9; // [xsp+0h] [xbp-20h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___MacOSSharingExtensionContext;
  v5 = -[MacOSSharingExtensionContext initWithInputItems:listenerEndpoint:contextUUID:](
         &v9,
         "initWithInputItems:listenerEndpoint:contextUUID:",
         a3,
         a4,
         a5);
  if ( v5 )
  {
    v6 = dispatch_group_create();
    barrier = v5->_barrier;
    v5->_barrier = (OS_dispatch_group *)v6;
    objc_release(barrier);
    -[MacOSSharingExtensionContext setSessionCompletionDelegate:](v5, "setSessionCompletionDelegate:", v5);
  }
  return v5;
}