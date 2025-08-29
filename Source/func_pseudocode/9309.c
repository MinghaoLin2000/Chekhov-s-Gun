-[TSPPackageConverter isDocumentPropertiesPath:]
bool __cdecl -[TSPPackageConverter isDocumentPropertiesPath:](TSPPackageConverter *self, SEL a2, id a3)
{
  id v3; // x19
  id v4; // x20
  unsigned __int8 v5; // w21
  id v6; // x22

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(
         +[TSPDocumentProperties documentPropertiesRelativePath](
           &OBJC_CLASS___TSPDocumentProperties,
           "documentPropertiesRelativePath"));
  if ( ((unsigned int)objc_msgSend(v3, "isEqualToString:", v4) & 1) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = objc_retainAutoreleasedReturnValue(
           +[TSPDocumentProperties shareIdentifierRelativePath](
             &OBJC_CLASS___TSPDocumentProperties,
             "shareIdentifierRelativePath"));
    v5 = (unsigned __int8)objc_msgSend(v3, "isEqualToString:", v6);
    objc_release(v6);
  }
  objc_release(v4);
  objc_release(v3);
  return v5;
}