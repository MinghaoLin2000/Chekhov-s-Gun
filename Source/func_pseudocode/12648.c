+[TSUZipFileArchive isZipArchiveAtFD:]
bool __cdecl +[TSUZipFileArchive isZipArchiveAtFD:](id a1, SEL a2, int a3)
{
  off_t v4; // x0
  off_t v5; // x20
  bool v7; // w21
  int v9; // [xsp+Ch] [xbp-24h] BYREF

  v4 = lseek(a3, 0LL, 1);
  v5 = v4;
  if ( (unsigned __int64)(v4 - 1) > 0xFFFFFFFFFFFFFFFDLL )
  {
    if ( v4 == -1 )
      return 0;
  }
  else if ( lseek(a3, 0LL, 0) == -1 )
  {
    goto LABEL_12;
  }
  if ( read(a3, &v9, 4uLL) == 4 )
  {
    v7 = v9 == 67324752 || v9 == 101010256;
    return lseek(a3, v5, 0) != -1 && v7;
  }
LABEL_12:
  v7 = 0;
  return lseek(a3, v5, 0) != -1 && v7;
}