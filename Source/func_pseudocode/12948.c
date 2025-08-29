-[TSUBufferedReadChannel close]
void __cdecl -[TSUBufferedReadChannel close](TSUBufferedReadChannel *self, SEL a2)
{
  void *v3; // x20
  __int64 v4; // x20
  NSThread *v5; // x21
  NSMutableDictionary *v6; // x22
  void *v7; // x23
  id v8; // x20
  unsigned int v9; // w24
  dispatch_queue_s *readQueue; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = off_1001F7208;
  if ( dispatch_get_specific(off_1001F7208) == v3 )
    goto LABEL_3;
  v4 = objc_opt_class(&OBJC_CLASS___NSNumber);
  v5 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSThread threadDictionary](v5, "threadDictionary"));
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           v6,
           "objectForKeyedSubscript:",
           CFSTR("TSUBufferedReadChannelInvokingHandler")));
  v8 = objc_retainAutoreleasedReturnValue((id)TSUDynamicCast(v4, v7));
  v9 = (unsigned int)objc_msgSend(v8, "boolValue");
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( v9 )
  {
LABEL_3:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[TSUBufferedReadChannel _close](self, "_close");
  }
  else
  {
    readQueue = (dispatch_queue_s *)self->_readQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10013CB5C;
    block[3] = &unk_1001D1A40;
    block[4] = self;
    dispatch_sync(readQueue, block);
  }
}