-[TSPCGDataConsumer putBytes:count:]
unsigned __int64 __cdecl -[TSPCGDataConsumer putBytes:count:](
        TSPCGDataConsumer *self,
        SEL a2,
        const void *a3,
        unsigned __int64 a4)
{
  dispatch_queue_s *writeQueue; // x8
  unsigned __int64 v5; // x19
  _QWORD block[9]; // [xsp+8h] [xbp-98h] BYREF
  __int64 v8; // [xsp+50h] [xbp-50h] BYREF
  __int64 *v9; // [xsp+58h] [xbp-48h]
  __int64 v10; // [xsp+60h] [xbp-40h]
  __int64 v11; // [xsp+68h] [xbp-38h]
  __int64 v12; // [xsp+70h] [xbp-30h] BYREF
  __int64 *v13; // [xsp+78h] [xbp-28h]
  __int64 v14; // [xsp+80h] [xbp-20h]
  char v15; // [xsp+88h] [xbp-18h]

  v12 = 0LL;
  v13 = &v12;
  v14 = 0x2020000000LL;
  v15 = 0;
  v8 = 0LL;
  v9 = &v8;
  v10 = 0x2020000000LL;
  v11 = 0LL;
  writeQueue = (dispatch_queue_s *)self->_writeQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10002BB64;
  block[3] = &unk_1001D2E50;
  block[4] = self;
  block[5] = &v12;
  block[7] = a3;
  block[8] = a4;
  block[6] = &v8;
  dispatch_sync(writeQueue, block);
  if ( *((_BYTE *)v13 + 24) )
    v5 = v9[3];
  else
    v5 = 0LL;
  _Block_object_dispose(&v8, 8);
  _Block_object_dispose(&v12, 8);
  return v5;
}