-[PAXPCDispatch handleMessage:fromPeer:]
void __cdecl -[PAXPCDispatch handleMessage:fromPeer:](PAXPCDispatch *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  const char *string; // x0
  NSString *v9; // x22
  dispatch_queue_global_s *v10; // x23
  NSString *v11; // x21
  _QWORD v12[4]; // [xsp+0h] [xbp-70h] BYREF
  id v13; // [xsp+20h] [xbp-50h]
  PAXPCDispatch *v14; // [xsp+28h] [xbp-48h]
  id v15; // [xsp+30h] [xbp-40h]
  id v16; // [xsp+38h] [xbp-38h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  string = xpc_dictionary_get_string(v6, "operation");
  if ( string )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", string));
    v10 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_100003B5C;
    v12[3] = &unk_100008248;
    v13 = v9;
    v14 = self;
    v15 = objc_retain(v6);
    v16 = objc_retain(v7);
    v11 = objc_retain(v9);
    dispatch_async(v10, v12);
    objc_release(v10);
    objc_release(v16);
    objc_release(v15);
    objc_release(v13);
    objc_release(v11);
  }
  objc_release(v7);
  objc_release(v6);
}