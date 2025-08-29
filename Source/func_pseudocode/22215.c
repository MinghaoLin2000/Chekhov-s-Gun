-[QLSatellite _handleRequest:withCompletion:]
void __cdecl -[QLSatellite _handleRequest:withCompletion:](QLSatellite *self, SEL a2, __QLRequest *a3, id a4)
{
  id v6; // x21
  id v7; // x20
  void *v8; // x23
  id v9; // x24
  id v10; // x25
  const __CFURL *v11; // x0
  const __CFURL *v12; // x26
  NSString *v13; // x27
  id v14; // x21
  id v15; // x22
  id v16; // x23
  id v17; // x20
  _QWORD v18[4]; // [xsp+10h] [xbp-B0h] BYREF
  id v19; // [xsp+30h] [xbp-90h]
  QLSatellite *v20; // [xsp+38h] [xbp-88h]
  id v21; // [xsp+40h] [xbp-80h]
  id v22; // [xsp+48h] [xbp-78h]
  id v23; // [xsp+50h] [xbp-70h]
  __QLRequest *v24; // [xsp+58h] [xbp-68h]
  CFTypeRef cf; // [xsp+60h] [xbp-60h] BYREF
  CFTypeRef propertyValueTypeRefPtr; // [xsp+68h] [xbp-58h] BYREF

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue((id)_QLRequestGetObject(a3));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "uuid"));
  v9 = objc_alloc_init((Class)&OBJC_CLASS___QLSatelliteMessage);
  objc_msgSend(v9, "setType:", 8LL);
  objc_msgSend(v9, "setUuid:", v8);
  v10 = objc_retainAutoreleasedReturnValue((id)_QLRequestGetObject(a3));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "url"));
  v12 = v11;
  if ( v11 )
  {
    propertyValueTypeRefPtr = 0LL;
    cf = 0LL;
    CFURLCopyResourcePropertyForKey(v11, _kCFURLFileIDKey, &propertyValueTypeRefPtr, 0LL);
    CFURLCopyResourcePropertyForKey(v12, _kCFURLVolumeIDKey, &cf, 0LL);
    if ( propertyValueTypeRefPtr )
    {
      if ( cf )
      {
        v13 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%@.%@"),
                  cf,
                  propertyValueTypeRefPtr));
        objc_msgSend(v10, "setMangledID:", v13);
        objc_release(v13);
        CFRelease(cf);
      }
      else
      {
        objc_msgSend(v10, "setMangledID:");
      }
      CFRelease(propertyValueTypeRefPtr);
    }
  }
  objc_release(v12);
  objc_release(v10);
  -[NSMapTable setObject:forKey:](self->_requests, "setObject:forKey:", a3, v8);
  -[QLSatellite updateCrashReporterMessage](self, "updateCrashReporterMessage");
  v18[0] = _NSConcreteStackBlock;
  v18[1] = 3254779904LL;
  v18[2] = sub_1000046D4;
  v18[3] = &unk_100008600;
  v19 = v7;
  v20 = self;
  v21 = v8;
  v22 = v9;
  v23 = v6;
  v24 = a3;
  v14 = objc_retain(v6);
  v15 = objc_retain(v9);
  v16 = objc_retain(v8);
  v17 = objc_retain(v7);
  QLRequestDispatchBlock(a3, v18, 0LL, 1LL, 0LL);
  objc_release(v23);
  objc_release(v22);
  objc_release(v21);
  objc_release(v19);
  objc_release(v14);
  objc_release(v15);
  objc_release(v16);
  objc_release(v17);
}