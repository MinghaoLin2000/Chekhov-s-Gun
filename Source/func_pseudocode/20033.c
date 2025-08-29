-[Browse_Bonjour start]
void __cdecl -[Browse_Bonjour start](Browse_Bonjour *self, SEL a2)
{
  NSMutableDictionary *v3; // x0
  NSMutableDictionary *serviceBrowsers; // x8
  nw_parameters *secure_tcp; // x19
  IPPSession *v6; // x22
  NSString *v7; // x20
  void *v8; // x23
  __int64 v9; // x20
  void *i; // x28
  id v11; // x27
  nw_browse_descriptor *bonjour_service; // x25
  nw_browser *v13; // x0
  nw_browser *v14; // x26
  NSString *v15; // [xsp+0h] [xbp-180h]
  _QWORD handler[5]; // [xsp+10h] [xbp-170h] BYREF
  id v17; // [xsp+38h] [xbp-148h] BYREF
  __int128 v18; // [xsp+40h] [xbp-140h] BYREF
  __int128 v19; // [xsp+50h] [xbp-130h]
  __int128 v20; // [xsp+60h] [xbp-120h]
  __int128 v21; // [xsp+70h] [xbp-110h]
  id location; // [xsp+88h] [xbp-F8h] BYREF
  _BYTE v23[128]; // [xsp+90h] [xbp-F0h] BYREF

  v3 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  serviceBrowsers = self->_serviceBrowsers;
  self->_serviceBrowsers = v3;
  objc_release(serviceBrowsers);
  secure_tcp = nw_parameters_create_secure_tcp(
                 _nw_parameters_configure_protocol_default_configuration,
                 _nw_parameters_configure_protocol_default_configuration);
  v6 = objc_retainAutoreleasedReturnValue(-[Browse_Implementation session](self, "session"));
  v7 = objc_retainAutoreleasedReturnValue(-[IPPSession clientBundleIdentifier](v6, "clientBundleIdentifier"));
  objc_release(v6);
  v15 = v7;
  if ( v7 )
    nw_parameters_set_attributed_bundle_identifier(
      secure_tcp,
      -[NSString UTF8String](objc_retainAutorelease(v7), "UTF8String"));
  nw_parameters_set_account_id(secure_tcp, "com.apple.PrintKit.PrinterTool");
  objc_initWeak(&location, self);
  v20 = 0u;
  v21 = 0u;
  v18 = 0u;
  v19 = 0u;
  v8 = objc_msgSend(&off_1000B4680, "countByEnumeratingWithState:objects:count:", &v18, v23, 16LL);
  if ( v8 )
  {
    v9 = *(_QWORD *)v19;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v19 != v9 )
          objc_enumerationMutation(&off_1000B4680);
        v11 = objc_retainAutorelease(*(id *)(*((_QWORD *)&v18 + 1) + 8LL * (_QWORD)i));
        bonjour_service = nw_browse_descriptor_create_bonjour_service(
                            (const char *)objc_msgSend(v11, "UTF8String"),
                            0LL);
        nw_browse_descriptor_set_include_txt_record(bonjour_service, 1);
        v13 = nw_browser_create(bonjour_service, secure_tcp);
        v14 = v13;
        if ( v13 )
        {
          nw_browser_set_queue(v13, (dispatch_queue_t)self->_queue);
          handler[0] = _NSConcreteStackBlock;
          handler[1] = 3254779904LL;
          handler[2] = sub_10002EABC;
          handler[3] = &unk_10009E288;
          objc_copyWeak(&v17, &location);
          handler[4] = v11;
          nw_browser_set_browse_results_changed_handler(v14, handler);
          -[NSMutableDictionary setObject:forKeyedSubscript:](
            self->_serviceBrowsers,
            "setObject:forKeyedSubscript:",
            v14,
            v11);
          nw_browser_start(v14);
          objc_destroyWeak(&v17);
        }
        objc_release(v14);
        objc_release(bonjour_service);
      }
      v8 = objc_msgSend(&off_1000B4680, "countByEnumeratingWithState:objects:count:", &v18, v23, 16LL);
    }
    while ( v8 );
  }
  objc_destroyWeak(&location);
  objc_release(v15);
  objc_release(secure_tcp);
}