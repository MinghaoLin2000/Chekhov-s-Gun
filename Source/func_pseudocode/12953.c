-[TSUBufferedReadChannel readFromOffset:length:handler:]
void __cdecl -[TSUBufferedReadChannel readFromOffset:length:handler:](
        TSUBufferedReadChannel *self,
        SEL a2,
        signed __int64 a3,
        unsigned __int64 a4,
        id a5)
{
  id v8; // x0
  dispatch_queue_s *readQueue; // x22
  id v10; // x19
  _QWORD v11[5]; // [xsp+0h] [xbp-60h] BYREF
  id v12; // [xsp+28h] [xbp-38h]
  signed __int64 v13; // [xsp+30h] [xbp-30h]
  unsigned __int64 v14; // [xsp+38h] [xbp-28h]

  v8 = objc_retain(a5);
  readQueue = (dispatch_queue_s *)self->_readQueue;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10013D460;
  v11[3] = &unk_1001D19B0;
  v13 = a3;
  v14 = a4;
  v11[4] = self;
  v12 = v8;
  v10 = objc_retain(v8);
  dispatch_async(readQueue, v11);
  objc_release(v12);
  objc_release(v10);
}