-[IPPSessionTransaction dealloc]
void __cdecl -[IPPSessionTransaction dealloc](IPPSessionTransaction *self, SEL a2)
{
  os_log_s *v3; // x20
  objc_super v4; // [xsp+10h] [xbp-30h] BYREF
  uint8_t buf[16]; // [xsp+20h] [xbp-20h] BYREF

  if ( self->_transactionCompletedCallback )
  {
    v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v3, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v3,
        OS_LOG_TYPE_ERROR,
        "transactionCompletedCallback was never invoked",
        buf,
        2u);
    }
    objc_release(v3);
  }
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___IPPSessionTransaction;
  -[IPPSessionTransaction dealloc](&v4, "dealloc");
}