-[TSUZipWriter truncateToNumberOfEntries:completion:]
void __cdecl -[TSUZipWriter truncateToNumberOfEntries:completion:](
        TSUZipWriter *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  id v6; // x0
  dispatch_queue_s *writeQueue; // x21
  id v8; // x19
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF
  id v10; // [xsp+30h] [xbp-30h]
  unsigned __int64 v11; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a4);
  writeQueue = (dispatch_queue_s *)self->_writeQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100156B10;
  block[3] = &unk_1001DEAA8;
  v10 = v6;
  v11 = a3;
  block[4] = self;
  v8 = objc_retain(v6);
  dispatch_async(writeQueue, block);
  objc_release(v10);
  objc_release(v8);
}