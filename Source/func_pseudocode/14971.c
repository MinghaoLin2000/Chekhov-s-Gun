-[ATXHeuristicJSEnv dealloc]
void __cdecl -[ATXHeuristicJSEnv dealloc](ATXHeuristicJSEnv *self, SEL a2)
{
  os_log_s *v3; // x0
  os_log_s *v4; // x20
  os_signpost_id_t signpost; // x21
  objc_super v6; // [xsp+0h] [xbp-40h] BYREF
  uint8_t buf[16]; // [xsp+10h] [xbp-30h] BYREF

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100004FA4(self, a2));
  v4 = v3;
  signpost = self->_signpost;
  if ( signpost - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled(v3) )
  {
    *(_WORD *)buf = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      v4,
      OS_SIGNPOST_INTERVAL_END,
      signpost,
      "ATXHeuristicJSEnv",
      " enableTelemetry=YES ",
      buf,
      2u);
  }
  objc_release(v4);
  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___ATXHeuristicJSEnv;
  -[ATXHeuristicJSEnv dealloc](&v6, "dealloc");
}