-[TSPPackageWriter flushPendingWritesReturningError:]
bool __cdecl -[TSPPackageWriter flushPendingWritesReturningError:](TSPPackageWriter *self, SEL a2, id *a3)
{
  dispatch_semaphore_t v5; // x20
  id v6; // x21
  dispatch_queue_global_s *v7; // x23
  dispatch_semaphore_s *v8; // x22
  __int64 *v9; // x8
  void *v10; // x0
  bool v11; // w19
  _QWORD v13[4]; // [xsp+0h] [xbp-90h] BYREF
  id v14; // [xsp+20h] [xbp-70h]
  __int64 *v15; // [xsp+28h] [xbp-68h]
  __int64 v16; // [xsp+30h] [xbp-60h] BYREF
  __int64 *v17; // [xsp+38h] [xbp-58h]
  __int64 v18; // [xsp+40h] [xbp-50h]
  __int64 (__fastcall *v19)(); // [xsp+48h] [xbp-48h]
  __int64 (__fastcall *v20)(); // [xsp+50h] [xbp-40h]
  id v21; // [xsp+58h] [xbp-38h]

  -[TSPPackageWriter closeCurrentChannel](self, "closeCurrentChannel");
  v16 = 0LL;
  v17 = &v16;
  v18 = 0x3032000000LL;
  v19 = sub_1000081DC;
  v20 = sub_1000081EC;
  v21 = 0LL;
  v5 = dispatch_semaphore_create(0LL);
  v6 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter componentZipArchiveWriter](self, "componentZipArchiveWriter"));
  v7 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  v13[0] = _NSConcreteStackBlock;
  v13[1] = 3254779904LL;
  v13[2] = sub_1000081F4;
  v13[3] = &unk_1001D12D8;
  v15 = &v16;
  v8 = objc_retain(v5);
  v14 = v8;
  objc_msgSend(v6, "flushCurrentEntryWithQueue:completion:", v7, v13);
  objc_release(v7);
  objc_release(v6);
  dispatch_semaphore_wait(v8, 0xFFFFFFFFFFFFFFFFLL);
  v9 = v17;
  if ( a3 )
  {
    v10 = (void *)v17[5];
    if ( v10 )
    {
      *a3 = objc_retainAutorelease(v10);
      v9 = v17;
    }
  }
  v11 = v9[5] == 0;
  objc_release(v14);
  objc_release(v8);
  _Block_object_dispose(&v16, 8);
  objc_release(v21);
  return v11;
}