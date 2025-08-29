__Z40canonicalizeTypeTagForNameAndStringValueP8NSStringS0_
__int64 __fastcall canonicalizeTypeTagForNameAndStringValue(NSString *a1, NSString *a2)
{
  NSString *v3; // x19
  NSString *v4; // x20
  NSString *v5; // x0
  __int64 v6; // x21
  os_log_s *v7; // x21
  int v9; // [xsp+0h] [xbp-40h] BYREF
  NSString *v10; // [xsp+4h] [xbp-3Ch]

  v3 = objc_retain(a1);
  v4 = objc_retain(a2);
  if ( -[NSString isEqualToString:](v3, "isEqualToString:", IPPNomenclature::keyMedia) )
  {
    v5 = objc_retainAutoreleasedReturnValue(pwgCanonicalName(v4));
    if ( v5 )
      v6 = 68LL;
    else
      v6 = 66LL;
    objc_release(v5);
  }
  else
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = 138412290;
      v10 = v3;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v7,
        OS_LOG_TYPE_DEFAULT,
        "ERROR: name %@ has no canonicalization mapping",
        (uint8_t *)&v9,
        0xCu);
    }
    objc_release(v7);
    v6 = 0LL;
  }
  objc_release(v4);
  objc_release(v3);
  return v6;
}