-[TSPPackageConverter enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:]
bool __cdecl -[TSPPackageConverter enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:](
        TSPPackageConverter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  void *v10; // x21
  id v11; // x22
  id v12; // x23
  _QWORD v14[5]; // [xsp+0h] [xbp-D0h] BYREF
  id v15; // [xsp+28h] [xbp-A8h]
  id v16; // [xsp+30h] [xbp-A0h]
  __int64 *v17; // [xsp+38h] [xbp-98h]
  bool v18; // [xsp+40h] [xbp-90h]
  _QWORD v19[5]; // [xsp+48h] [xbp-88h] BYREF
  __int64 v20; // [xsp+70h] [xbp-60h] BYREF
  __int64 *v21; // [xsp+78h] [xbp-58h]
  __int64 v22; // [xsp+80h] [xbp-50h]
  char v23; // [xsp+88h] [xbp-48h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  v20 = 0LL;
  v21 = &v20;
  v22 = 0x2020000000LL;
  v23 = 1;
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_10002004C;
  v19[3] = &unk_1001D2560;
  v19[4] = self;
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "sortedEntriesUsingComparator:", v19));
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_100020284;
  v14[3] = &unk_1001D2590;
  v14[4] = self;
  v17 = &v20;
  v18 = a4;
  v11 = objc_retain(v9);
  v16 = v11;
  v12 = objc_retain(v8);
  v15 = v12;
  objc_msgSend(v10, "enumerateObjectsUsingBlock:", v14);
  LOBYTE(v8) = *((_BYTE *)v21 + 24);
  objc_release(v15);
  objc_release(v16);
  objc_release(v10);
  _Block_object_dispose(&v20, 8);
  objc_release(v11);
  objc_release(v12);
  return (char)v8;
}