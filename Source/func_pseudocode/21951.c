+[PAUbiquityController passbookUbiquityContainerExists]
bool __cdecl +[PAUbiquityController passbookUbiquityContainerExists](id a1, SEL a2)
{
  void *v3; // x19
  NSFileManager *v4; // x22
  void *v5; // x23
  unsigned __int8 v6; // w21
  id v7; // x0

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_ubiquitousCardsURL"));
  v4 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "path"));
  v6 = -[NSFileManager fileExistsAtPath:](v4, "fileExistsAtPath:", v5);
  objc_release(v5);
  objc_release(v4);
  if ( (v6 & 1) == 0 )
    v7 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(a1, "observeUbiquitousContainer"));
  objc_release(v3);
  return v6;
}