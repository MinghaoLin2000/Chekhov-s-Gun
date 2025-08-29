+[TSPDirectoryPackage isValidPackageAtURL:]
bool __cdecl +[TSPDirectoryPackage isValidPackageAtURL:](id a1, SEL a2, id a3)
{
  void *v3; // x19
  unsigned __int8 v4; // w20

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "objectArchiveURLForPackageURL:", a3));
  v4 = (unsigned __int8)objc_msgSend(v3, "checkResourceIsReachableAndReturnError:", 0LL);
  objc_release(v3);
  return v4;
}