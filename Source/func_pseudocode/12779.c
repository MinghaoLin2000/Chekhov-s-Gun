-[TSUZipArchive validateCRCAndReturnError:]
bool __cdecl -[TSUZipArchive validateCRCAndReturnError:](TSUZipArchive *self, SEL a2, id *a3)
{
  dispatch_semaphore_s *v5; // x20
  dispatch_queue_global_s *v6; // x21
  void *v7; // x22
  _QWORD v9[6]; // [xsp+0h] [xbp-90h] BYREF
  __int64 v10; // [xsp+30h] [xbp-60h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-58h]
  __int64 v12; // [xsp+40h] [xbp-50h]
  __int64 (__fastcall *v13)(); // [xsp+48h] [xbp-48h]
  __int64 (__fastcall *v14)(); // [xsp+50h] [xbp-40h]
  id v15; // [xsp+58h] [xbp-38h]

  v10 = 0LL;
  v11 = &v10;
  v12 = 0x3032000000LL;
  v13 = sub_1001331F4;
  v14 = sub_100133204;
  v15 = 0LL;
  v5 = dispatch_semaphore_create(0LL);
  v6 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10013454C;
  v9[3] = &unk_1001DCBF8;
  v9[4] = v5;
  v9[5] = &v10;
  -[TSUZipArchive validateCRCWithQueue:completion:](self, "validateCRCWithQueue:completion:", v6, v9);
  dispatch_semaphore_wait(v5, 0xFFFFFFFFFFFFFFFFLL);
  v7 = (void *)v11[5];
  if ( a3 && v7 )
    *a3 = objc_retainAutorelease(v7);
  objc_release(v6);
  objc_release(v5);
  _Block_object_dispose(&v10, 8);
  objc_release(v15);
  return v7 == 0LL;
}