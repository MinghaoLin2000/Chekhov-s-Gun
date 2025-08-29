-[TSPPackageConverter isObjectArchivePath:]
bool __cdecl -[TSPPackageConverter isObjectArchivePath:](TSPPackageConverter *self, SEL a2, id a3)
{
  id v3; // x19
  unsigned __int8 v4; // w20

  v3 = objc_retain(a3);
  if ( qword_1001F7478 != -1 )
    dispatch_once(&qword_1001F7478, &stru_1001D24F0);
  v4 = (unsigned __int8)objc_msgSend(v3, "hasPrefix:", qword_1001F7470);
  objc_release(v3);
  return v4;
}