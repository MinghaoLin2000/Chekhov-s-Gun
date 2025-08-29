-[XPCSignpostReader init]
XPCSignpostReader *__cdecl -[XPCSignpostReader init](XPCSignpostReader *self, SEL a2)
{
  XPCSignpostReader *v2; // x19
  dispatch_queue_global_s *v3; // x20
  dispatch_queue_s *v4; // x20
  dispatch_source_t v5; // x21
  dispatch_source_s *v6; // x20
  dispatch_object_s *v7; // x20
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___XPCSignpostReader;
  v2 = -[XPCSignpostReader init](&v9, "init");
  if ( v2 )
  {
    signal(15, (void (__cdecl *)(int))1);
    v3 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(21LL, 0LL));
    -[XPCSignpostReader setSigterm_queue:](v2, "setSigterm_queue:", v3);
    objc_release(v3);
    v4 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader sigterm_queue](v2, "sigterm_queue"));
    v5 = dispatch_source_create((dispatch_source_type_t)&_dispatch_source_type_signal, 0xFuLL, 0LL, v4);
    -[XPCSignpostReader setSigterm_source:](v2, "setSigterm_source:", v5);
    objc_release(v5);
    objc_release(v4);
    v6 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader sigterm_source](v2, "sigterm_source"));
    dispatch_source_set_event_handler(v6, &stru_100014308);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader sigterm_source](v2, "sigterm_source"));
    dispatch_activate(v7);
    objc_release(v7);
  }
  return v2;
}