-[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorStoreTemporarySourceImageWithImageRef:sourceURL:error:]
id __cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorStoreTemporarySourceImageWithImageRef:sourceURL:error:](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2,
        CGImage *a3,
        id a4,
        id *a5)
{
  id v7; // x0
  void *v8; // x20
  void *v9; // x22
  void *v10; // x23
  NSString *v11; // x21
  NSString *v12; // x23
  NSUUID *v13; // x26
  NSString *v14; // x27
  NSArray *v15; // x28
  NSDictionary *v16; // x22
  NSFileManager *v17; // x26
  void *v18; // x27
  NSError *v19; // x23
  __CFString *v20; // x26
  CGImageDestination *v21; // x25
  NSError *v22; // x25
  NSString *v23; // x26
  NSDictionary *v24; // x27
  NSString *v25; // x26
  NSDictionary *v26; // x27
  NSError *v27; // x28
  id v29; // [xsp+18h] [xbp-B8h] BYREF
  NSErrorUserInfoKey v30; // [xsp+20h] [xbp-B0h] BYREF
  NSString *v31; // [xsp+28h] [xbp-A8h] BYREF
  NSErrorUserInfoKey v32; // [xsp+30h] [xbp-A0h] BYREF
  NSString *v33; // [xsp+38h] [xbp-98h] BYREF
  NSErrorUserInfoKey v34; // [xsp+40h] [xbp-90h] BYREF
  NSString *v35; // [xsp+48h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+50h] [xbp-80h] BYREF
  NSError *v37; // [xsp+54h] [xbp-7Ch]
  _QWORD v38[3]; // [xsp+60h] [xbp-70h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v7 = objc_retain(a4);
  v8 = v7;
  if ( !a3 )
  {
    v30 = NSDebugDescriptionErrorKey;
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Invalid image access for the blast door reference. Source: %@"),
              v7));
    v31 = v11;
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v31,
              &v30,
              1LL));
    v22 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              3LL,
              v16));
    goto LABEL_12;
  }
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "stringByDeletingPathExtension"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[PFUniformTypeUtilities preferredOrFallbackFilenameExtensionForType:](
            &OBJC_CLASS___PFUniformTypeUtilities,
            "preferredOrFallbackFilenameExtensionForType:",
            UTTypeJPEG));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "stringByAppendingPathExtension:", v10));
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
  v38[0] = v12;
  v13 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v14 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v13, "UUIDString"));
  v38[1] = v14;
  v38[2] = v11;
  v15 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v38, 3LL));
  v16 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPathComponents:](&OBJC_CLASS___NSURL, "fileURLWithPathComponents:", v15));
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  v17 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v18 = objc_retainAutoreleasedReturnValue(-[NSDictionary URLByDeletingLastPathComponent](v16, "URLByDeletingLastPathComponent"));
  v29 = 0LL;
  LOBYTE(v15) = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
                  v17,
                  "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                  v18,
                  1LL,
                  0LL,
                  &v29);
  v19 = (NSError *)objc_retain(v29);
  objc_release(v18);
  objc_release(v17);
  if ( ((unsigned __int8)v15 & 1) == 0 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138412290;
      v37 = v19;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "[BlastDoor] Failed to create tempory source location for blast door reference. Error: %@",
        buf,
        0xCu);
    }
    goto LABEL_9;
  }
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(UTTypeJPEG, "identifier"));
  v21 = CGImageDestinationCreateWithURL((CFURLRef)v16, v20, 1uLL, 0LL);
  objc_release(v20);
  if ( !v21 )
  {
LABEL_9:
    v32 = NSDebugDescriptionErrorKey;
    v23 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Failed to access temporary destination location for the blast door reference to %@. Source: %@"),
              v16,
              v8));
    v33 = v23;
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v33,
              &v32,
              1LL));
    v22 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              3LL,
              v24));
    objc_release(v19);
    objc_release(v24);
    objc_release(v23);
    a3 = 0LL;
    goto LABEL_12;
  }
  CGImageDestinationAddImage(v21, a3, 0LL);
  if ( CGImageDestinationFinalize(v21) )
  {
    a3 = objc_retain(v16);
  }
  else
  {
    v34 = NSDebugDescriptionErrorKey;
    v25 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Failed to write temporary image from blast door reference to %@. Source: %@"),
              v16,
              v8));
    v35 = v25;
    v26 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v35,
              &v34,
              1LL));
    v27 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              3LL,
              v26));
    objc_release(v19);
    objc_release(v26);
    objc_release(v25);
    a3 = 0LL;
    v19 = v27;
  }
  CFRelease(v21);
  v22 = v19;
LABEL_12:
  objc_release(v16);
  objc_release(v11);
  if ( !v22 || !os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    if ( !a5 )
      goto LABEL_16;
    goto LABEL_15;
  }
  *(_DWORD *)buf = 138543362;
  v37 = v22;
  _os_log_error_impl(
    (void *)&_mh_execute_header,
    (os_log_t)&_os_log_default,
    OS_LOG_TYPE_ERROR,
    "[BlastDoor] Failed to process blast door temporary source. Error: %{public}@",
    buf,
    0xCu);
  if ( a5 )
LABEL_15:
    *a5 = objc_retainAutorelease(v22);
LABEL_16:
  objc_release(v22);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(a3);
}