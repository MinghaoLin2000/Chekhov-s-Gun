-[NSURL tsp_fileIdentifier]
id __cdecl -[NSURL tsp_fileIdentifier](NSURL *self, SEL a2)
{
  id v3; // x20
  unsigned __int8 v4; // w22
  id v5; // x21
  void *v6; // x22
  id v8; // [xsp+0h] [xbp-30h] BYREF
  id v9; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = 0LL;
  if ( -[NSURL checkResourceIsReachableAndReturnError:](self, "checkResourceIsReachableAndReturnError:", 0LL) )
  {
    v9 = 0LL;
    v8 = 0LL;
    v4 = -[NSURL getResourceValue:forKey:error:](
           self,
           "getResourceValue:forKey:error:",
           &v9,
           NSURLFileResourceIdentifierKey,
           &v8);
    v3 = objc_retain(v9);
    v5 = objc_retain(v8);
    if ( (v4 & 1) == 0 )
    {
      if ( TSUDocumentLifecycleCat_init_token != -1 )
        dispatch_once(&TSUDocumentLifecycleCat_init_token, &stru_1001D14E8);
      v6 = TSUDocumentLifecycleCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDocumentLifecycleCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_1001694BC(v6, self, v5);
      objc_release(v5);
      v5 = v3;
      v3 = 0LL;
    }
    objc_release(v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}