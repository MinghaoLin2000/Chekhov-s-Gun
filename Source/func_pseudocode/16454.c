-[AUHelperInstance init]
AUHelperInstance *__cdecl -[AUHelperInstance init](AUHelperInstance *self, SEL a2)
{
  AUHelperInstance *v2; // x19
  NSXPCConnection *v3; // x0
  NSXPCConnection *xpcConnection; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___AUHelperInstance;
  v2 = -[AUHelperInstance init](&v6, "init");
  if ( v2 )
  {
    v3 = (NSXPCConnection *)objc_retainAutoreleasedReturnValue(
                              +[AUHelperInstance xpcConnectionToHelper](
                                &OBJC_CLASS___AUHelperInstance,
                                "xpcConnectionToHelper"));
    xpcConnection = v2->_xpcConnection;
    v2->_xpcConnection = v3;
    objc_release(xpcConnection);
  }
  return v2;
}