-[TSPDocumentProperties writeToDocumentBundleURL:error:]
bool __cdecl -[TSPDocumentProperties writeToDocumentBundleURL:error:](
        TSPDocumentProperties *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x19
  _QWORD v8[4]; // [xsp+0h] [xbp-50h] BYREF
  id v9; // [xsp+20h] [xbp-30h]
  id *v10; // [xsp+28h] [xbp-28h]

  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100035490;
  v8[3] = &unk_1001D3558;
  v9 = objc_retain(a3);
  v10 = a4;
  v6 = objc_retain(v9);
  LOBYTE(a4) = -[TSPDocumentProperties writeToDocumentURL:writerBlock:error:](
                 self,
                 "writeToDocumentURL:writerBlock:error:",
                 v6,
                 v8,
                 a4);
  objc_release(v9);
  objc_release(v6);
  return (char)a4;
}