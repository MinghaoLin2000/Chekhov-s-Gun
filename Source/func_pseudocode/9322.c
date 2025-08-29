-[TSPDirectoryPackageConverter isValid]
bool __cdecl -[TSPDirectoryPackageConverter isValid](TSPDirectoryPackageConverter *self, SEL a2)
{
  NSURL *v2; // x19
  bool v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[TSPPackageConverter URL](self, "URL"));
  if ( +[TSPDirectoryPackage isValidPackageAtURL:](&OBJC_CLASS___TSPDirectoryPackage, "isValidPackageAtURL:", v2) )
    v3 = 1;
  else
    v3 = +[TSPExpandedDirectoryPackage isValidPackageAtURL:](
           &OBJC_CLASS___TSPExpandedDirectoryPackage,
           "isValidPackageAtURL:",
           v2);
  objc_release(v2);
  return v3;
}