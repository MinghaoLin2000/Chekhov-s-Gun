-[AMLoaderServiceAction remoteActionHasOverrideForSelector:completionHandler:]
void __cdecl -[AMLoaderServiceAction remoteActionHasOverrideForSelector:completionHandler:](
        AMLoaderServiceAction *self,
        SEL a2,
        SEL a3,
        id a4)
{
  id v7; // x0
  void (__fastcall **v8)(_QWORD, _QWORD); // x19
  NSAssertionHandler *v9; // x23
  NSAssertionHandler *v10; // x21
  _QWORD v11[6]; // [xsp+10h] [xbp-80h] BYREF
  __int64 v12; // [xsp+40h] [xbp-50h] BYREF
  __int64 *v13; // [xsp+48h] [xbp-48h]
  __int64 v14; // [xsp+50h] [xbp-40h]
  char v15; // [xsp+58h] [xbp-38h]

  v7 = objc_retain(a4);
  v8 = (void (__fastcall **)(_QWORD, _QWORD))v7;
  if ( !a3 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v9,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      160LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("selector"));
    objc_release(v9);
    if ( v8 )
    {
      v8[2](v8, 0LL);
      goto LABEL_3;
    }
LABEL_7:
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      161LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("completionHandler"));
    objc_release(v10);
    goto LABEL_4;
  }
  if ( !v7 )
    goto LABEL_7;
LABEL_3:
  v12 = 0LL;
  v13 = &v12;
  v14 = 0x2020000000LL;
  v15 = 0;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10000AAA8;
  v11[3] = &unk_10001C5F8;
  v11[4] = &v12;
  v11[5] = a3;
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v11);
  v8[2](v8, *((unsigned __int8 *)v13 + 24));
  _Block_object_dispose(&v12, 8);
LABEL_4:
  objc_release(v8);
}