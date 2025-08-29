__Z49AnyEnabledFileProviderDomainsInSameAppAsExtensionP11NSExtension
__int64 __fastcall AnyEnabledFileProviderDomainsInSameAppAsExtension(void *a1)
{
  id v1; // x19
  id v2; // x20
  __int64 v3; // x21

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(FileProvidersByIDSync());
  v3 = AnyFileProviderDomainsInSameAppAsExtension(v1, v2, 1);
  objc_release(v2);
  objc_release(v1);
  return v3;
}