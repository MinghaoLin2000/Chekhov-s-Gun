-[TSULogCatThreadSafeMutableSet containsObject:]
bool __cdecl -[TSULogCatThreadSafeMutableSet containsObject:](TSULogCatThreadSafeMutableSet *self, SEL a2, id a3)
{
  id v4; // x0
  dispatch_queue_s *logCatQueue; // x20
  id v6; // x19
  _QWORD block[5]; // [xsp+8h] [xbp-68h] BYREF
  id v9; // [xsp+30h] [xbp-40h]
  __int64 *v10; // [xsp+38h] [xbp-38h]
  __int64 v11; // [xsp+40h] [xbp-30h] BYREF
  __int64 *v12; // [xsp+48h] [xbp-28h]
  __int64 v13; // [xsp+50h] [xbp-20h]
  char v14; // [xsp+58h] [xbp-18h]

  v4 = objc_retain(a3);
  v11 = 0LL;
  v12 = &v11;
  v13 = 0x2020000000LL;
  v14 = 0;
  logCatQueue = (dispatch_queue_s *)self->_logCatQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100138CEC;
  block[3] = &unk_1001DD750;
  v9 = v4;
  v10 = &v11;
  block[4] = self;
  v6 = objc_retain(v4);
  dispatch_sync(logCatQueue, block);
  LOBYTE(logCatQueue) = *((_BYTE *)v12 + 24);
  objc_release(v9);
  objc_release(v6);
  _Block_object_dispose(&v11, 8);
  return (char)logCatQueue;
}