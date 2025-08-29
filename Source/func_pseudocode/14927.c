-[ATXHeuristicDataSourcesClient initWithListenerEndpoint:]
ATXHeuristicDataSourcesClient *__cdecl -[ATXHeuristicDataSourcesClient initWithListenerEndpoint:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  ATXHeuristicDataSourcesClient *v6; // x20
  NSXPCConnection *v7; // x0
  NSXPCConnection *xpcConnection; // x8
  id v9; // x21
  NSAssertionHandler *v11; // x22
  objc_super v12; // [xsp+10h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v11,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("ATXHeuristicDataSources.m"),
      46LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("listenerEndpoint"));
    objc_release(v11);
  }
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___ATXHeuristicDataSourcesClient;
  v6 = -[ATXHeuristicDataSourcesClient init](&v12, "init");
  if ( v6 )
  {
    v7 = (NSXPCConnection *)objc_msgSend(
                              objc_alloc((Class)&OBJC_CLASS___NSXPCConnection),
                              "initWithListenerEndpoint:",
                              v5);
    xpcConnection = v6->_xpcConnection;
    v6->_xpcConnection = v7;
    objc_release(xpcConnection);
    v9 = objc_retainAutoreleasedReturnValue((id)ATXHeuristicDataSourcesInterface());
    -[NSXPCConnection setRemoteObjectInterface:](v6->_xpcConnection, "setRemoteObjectInterface:", v9);
    objc_release(v9);
    -[NSXPCConnection resume](v6->_xpcConnection, "resume");
  }
  objc_release(v5);
  return v6;
}