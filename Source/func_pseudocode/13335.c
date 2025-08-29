-[TSUZipWriter addData:queue:completion:]
void __cdecl -[TSUZipWriter addData:queue:completion:](TSUZipWriter *self, SEL a2, id a3, id a4, id a5)
{
  id v8; // x22
  id v9; // x20
  id v10; // x0
  dispatch_queue_s *writeQueue; // x19
  id v12; // x21
  id v13; // x20
  id v14; // x22
  _QWORD v15[5]; // [xsp+0h] [xbp-60h] BYREF
  id v16; // [xsp+28h] [xbp-38h]
  id v17; // [xsp+30h] [xbp-30h]
  id v18; // [xsp+38h] [xbp-28h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  writeQueue = (dispatch_queue_s *)self->_writeQueue;
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_100152AB4;
  v15[3] = &unk_1001DEC08;
  v15[4] = self;
  v16 = v8;
  v17 = v9;
  v18 = v10;
  v12 = objc_retain(v10);
  v13 = objc_retain(v9);
  v14 = objc_retain(v8);
  dispatch_async(writeQueue, v15);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v12);
  objc_release(v13);
  objc_release(v14);
}