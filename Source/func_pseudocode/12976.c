+[TSUIOUtils readFromOffsetAndWait:offset:length:handler:]
void __cdecl +[TSUIOUtils readFromOffsetAndWait:offset:length:handler:](
        id a1,
        SEL a2,
        id a3,
        signed __int64 a4,
        unsigned __int64 a5,
        id a6)
{
  id v9; // x22
  id v10; // x21
  dispatch_semaphore_s *v11; // x23
  id v12; // x22
  _QWORD v13[4]; // [xsp+0h] [xbp-60h] BYREF
  id v14; // [xsp+20h] [xbp-40h]
  id v15; // [xsp+28h] [xbp-38h]

  v9 = objc_retain(a6);
  v10 = objc_retain(a3);
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_10013F8A0;
  v13[3] = &unk_1001DDD48;
  v15 = v9;
  v11 = objc_retain(dispatch_semaphore_create(0LL));
  v14 = v11;
  v12 = objc_retain(v9);
  objc_msgSend(v10, "readFromOffset:length:handler:", a4, a5, v13);
  objc_release(v10);
  dispatch_semaphore_wait(v11, 0xFFFFFFFFFFFFFFFFLL);
  objc_release(v14);
  objc_release(v15);
  objc_release(v12);
  objc_release(v11);
}