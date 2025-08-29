-[TSPFilePackage hasDataAtRelativePath:]
bool __cdecl -[TSPFilePackage hasDataAtRelativePath:](TSPFilePackage *self, SEL a2, id a3)
{
  id v4; // x19
  TSUZipFileArchive *v5; // x20
  id v6; // x0
  bool v7; // w21

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[TSPPackage zipArchive](self, "zipArchive"));
  v6 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive entryForName:](v5, "entryForName:", v4));
  v7 = v6 != 0LL;
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v7;
}