+[TSPExpandedDirectoryPackage isValidPackageAtURL:]
bool __cdecl +[TSPExpandedDirectoryPackage isValidPackageAtURL:](id a1, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x21
  unsigned __int8 v7; // w22

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("Index"), "stringByAppendingPathComponent:", CFSTR("Metadata")));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "componentFileURLForPackageURL:packageLocator:", v4, v5));
  v7 = (unsigned __int8)objc_msgSend(v6, "checkResourceIsReachableAndReturnError:", 0LL);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v7;
}