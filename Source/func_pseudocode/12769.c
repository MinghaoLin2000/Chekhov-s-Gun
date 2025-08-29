-[TSUZipArchive containedZipArchiveForEntry:options:error:]
id __cdecl -[TSUZipArchive containedZipArchiveForEntry:options:error:](
        TSUZipArchive *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id *a5)
{
  return +[TSUContainedZipArchive zipArchiveFromEntry:zipArchive:options:error:](
           &OBJC_CLASS___TSUContainedZipArchive,
           "zipArchiveFromEntry:zipArchive:options:error:",
           a3,
           self,
           a4,
           a5);
}