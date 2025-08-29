-[IFDBundle getStopPollingFunction:]
// local variable allocation has failed, the output may be wrong!
void *__cdecl -[IFDBundle getStopPollingFunction:](IFDBundle *self, SEL a2, unsigned int a3)
{
  __int64 v3; // x20
  void *v5; // x19
  id v6; // x0
  void *v7; // x20
  void *v8; // x21
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF

  v3 = *(_QWORD *)&a3;
  v10 = 0LL;
  v5 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableData), "initWithLength:", 8LL);
  v6 = objc_retainAutoreleasedReturnValue(-[IFDBundle getAttrib:code:buffer:error:](self, "getAttrib:code:buffer:error:", v3, 4018LL, v5, &v10));
  v7 = v6;
  v8 = 0LL;
  if ( !v10 )
  {
    if ( objc_msgSend(v6, "length") == (void *)8 )
      v8 = *(void **)objc_msgSend(objc_retainAutorelease(v7), "bytes");
    else
      v8 = 0LL;
  }
  objc_release(v7);
  objc_release(v5);
  return v8;
}