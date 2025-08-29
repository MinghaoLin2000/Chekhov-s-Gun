-[MediaConversionRequestTracker hashForObject:]
unsigned __int64 __cdecl -[MediaConversionRequestTracker hashForObject:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  __int64 v5; // x0
  id v6; // x22
  void *v7; // x21
  NSData *v8; // x23
  void *v9; // x0
  void *v10; // x24
  unsigned __int64 v11; // x21
  __int64 v12; // x26
  void *j; // x27
  void *v14; // x25
  __int64 v15; // x0
  void *v16; // x0
  void *v17; // x23
  __int64 v18; // x24
  void *i; // x25
  __int64 v20; // x0
  NSData *v21; // x20
  NSData *v22; // x0
  objc_class *v24; // x0
  NSString *v25; // x20
  id v26; // [xsp+8h] [xbp-1F8h] BYREF
  __int128 v27; // [xsp+10h] [xbp-1F0h] BYREF
  __int128 v28; // [xsp+20h] [xbp-1E0h]
  __int128 v29; // [xsp+30h] [xbp-1D0h]
  __int128 v30; // [xsp+40h] [xbp-1C0h]
  __int128 v31; // [xsp+50h] [xbp-1B0h] BYREF
  __int128 v32; // [xsp+60h] [xbp-1A0h]
  __int128 v33; // [xsp+70h] [xbp-190h]
  __int128 v34; // [xsp+80h] [xbp-180h]
  uint8_t buf[4]; // [xsp+90h] [xbp-170h] BYREF
  NSString *v36; // [xsp+94h] [xbp-16Ch]
  _BYTE v37[128]; // [xsp+A8h] [xbp-158h] BYREF
  _BYTE v38[128]; // [xsp+128h] [xbp-D8h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  if ( (objc_opt_isKindOfClass(v4, v5) & 1) == 0 )
  {
    v15 = objc_opt_class(&OBJC_CLASS___NSArray);
    if ( (objc_opt_isKindOfClass(v4, v15) & 1) != 0 )
    {
      v6 = objc_retain(v4);
      v27 = 0u;
      v28 = 0u;
      v29 = 0u;
      v30 = 0u;
      v16 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v27, v37, 16LL);
      if ( v16 )
      {
        v17 = v16;
        v11 = 0LL;
        v18 = *(_QWORD *)v28;
        do
        {
          for ( i = 0LL; i != v17; i = (char *)i + 1 )
          {
            if ( *(_QWORD *)v28 != v18 )
              objc_enumerationMutation(v6);
            v11 ^= -[MediaConversionRequestTracker hashForObject:](
                     self,
                     "hashForObject:",
                     *(_QWORD *)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i));
          }
          v17 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v27, v37, 16LL);
        }
        while ( v17 );
      }
      else
      {
        v11 = 0LL;
      }
      goto LABEL_26;
    }
    if ( !-[MediaConversionRequestTracker _valueIsSimpleScalarType:](self, "_valueIsSimpleScalarType:", v4) )
    {
      v20 = objc_opt_class(&OBJC_CLASS___PAMediaConversionServiceImageMetadataPolicy);
      if ( (objc_opt_isKindOfClass(v4, v20) & 1) != 0 )
      {
        v26 = 0LL;
        v21 = objc_retainAutoreleasedReturnValue(
                +[NSKeyedArchiver archivedDataWithRootObject:requiringSecureCoding:error:](
                  &OBJC_CLASS___NSKeyedArchiver,
                  "archivedDataWithRootObject:requiringSecureCoding:error:",
                  v4,
                  1LL,
                  &v26));
        v6 = objc_retain(v26);
        if ( v21 )
        {
          v11 = (unsigned __int64)-[NSData hash](v21, "hash");
        }
        else
        {
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 138412290;
            v36 = (NSString *)v6;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_ERROR,
              "Unable to archive metadata policy: %@",
              buf,
              0xCu);
          }
          v11 = 0LL;
        }
        v22 = v21;
        goto LABEL_25;
      }
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v24 = (objc_class *)objc_opt_class(v4);
        v25 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v24));
        *(_DWORD *)buf = 138412290;
        v36 = v25;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unexpected options dictionary value class: %@",
          buf,
          0xCu);
        objc_release(v25);
      }
    }
    v11 = (unsigned __int64)objc_msgSend(v4, "hash");
    goto LABEL_27;
  }
  v6 = objc_retain(v4);
  v31 = 0u;
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "allKeys"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "sortedArrayUsingComparator:", &stru_100041880));
  objc_release(v7);
  v9 = -[NSData countByEnumeratingWithState:objects:count:](
         v8,
         "countByEnumeratingWithState:objects:count:",
         &v31,
         v38,
         16LL);
  if ( v9 )
  {
    v10 = v9;
    v11 = 0LL;
    v12 = *(_QWORD *)v32;
    do
    {
      for ( j = 0LL; j != v10; j = (char *)j + 1 )
      {
        if ( *(_QWORD *)v32 != v12 )
          objc_enumerationMutation(v8);
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", *(_QWORD *)(*((_QWORD *)&v31 + 1) + 8LL * (_QWORD)j)));
        v11 ^= -[MediaConversionRequestTracker hashForObject:](self, "hashForObject:", v14);
        objc_release(v14);
      }
      v10 = -[NSData countByEnumeratingWithState:objects:count:](
              v8,
              "countByEnumeratingWithState:objects:count:",
              &v31,
              v38,
              16LL);
    }
    while ( v10 );
  }
  else
  {
    v11 = 0LL;
  }
  v22 = v8;
LABEL_25:
  objc_release(v22);
LABEL_26:
  objc_release(v6);
LABEL_27:
  objc_release(v4);
  return v11;
}