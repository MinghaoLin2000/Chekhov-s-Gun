-[AMLoaderServiceVariableController editVariable:withControl:]
void __cdecl -[AMLoaderServiceVariableController editVariable:withControl:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x0
  void *v9; // x20
  id v10; // x0
  NSAssertionHandler *v11; // x23
  _QWORD v12[5]; // [xsp+8h] [xbp-A8h] BYREF
  id v13; // [xsp+30h] [xbp-80h]
  _QWORD v14[5]; // [xsp+38h] [xbp-78h] BYREF
  id v15; // [xsp+60h] [xbp-50h]
  id v16; // [xsp+68h] [xbp-48h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = v8;
  if ( v7 )
  {
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_100008A80;
    v14[3] = &unk_10001C598;
    v14[4] = self;
    v15 = objc_retain(v8);
    v16 = objc_retain(v7);
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_100008CB4;
    v12[3] = &unk_10001C538;
    v12[4] = self;
    v13 = objc_retain(v16);
    -[AMLoaderServiceVariableController _xpc:errorHandler:](self, "_xpc:errorHandler:", v14, v12);
    objc_release(v13);
    objc_release(v16);
    v10 = v15;
  }
  else
  {
    v11 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v11,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      452LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variable"));
    v10 = v11;
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v7);
}