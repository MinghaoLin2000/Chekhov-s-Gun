+[TSPFilePackage isValidTangierEditingFormatAtZipArchive:]
bool __cdecl +[TSPFilePackage isValidTangierEditingFormatAtZipArchive:](id a1, SEL a2, id a3)
{
  id v3; // x0
  bool v4; // w19

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "entryForName:", CFSTR("index.db")));
  v4 = v3 != 0LL;
  objc_release(v3);
  return v4;
}