-[PAMediaConversionServiceResourceURLCollection typeIdentifierForResourceURLWithRole:]
id __cdecl -[PAMediaConversionServiceResourceURLCollection typeIdentifierForResourceURLWithRole:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  void *v6; // x0
  void *v7; // x20
  void *v8; // x21
  unsigned __int8 v9; // w24
  __CFString *v10; // x23
  id v11; // x0
  void *v12; // x22
  char v13; // w24
  void *v14; // x25
  unsigned int v15; // w0
  void *v16; // x26
  void *v17; // x27
  UTType *v18; // x26
  NSString *v19; // x28
  UTType *v20; // x24
  unsigned int v21; // w25
  CGImageSource *v22; // x0
  CGImageSource *v23; // x24
  __CFString *v24; // x0
  __CFString *v25; // x25
  __CFString *v26; // x26
  void *v28; // x23
  NSAssertionHandler *v29; // x20
  NSAssertionHandler *v30; // x24
  id v31; // [xsp+10h] [xbp-90h] BYREF
  id v32; // [xsp+18h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-80h] BYREF
  id v34; // [xsp+24h] [xbp-7Ch]
  __int16 v35; // [xsp+2Ch] [xbp-74h]
  void *v36; // [xsp+2Eh] [xbp-72h]
  __int16 v37; // [xsp+36h] [xbp-6Ah]
  void *v38; // [xsp+38h] [xbp-68h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v29 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v29,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      305LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("role"));
    objc_release(v29);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_urlReferencesByRole, "objectForKeyedSubscript:", v5));
  v7 = v6;
  if ( !v6 )
  {
    v10 = 0LL;
    goto LABEL_25;
  }
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "url"));
  if ( !v8 )
  {
    v30 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v30,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceResourceURLCollection.m"),
      313LL,
      CFSTR("Unexpected nil role"));
    objc_release(v30);
  }
  v32 = 0LL;
  v31 = 0LL;
  v9 = (unsigned __int8)objc_msgSend(v8, "getResourceValue:forKey:error:", &v32, NSURLTypeIdentifierKey, &v31);
  v10 = (__CFString *)objc_retain(v32);
  v11 = objc_retain(v31);
  v12 = v11;
  if ( (v9 & 1) == 0 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "domain"));
    v15 = (unsigned int)objc_msgSend(v14, "isEqualToString:", NSCocoaErrorDomain);
    v13 = v15;
    if ( v15 )
    {
      v16 = objc_msgSend(v12, "code");
      objc_release(v14);
      if ( v16 != (void *)260 )
      {
        v13 = 0;
        if ( v10 )
          goto LABEL_13;
        goto LABEL_21;
      }
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "lastPathComponent"));
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "pathExtension"));
      v18 = objc_retainAutoreleasedReturnValue(+[UTType typeWithFilenameExtension:](&OBJC_CLASS___UTType, "typeWithFilenameExtension:", v17));
      v19 = objc_retainAutoreleasedReturnValue(-[UTType identifier](v18, "identifier"));
      objc_release(v10);
      objc_release(v18);
      objc_release(v17);
      v10 = (__CFString *)v19;
    }
    objc_release(v14);
    if ( v10 )
      goto LABEL_13;
LABEL_21:
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "path"));
      *(_DWORD *)buf = 138543874;
      v34 = v5;
      v35 = 2112;
      v36 = v28;
      v37 = 2114;
      v38 = v12;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to determine type identifier for URL with role %{public}@ %@: %{public}@",
        buf,
        0x20u);
      objc_release(v28);
    }
    v10 = 0LL;
    goto LABEL_24;
  }
  v13 = 0;
LABEL_13:
  if ( v10 )
  {
    if ( (v13 & 1) == 0 )
    {
      v20 = objc_retainAutoreleasedReturnValue(+[UTType typeWithIdentifier:](&OBJC_CLASS___UTType, "typeWithIdentifier:", v10));
      v21 = -[UTType conformsToType:](v20, "conformsToType:", UTTypeImage);
      objc_release(v20);
      if ( v21 )
      {
        v22 = CGImageSourceCreateWithURL((CFURLRef)v8, 0LL);
        if ( v22 )
        {
          v23 = v22;
          v24 = objc_retainAutoreleasedReturnValue((id)CGImageSourceGetType(v22));
          v25 = v24;
          if ( v24 )
          {
            v26 = objc_retain(v24);
            objc_release(v10);
            v10 = v26;
          }
          CFRelease(v23);
          objc_release(v25);
        }
      }
    }
  }
LABEL_24:
  objc_release(v12);
  objc_release(v8);
LABEL_25:
  objc_release(v7);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}