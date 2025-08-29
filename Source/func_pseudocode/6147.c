-[ClientRequest videoConversionTask:didUpdateFractionCompleted:]
void __cdecl -[ClientRequest videoConversionTask:didUpdateFractionCompleted:](
        ClientRequest *self,
        SEL a2,
        id a3,
        double a4)
{
  NSString *v7; // x19
  void *v8; // x20
  NSNumber *v9; // x22
  NSXPCConnection *v10; // x21
  NSString *v11; // x19
  id v12; // x22
  NSAssertionHandler *v13; // x22
  _QWORD v14[4]; // [xsp+8h] [xbp-58h] BYREF
  id v15; // [xsp+28h] [xbp-38h]

  if ( -[ClientRequest wantsProgress](self, "wantsProgress", a3) )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[ClientRequest identifier](self, "identifier"));
    if ( !v7 )
    {
      v13 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v13,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
        122LL,
        CFSTR("Unexpected missing job identifier"));
      objc_release(v13);
    }
    v8 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    objc_msgSend(v8, "setObject:forKeyedSubscript:", v7, CFSTR("PAMediaConversionServiceJobIdentifierKey"));
    if ( __fpclassifyd(a4) != 1 )
    {
      v9 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", a4));
      objc_msgSend(v8, "setObject:forKeyedSubscript:", v9, CFSTR("PAMediaConversionServiceProgressKey"));
      objc_release(v9);
    }
    v10 = objc_retainAutoreleasedReturnValue(-[ClientRequest connection](self, "connection"));
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_10000C388;
    v14[3] = &unk_100041010;
    v15 = v7;
    v11 = objc_retain(v7);
    v12 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxyWithErrorHandler:](v10, "remoteObjectProxyWithErrorHandler:", v14));
    objc_msgSend(v12, "updateProgress:", v8);
    objc_release(v12);
    objc_release(v10);
    objc_release(v15);
    objc_release(v11);
    objc_release(v8);
  }
}