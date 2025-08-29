-[TSUZipWriter p_writeData:offset:completion:]
void __cdecl -[TSUZipWriter p_writeData:offset:completion:](
        TSUZipWriter *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5)
{
  id v8; // x22
  id v9; // x0
  dispatch_queue_s *channelQueue; // x19
  id v11; // x20
  id v12; // x21
  _QWORD v13[5]; // [xsp+0h] [xbp-60h] BYREF
  id v14; // [xsp+28h] [xbp-38h]
  id v15; // [xsp+30h] [xbp-30h]
  signed __int64 v16; // [xsp+38h] [xbp-28h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  channelQueue = (dispatch_queue_s *)self->_channelQueue;
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_100155BA8;
  v13[3] = &unk_1001DEE98;
  v13[4] = self;
  v14 = v8;
  v15 = v9;
  v16 = a4;
  v11 = objc_retain(v9);
  v12 = objc_retain(v8);
  dispatch_async(channelQueue, v13);
  objc_release(v15);
  objc_release(v14);
  objc_release(v11);
  objc_release(v12);
}