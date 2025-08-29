-[DocumentCompressor compressChunk:]
id __cdecl -[DocumentCompressor compressChunk:](DocumentCompressor *self, SEL a2, id a3)
{
  id v4; // x19
  NSMutableData *v5; // x20
  _QWORD v7[4]; // [xsp+8h] [xbp-48h] BYREF
  id v8; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100005B10;
  v7[3] = &unk_100090F38;
  v5 = objc_retain(objc_opt_new(&OBJC_CLASS___NSMutableData));
  v8 = v5;
  if ( !-[DocumentCompressor compressChunk:completionHandler:](self, "compressChunk:completionHandler:", v4, v7) )
  {
    objc_release(v5);
    v5 = 0LL;
  }
  objc_release(v8);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}