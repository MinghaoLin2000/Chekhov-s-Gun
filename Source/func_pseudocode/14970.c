-[ATXHeuristicJSEnv initWithHeuristicBundle:dataProvider:]
ATXHeuristicJSEnv *__cdecl -[ATXHeuristicJSEnv initWithHeuristicBundle:dataProvider:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x20
  ATXHeuristicJSEnv *v9; // x21
  os_log_s *v10; // x23
  os_log_s *v11; // x0
  os_log_s *v12; // x23
  os_signpost_id_t signpost; // x24
  ATXHeuristicDevice *v14; // x0
  ATXHeuristicDevice *device; // x8
  ATXHeuristicDataSources *v16; // x0
  ATXHeuristicDataSources *provider; // x22
  ATXHeuristicDataSourcesServer *v18; // x0
  ATXHeuristicDataSourcesServer *dataSourcesServer; // x8
  ATXHeuristicDataSourcesClient *v20; // x23
  ATXHeuristicDataSourcesClient *v21; // x0
  ATXHeuristicDataSources *v22; // x8
  ATXHeuristicJSEnv *v23; // x0
  __int16 v25[8]; // [xsp+0h] [xbp-50h] BYREF
  objc_super v26; // [xsp+10h] [xbp-40h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v26.receiver = self;
  v26.super_class = (Class)&OBJC_CLASS___ATXHeuristicJSEnv;
  v9 = -[ATXHeuristicJSEnv init](&v26, "init");
  if ( v9 )
  {
    v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100004FA4());
    v9->_signpost = os_signpost_id_generate(v10);
    objc_release(v10);
    v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100004FA4());
    v12 = v11;
    signpost = v9->_signpost;
    if ( signpost - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled(v11) )
    {
      v25[0] = 0;
      _os_signpost_emit_with_name_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_SIGNPOST_INTERVAL_BEGIN,
        signpost,
        "ATXHeuristicJSEnv",
        " enableTelemetry=YES ",
        (uint8_t *)v25,
        2u);
    }
    objc_release(v12);
    objc_storeStrong((id *)&v9->_heuristicsBundle, a3);
    v14 = (ATXHeuristicDevice *)objc_msgSend(
                                  objc_alloc((Class)&OBJC_CLASS___ATXHeuristicDevice),
                                  "initWithLocationManager:",
                                  0LL);
    device = v9->_device;
    v9->_device = v14;
    objc_release(device);
    if ( v8 )
    {
      v16 = (ATXHeuristicDataSources *)objc_retain(v8);
      provider = v9->_provider;
      v9->_provider = v16;
    }
    else
    {
      v18 = (ATXHeuristicDataSourcesServer *)objc_msgSend(
                                               objc_alloc((Class)&OBJC_CLASS___ATXHeuristicDataSourcesServer),
                                               "initWithDevice:",
                                               v9->_device);
      dataSourcesServer = v9->_dataSourcesServer;
      v9->_dataSourcesServer = v18;
      objc_release(dataSourcesServer);
      v20 = objc_alloc(&OBJC_CLASS___ATXHeuristicDataSourcesClient);
      provider = objc_retainAutoreleasedReturnValue(-[ATXHeuristicDataSourcesServer listenerEndpoint](v9->_dataSourcesServer, "listenerEndpoint"));
      v21 = -[ATXHeuristicDataSourcesClient initWithListenerEndpoint:](v20, "initWithListenerEndpoint:", provider);
      v22 = v9->_provider;
      v9->_provider = (ATXHeuristicDataSources *)v21;
      objc_release(v22);
    }
    objc_release(provider);
    *(_WORD *)&v9->_mgQueryResults[4] = -1;
    *(_DWORD *)v9->_mgQueryResults = -1;
    -[ATXHeuristicJSEnv _setUpInterpreter](v9, "_setUpInterpreter");
    v23 = objc_retain(v9);
  }
  objc_release(v8);
  objc_release(v7);
  objc_release(v9);
  return v9;
}