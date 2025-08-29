+[TSUZipFileWriter zipDirectoryAtURL:toURL:queue:completion:]
void __cdecl +[TSUZipFileWriter zipDirectoryAtURL:toURL:queue:completion:](id a1, SEL a2, id a3, id a4, id a5, id a6)
{
  id v10; // x23
  _QWORD v11[4]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+28h] [xbp-38h]

  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10012CCFC;
  v11[3] = &unk_1001DCD48;
  v12 = objc_retain(a6);
  v10 = objc_retain(v12);
  objc_msgSend(a1, "zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:", a3, 0LL, a4, a5, v11);
  objc_release(v12);
  objc_release(v10);
}