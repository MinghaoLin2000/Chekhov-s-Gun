-[Browse_Bonjour removeResult:]
void __cdecl -[Browse_Bonjour removeResult:](Browse_Bonjour *self, SEL a2, id a3)
{
  id v4; // x19
  os_log_s *v5; // x21
  BonjourBrowse_Entity *v6; // x21
  void (__fastcall **v7)(id, BonjourBrowse_Entity *); // x20
  int v8; // [xsp+0h] [xbp-40h] BYREF
  id v9; // [xsp+4h] [xbp-3Ch]
  __int16 v10; // [xsp+Ch] [xbp-34h]
  id v11; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDiscovery[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_INFO) )
  {
    v8 = 134218242;
    v9 = v4;
    v10 = 2112;
    v11 = v4;
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_INFO, "Removing <%p> %@", (uint8_t *)&v8, 0x16u);
  }
  objc_release(v5);
  v6 = -[BonjourBrowse_Entity initWithBrowseResult:](
         objc_alloc(&OBJC_CLASS___BonjourBrowse_Entity),
         "initWithBrowseResult:",
         v4);
  v7 = (void (__fastcall **)(id, BonjourBrowse_Entity *))objc_retainAutoreleasedReturnValue(-[Browse_Implementation removeEntity](self, "removeEntity"));
  v7[2](v7, v6);
  objc_release(v7);
  objc_release(v6);
  objc_release(v4);
}