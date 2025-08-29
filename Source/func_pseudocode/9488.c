-[TSPDocumentProperties writeToPackageWriter:error:]
bool __cdecl -[TSPDocumentProperties writeToPackageWriter:error:](TSPDocumentProperties *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  void *v7; // x20
  id v8; // x23
  _QWORD v10[4]; // [xsp+0h] [xbp-60h] BYREF
  id v11; // [xsp+20h] [xbp-40h]
  id *v12; // [xsp+28h] [xbp-38h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "URL"));
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_1000353A4;
  v10[3] = &unk_1001D3558;
  v8 = objc_retain(v6);
  v11 = v8;
  v12 = a4;
  LOBYTE(a4) = -[TSPDocumentProperties writeToDocumentURL:writerBlock:error:](
                 self,
                 "writeToDocumentURL:writerBlock:error:",
                 v7,
                 v10,
                 a4);
  objc_release(v11);
  objc_release(v7);
  objc_release(v8);
  return (char)a4;
}