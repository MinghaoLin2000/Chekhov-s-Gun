-[LocalSocketProxy dealloc]
void __cdecl -[LocalSocketProxy dealloc](LocalSocketProxy *self, SEL a2)
{
  os_log_s *v3; // x20
  objc_super v4; // [xsp+10h] [xbp-30h] BYREF
  uint8_t buf[16]; // [xsp+20h] [xbp-20h] BYREF

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "LocalSocketProxy: Dealloc", buf, 2u);
  }
  objc_release(v3);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___LocalSocketProxy;
  -[LocalSocketProxy dealloc](&v4, "dealloc");
}