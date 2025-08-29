+[TSUIOUtils readWithHandlerAndWait:handler:]
void __cdecl +[TSUIOUtils readWithHandlerAndWait:handler:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x20
  id v6; // x19
  dispatch_semaphore_s *v7; // x21
  id v8; // x20
  _QWORD v9[4]; // [xsp+0h] [xbp-50h] BYREF
  id v10; // [xsp+20h] [xbp-30h]
  id v11; // [xsp+28h] [xbp-28h]

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10013F740;
  v9[3] = &unk_1001DDD48;
  v11 = v5;
  v7 = objc_retain(dispatch_semaphore_create(0LL));
  v10 = v7;
  v8 = objc_retain(v5);
  objc_msgSend(v6, "readWithHandler:", v9);
  objc_release(v6);
  dispatch_semaphore_wait(v7, 0xFFFFFFFFFFFFFFFFLL);
  objc_release(v10);
  objc_release(v11);
  objc_release(v8);
  objc_release(v7);
}