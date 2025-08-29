-[TSPPackageWriter closeAndReturnError:]
bool __cdecl -[TSPPackageWriter closeAndReturnError:](TSPPackageWriter *self, SEL a2, id *a3)
{
  dispatch_semaphore_t v5; // x20
  dispatch_queue_global_s *v6; // x21
  dispatch_semaphore_s *v7; // x20
  void *v8; // x0
  bool v9; // w19
  _QWORD v11[4]; // [xsp+0h] [xbp-90h] BYREF
  id v12; // [xsp+20h] [xbp-70h]
  __int64 *v13; // [xsp+28h] [xbp-68h]
  __int64 v14; // [xsp+30h] [xbp-60h] BYREF
  __int64 *v15; // [xsp+38h] [xbp-58h]
  __int64 v16; // [xsp+40h] [xbp-50h]
  __int64 (__fastcall *v17)(); // [xsp+48h] [xbp-48h]
  __int64 (__fastcall *v18)(); // [xsp+50h] [xbp-40h]
  id v19; // [xsp+58h] [xbp-38h]

  v14 = 0LL;
  v15 = &v14;
  v16 = 0x3032000000LL;
  v17 = sub_1000081DC;
  v18 = sub_1000081EC;
  v19 = 0LL;
  v5 = dispatch_semaphore_create(0LL);
  v6 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10000A044;
  v11[3] = &unk_1001D12D8;
  v13 = &v14;
  v7 = objc_retain(v5);
  v12 = v7;
  -[TSPPackageWriter closeWithQueue:completion:](self, "closeWithQueue:completion:", v6, v11);
  objc_release(v6);
  dispatch_semaphore_wait(v7, 0xFFFFFFFFFFFFFFFFLL);
  v8 = (void *)v15[5];
  if ( a3 && v8 && !*a3 )
  {
    *a3 = objc_retainAutorelease(v8);
    v8 = (void *)v15[5];
  }
  v9 = v8 == 0LL;
  objc_release(v12);
  objc_release(v7);
  _Block_object_dispose(&v14, 8);
  objc_release(v19);
  return v9;
}