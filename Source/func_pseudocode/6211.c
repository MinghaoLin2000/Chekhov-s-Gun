-[MediaConversionQueue modifyRequestWithIdentifier:changeHandler:]
void __cdecl -[MediaConversionQueue modifyRequestWithIdentifier:changeHandler:](
        MediaConversionQueue *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x21
  void (__fastcall **v8)(id, _QWORD); // x19
  id v9; // x21
  NSAssertionHandler *v10; // x23
  _QWORD v11[4]; // [xsp+10h] [xbp-A0h] BYREF
  id v12; // [xsp+30h] [xbp-80h]
  __int64 *v13; // [xsp+38h] [xbp-78h]
  __int64 v14; // [xsp+40h] [xbp-70h] BYREF
  __int64 *v15; // [xsp+48h] [xbp-68h]
  __int64 v16; // [xsp+50h] [xbp-60h]
  __int64 (__fastcall *v17)(); // [xsp+58h] [xbp-58h]
  __int64 (__fastcall *v18)(); // [xsp+60h] [xbp-50h]
  id v19; // [xsp+68h] [xbp-48h]

  v7 = objc_retain(a3);
  v8 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  if ( !v7 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      767LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("requestIdentifier"));
    objc_release(v10);
  }
  os_unfair_lock_lock(&self->_queueStateLock);
  v14 = 0LL;
  v15 = &v14;
  v16 = 0x3032000000LL;
  v17 = sub_10000D020;
  v18 = sub_10000D030;
  v19 = 0LL;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10000EBB4;
  v11[3] = &unk_100041280;
  v13 = &v14;
  v9 = objc_retain(v7);
  v12 = v9;
  -[MediaConversionQueue enumerateCurrentlyProcessingAndQueuedEntries:](
    self,
    "enumerateCurrentlyProcessingAndQueuedEntries:",
    v11);
  v8[2](v8, v15[5]);
  objc_release(v12);
  _Block_object_dispose(&v14, 8);
  objc_release(v19);
  os_unfair_lock_unlock(&self->_queueStateLock);
  objc_release(v8);
  objc_release(v9);
}