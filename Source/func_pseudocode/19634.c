+[DocumentCompressor compress:forScheme:]
id __cdecl +[DocumentCompressor compress:forScheme:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  NSMutableData *v7; // x22
  id v8; // x21
  NSMutableData *v9; // x23
  NSMutableData *v10; // x24
  NSMutableData *v11; // x22
  _QWORD v13[4]; // [xsp+0h] [xbp-90h] BYREF
  id v14; // [xsp+20h] [xbp-70h]
  _QWORD v15[4]; // [xsp+28h] [xbp-68h] BYREF
  id v16; // [xsp+48h] [xbp-48h]
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_opt_new(&OBJC_CLASS___NSMutableData);
  v8 = objc_retainAutoreleasedReturnValue(
         +[DocumentCompressor documentCompresorForName:](
           &OBJC_CLASS___DocumentCompressor,
           "documentCompresorForName:",
           v6));
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_1000061D8;
  v15[3] = &unk_100090F38;
  v9 = objc_retain(v7);
  v16 = v9;
  if ( (unsigned int)objc_msgSend(v8, "compressChunk:completionHandler:", v5, v15) )
  {
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 3254779904LL;
    v13[2] = sub_100006200;
    v13[3] = &unk_100090F38;
    v10 = objc_retain(v9);
    v14 = v10;
    if ( ((unsigned int)objc_msgSend(v8, "finalChunkCompletionHandler:", v13) & 1) != 0 )
      v11 = objc_retain(v10);
    else
      v11 = 0LL;
    objc_release(v14);
  }
  else
  {
    v11 = 0LL;
  }
  objc_release(v16);
  objc_release(v8);
  objc_release(v9);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}