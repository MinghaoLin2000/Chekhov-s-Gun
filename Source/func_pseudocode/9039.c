+[TSPFileManager linkOrCloneItemAtURL:toURL:canLink:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl +[TSPFileManager linkOrCloneItemAtURL:toURL:canLink:error:](id a1, SEL a2, id a3, id a4, bool a5, id *a6)
{
  _BOOL8 v7; // x20
  id v10; // x24
  id v11; // x21
  NSFileManager *v12; // x23
  _BOOL8 v13; // x25

  v7 = a5;
  v10 = objc_retain(a4);
  v11 = objc_retain(a3);
  v12 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v13 = -[NSFileManager tsu_canCloneItemAtURL:toURL:](v12, "tsu_canCloneItemAtURL:toURL:", v11, v10);
  objc_release(v12);
  LOBYTE(a6) = (unsigned __int8)objc_msgSend(
                                  a1,
                                  "linkOrCloneItemAtURL:toURL:canLink:canClone:error:",
                                  v11,
                                  v10,
                                  v7,
                                  v13,
                                  a6);
  objc_release(v10);
  objc_release(v11);
  return (char)a6;
}