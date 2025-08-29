-[NSString atx_dataDetectors]
id __cdecl -[NSString atx_dataDetectors](NSString *self, SEL a2)
{
  NSUInteger v3; // x0
  os_log_s *v4; // x19
  __int64 v5; // x0
  const void *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x0
  const void *v9; // x21
  id v10; // x20
  os_log_s *v11; // x19
  os_log_s *v12; // x20
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = -[NSString length](self, "length");
  if ( !v3 )
  {
LABEL_11:
    v10 = &__NSArray0__struct;
    goto LABEL_18;
  }
  v4 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v3));
  if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEBUG) )
    sub_10001D52C(self, v4);
  objc_release(v4);
  v14 = 0LL;
  v5 = DDScannerCreate(0LL, 0LL, &v14);
  if ( !v5 )
  {
    v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(0LL));
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
      sub_10001D428(&v14, v11);
    objc_release(v11);
    goto LABEL_11;
  }
  v6 = (const void *)v5;
  v7 = DDScannerScanString(v5, self);
  if ( !(_DWORD)v7 )
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v7));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEBUG) )
      sub_10001D4A4(v12);
    goto LABEL_16;
  }
  v8 = DDScannerCopyResultsWithOptions(v6, DDScannerCopyResultsOptionsForActiveUse);
  if ( !v8 )
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(0LL));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEBUG) )
      sub_10001D4E8(v12);
LABEL_16:
    objc_release(v12);
    v10 = 0LL;
    goto LABEL_17;
  }
  v9 = (const void *)v8;
  v10 = objc_retainAutoreleasedReturnValue((id)sub_10001C8DC(v8, self, 0LL));
  CFRelease(v9);
LABEL_17:
  CFRelease(v6);
LABEL_18:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}