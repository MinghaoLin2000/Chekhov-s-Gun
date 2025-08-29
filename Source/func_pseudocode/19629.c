-[DocumentCompressor finalChunk]
id __cdecl -[DocumentCompressor finalChunk](DocumentCompressor *self, SEL a2)
{
  NSMutableData *v3; // x19
  _QWORD v5[4]; // [xsp+8h] [xbp-38h] BYREF
  id v6; // [xsp+28h] [xbp-18h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100005E80;
  v5[3] = &unk_100090F38;
  v3 = objc_retain(objc_opt_new(&OBJC_CLASS___NSMutableData));
  v6 = v3;
  if ( !-[DocumentCompressor finalChunkCompletionHandler:](self, "finalChunkCompletionHandler:", v5) )
  {
    objc_release(v3);
    v3 = 0LL;
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}