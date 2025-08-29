-[NSString atx_appNameFromBundleID]
id __cdecl -[NSString atx_appNameFromBundleID](NSString *self, SEL a2)
{
  __CFString *v3; // x20
  void *v4; // x19
  unsigned __int8 v5; // w21
  __int64 v6; // x0
  os_log_s *v7; // x0
  os_log_s *v8; // x19
  os_log_s *v9; // x21
  int v11; // [xsp+0h] [xbp-40h] BYREF
  NSString *v12; // [xsp+4h] [xbp-3Ch]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( -[NSString isEqualToString:](self, "isEqualToString:", CFSTR("com.apple.Pasteboard.pbutil")) )
  {
    v3 = CFSTR("pbutil");
  }
  else
  {
    v4 = objc_retainAutoreleasedReturnValue(+[LSApplicationWorkspace defaultWorkspace](&OBJC_CLASS___LSApplicationWorkspace, "defaultWorkspace"));
    v5 = (unsigned __int8)objc_msgSend(v4, "applicationIsInstalled:", self);
    objc_release(v4);
    if ( (v5 & 1) != 0 )
    {
      v7 = objc_retainAutoreleasedReturnValue(
             +[ATXApplicationRecord localizedNameForBundle:](
               &OBJC_CLASS___ATXApplicationRecord,
               "localizedNameForBundle:",
               self));
      v8 = v7;
      if ( v7 )
      {
        v8 = objc_retain(v7);
        v3 = (__CFString *)v8;
      }
      else
      {
        v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(0LL));
        if ( os_log_type_enabled(v9, OS_LOG_TYPE_INFO) )
        {
          v11 = 138412290;
          v12 = self;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v9,
            OS_LOG_TYPE_INFO,
            "LSApplicationRecord cannot find localizedName for bundleID even though it is installed: %@",
            (uint8_t *)&v11,
            0xCu);
        }
        objc_release(v9);
        v3 = 0LL;
      }
    }
    else
    {
      v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v6));
      if ( os_log_type_enabled(v8, OS_LOG_TYPE_INFO) )
      {
        v11 = 138412290;
        v12 = self;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v8,
          OS_LOG_TYPE_INFO,
          "bundleID has no installed application: %@",
          (uint8_t *)&v11,
          0xCu);
      }
      v3 = 0LL;
    }
    objc_release(v8);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}