-[TSPPackageWriter dataForZipEntry:inDataToWrite:]
id __cdecl -[TSPPackageWriter dataForZipEntry:inDataToWrite:](TSPPackageWriter *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x22
  void *v8; // x21
  void *v9; // x22
  unsigned int v10; // w23
  id v11; // x0
  void *v12; // x24
  id v13; // x23

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", v7));
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "storage"));
  if ( (objc_opt_respondsToSelector() & 1) != 0 )
    v10 = (unsigned int)objc_msgSend(v9, "CRC");
  else
    v10 = 0;
  v11 = objc_msgSend(v8, "lengthIfLocal");
  if ( v11 )
  {
    v12 = objc_msgSend(v8, "encodedLength");
    if ( v12 == objc_msgSend(v5, "size") && v10 == (unsigned int)objc_msgSend(v5, "CRC") )
      v11 = objc_retain(v8);
    else
      v11 = 0LL;
  }
  v13 = objc_retainAutoreleaseReturnValue(v11);
  objc_release(v9);
  objc_release(v8);
  objc_release(v13);
  objc_release(v6);
  objc_release(v5);
  return v13;
}