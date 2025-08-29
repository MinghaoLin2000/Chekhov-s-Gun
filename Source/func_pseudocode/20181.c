-[NANBrowse_Entity dealloc]
void __cdecl -[NANBrowse_Entity dealloc](NANBrowse_Entity *self, SEL a2)
{
  os_log_s *v3; // x20
  PKNANDataSession *dataSession; // x8
  objc_super v5; // [xsp+10h] [xbp-40h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-30h] BYREF
  NANBrowse_Entity *v7; // [xsp+24h] [xbp-2Ch]
  __int16 v8; // [xsp+2Ch] [xbp-24h]
  PKNANDataSession *v9; // [xsp+2Eh] [xbp-22h]

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_ERROR) )
  {
    dataSession = self->_dataSession;
    *(_DWORD *)buf = 134218242;
    v7 = self;
    v8 = 2112;
    v9 = dataSession;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_ERROR,
      "NSNBrowse_Entity<%p> being deallocated - ds %@",
      buf,
      0x16u);
  }
  objc_release(v3);
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___NANBrowse_Entity;
  -[NANBrowse_Entity dealloc](&v5, "dealloc");
}