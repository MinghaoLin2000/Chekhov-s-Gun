-[TSPFilePackageConverter isValid]
bool __cdecl -[TSPFilePackageConverter isValid](TSPFilePackageConverter *self, SEL a2)
{
  TSPPackage *v2; // x19
  TSUZipFileArchive *v3; // x20
  bool v4; // w21

  v2 = objc_retainAutoreleasedReturnValue(-[TSPPackageConverter package](self, "package"));
  v3 = objc_retainAutoreleasedReturnValue(-[TSPPackage zipArchive](v2, "zipArchive"));
  v4 = +[TSPFilePackage isValidPackageAtZipArchive:](&OBJC_CLASS___TSPFilePackage, "isValidPackageAtZipArchive:", v3);
  objc_release(v3);
  objc_release(v2);
  return v4;
}