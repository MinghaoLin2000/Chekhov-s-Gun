-[TSPFilePackage newRawDataReadChannelAtRelativePath:]
id __cdecl -[TSPFilePackage newRawDataReadChannelAtRelativePath:](TSPFilePackage *self, SEL a2, id a3)
{
  id v4; // x19
  TSUZipFileArchive *v5; // x20
  id v6; // x21
  id v7; // x22

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[TSPPackage zipArchive](self, "zipArchive"));
  v6 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive entryForName:](v5, "entryForName:", v4));
  if ( v6 )
    v7 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive streamReadChannelForEntry:](v5, "streamReadChannelForEntry:", v6));
  else
    v7 = 0LL;
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v7;
}