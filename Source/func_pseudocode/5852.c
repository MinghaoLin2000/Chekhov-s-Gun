-[GCSettingsMediator setGames:]
void __cdecl -[GCSettingsMediator setGames:](GCSettingsMediator *self, SEL a2, id a3)
{
  id v3; // x19
  __int64 v4; // x1
  os_log_s *v5; // x20
  id v6; // x20
  int v7; // [xsp+0h] [xbp-30h] BYREF
  id v8; // [xsp+4h] [xbp-2Ch]

  v3 = objc_retain(a3);
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)getGCSLogger(v3, v4));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_INFO) )
  {
    v7 = 138412290;
    v8 = v3;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_INFO,
      "GCSettingsMediator::setGames %@",
      (uint8_t *)&v7,
      0xCu);
  }
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue((id)sub_100003C08());
  objc_msgSend(v6, "setObject:forKey:", v3, CFSTR("games"));
  objc_release(v6);
  objc_release(v3);
}