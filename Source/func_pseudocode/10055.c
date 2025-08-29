-[NSData tsp_writeToURL:encryptionKey:]
bool __cdecl -[NSData tsp_writeToURL:encryptionKey:](NSData *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  id v8; // x21
  dispatch_semaphore_t v9; // x22
  TSPComponentWriteChannelAdapter *v10; // x24
  dispatch_semaphore_s *v11; // x25
  TSPComponentWriteChannelAdapter *v12; // x24
  TSPCryptoComponentWriteChannel *v13; // x0
  TSPCryptoComponentWriteChannel *v14; // x26
  id v15; // x23
  bool v16; // w22
  void **v18; // [xsp+0h] [xbp-90h] BYREF
  __int64 v19; // [xsp+8h] [xbp-88h]
  __int64 (__fastcall *v20)(int, int, int, id); // [xsp+10h] [xbp-80h]
  void *v21; // [xsp+18h] [xbp-78h]
  id v22; // [xsp+20h] [xbp-70h]
  __int64 *v23; // [xsp+28h] [xbp-68h]
  __int64 v24; // [xsp+30h] [xbp-60h] BYREF
  __int64 *v25; // [xsp+38h] [xbp-58h]
  __int64 v26; // [xsp+40h] [xbp-50h]
  bool v27; // [xsp+48h] [xbp-48h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = -[TSUFileIOChannel initForStreamWritingURL:error:](
         objc_alloc(&OBJC_CLASS___TSUFileIOChannel),
         "initForStreamWritingURL:error:",
         v6,
         0LL);
  v24 = 0LL;
  v25 = &v24;
  v26 = 0x2020000000LL;
  v27 = v8 != 0LL;
  if ( v8 )
  {
    v9 = dispatch_semaphore_create(0LL);
    v10 = objc_alloc(&OBJC_CLASS___TSPComponentWriteChannelAdapter);
    v18 = _NSConcreteStackBlock;
    v19 = 3254779904LL;
    v20 = sub_1000582D4;
    v21 = &unk_1001D5438;
    v23 = &v24;
    v11 = objc_retain(v9);
    v22 = v11;
    v12 = -[TSPComponentWriteChannelAdapter initWithChannel:handler:](v10, "initWithChannel:handler:", v8, &v18);
    *((_BYTE *)v25 + 24) = v12 != 0LL;
    if ( v12 )
    {
      v13 = objc_alloc(&OBJC_CLASS___TSPCryptoComponentWriteChannel);
      v14 = -[TSPCryptoComponentWriteChannel initWithWriteChannel:encryptionInfo:](
              v13,
              "initWithWriteChannel:encryptionInfo:",
              v12,
              v7,
              v18,
              v19,
              v20,
              v21);
      *((_BYTE *)v25 + 24) = v14 != 0LL;
      if ( v14 )
      {
        v15 = objc_retainAutoreleasedReturnValue(-[NSData tsp_dispatchData](self, "tsp_dispatchData"));
        -[TSPCryptoComponentWriteChannel writeData:](v14, "writeData:", v15);
        objc_release(v15);
        dispatch_semaphore_wait(v11, 0xFFFFFFFFFFFFFFFFLL);
        -[TSPCryptoComponentWriteChannel close](v14, "close");
      }
      objc_release(v14);
    }
    -[TSPComponentWriteChannelAdapter close](v12, "close", v18, v19, v20, v21);
    objc_release(v12);
    objc_release(v22);
    objc_release(v11);
    v16 = *((_BYTE *)v25 + 24) != 0;
  }
  else
  {
    v16 = 0;
  }
  _Block_object_dispose(&v24, 8);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  return v16;
}