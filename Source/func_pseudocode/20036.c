-[Browse_Bonjour addResult:]
void __cdecl -[Browse_Bonjour addResult:](Browse_Bonjour *self, SEL a2, id a3)
{
  id v4; // x19
  os_log_s *v5; // x21
  os_log_s *v6; // x21
  BonjourBrowse_Entity *v7; // x21
  void (__fastcall **v8)(id, BonjourBrowse_Entity *); // x20
  int v9; // [xsp+0h] [xbp-40h] BYREF
  id v10; // [xsp+4h] [xbp-3Ch]
  __int16 v11; // [xsp+Ch] [xbp-34h]
  id v12; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDiscovery[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_INFO) )
  {
    v9 = 134218242;
    v10 = v4;
    v11 = 2112;
    v12 = v4;
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_INFO, "CHECK Result <%p> %@", (uint8_t *)&v9, 0x16u);
  }
  objc_release(v5);
  if ( -[Browse_Bonjour isOKToAdd:](self, "isOKToAdd:", v4) )
  {
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDiscovery[0]));
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_INFO) )
    {
      v9 = 134218242;
      v10 = v4;
      v11 = 2112;
      v12 = v4;
      _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_INFO, "Adding <%p> %@", (uint8_t *)&v9, 0x16u);
    }
    objc_release(v6);
    v7 = -[BonjourBrowse_Entity initWithBrowseResult:](
           objc_alloc(&OBJC_CLASS___BonjourBrowse_Entity),
           "initWithBrowseResult:",
           v4);
    v8 = (void (__fastcall **)(id, BonjourBrowse_Entity *))objc_retainAutoreleasedReturnValue(-[Browse_Implementation addEntity](self, "addEntity"));
    v8[2](v8, v7);
    objc_release(v8);
  }
  else
  {
    v7 = (BonjourBrowse_Entity *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDiscovery[0]));
    if ( os_log_type_enabled((os_log_t)v7, OS_LOG_TYPE_INFO) )
    {
      v9 = 134218242;
      v10 = v4;
      v11 = 2112;
      v12 = v4;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v7,
        OS_LOG_TYPE_INFO,
        "NOT Adding <%p> %@",
        (uint8_t *)&v9,
        0x16u);
    }
  }
  objc_release(v7);
  objc_release(v4);
}