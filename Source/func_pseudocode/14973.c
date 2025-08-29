-[ATXHeuristicJSEnv _injectScript]
void __cdecl -[ATXHeuristicJSEnv _injectScript](ATXHeuristicJSEnv *self, SEL a2)
{
  NSURL *v3; // x19
  void *v4; // x21
  os_log_s *v5; // x20
  id v6; // x0
  os_log_s *v7; // x22
  id v8; // [xsp+8h] [xbp-48h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  os_log_s *v10; // [xsp+14h] [xbp-3Ch]

  v3 = objc_retainAutoreleasedReturnValue(
         -[NSBundle URLForResource:withExtension:](
           self->_heuristicsBundle,
           "URLForResource:withExtension:",
           CFSTR("heuristics"),
           CFSTR("js")));
  if ( v3 )
  {
    v8 = 0LL;
    v4 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSString),
           "initWithContentsOfURL:usedEncoding:error:",
           v3,
           0LL,
           &v8);
    v5 = (os_log_s *)objc_retain(v8);
    if ( v4 )
    {
      v6 = objc_unsafeClaimAutoreleasedReturnValue(-[JSContext evaluateScript:withSourceURL:](self->_jsContext, "evaluateScript:withSourceURL:", v4, v3));
    }
    else
    {
      v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
      if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 138412290;
        v10 = v5;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v7,
          OS_LOG_TYPE_DEFAULT,
          "Could not load the heuristics JS script: %@",
          buf,
          0xCu);
      }
      objc_release(v7);
    }
    objc_release(v4);
  }
  else
  {
    v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_DEFAULT,
        "Could not find the heuristics JS script",
        buf,
        2u);
    }
  }
  objc_release(v5);
  objc_release(v3);
}