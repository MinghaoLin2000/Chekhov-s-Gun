-[TSPDocumentProperties writeToPropertiesURL:error:]
bool __cdecl -[TSPDocumentProperties writeToPropertiesURL:error:](TSPDocumentProperties *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  id v7; // x0
  void *v8; // x20
  unsigned __int8 v9; // w21

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(-[TSPDocumentProperties encodedPropertyListWithError:](self, "encodedPropertyListWithError:", a4));
  v8 = v7;
  if ( v7 )
    v9 = (unsigned __int8)objc_msgSend(v7, "writeToURL:options:error:", v6, 0LL, a4);
  else
    v9 = 0;
  objc_release(v8);
  objc_release(v6);
  return v9;
}