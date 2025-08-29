_NetFSInterface_Release
ULONG __cdecl NetFSInterface_Release(void *a1)
{
  int v1; // w8
  ULONG v2; // w19
  const __CFUUID *v3; // x20

  v1 = *((_DWORD *)a1 + 4);
  v2 = v1 - 1;
  *((_DWORD *)a1 + 4) = v1 - 1;
  if ( v1 == 1 )
  {
    v3 = (const __CFUUID *)*((_QWORD *)a1 + 1);
    free(a1);
    if ( v3 )
    {
      CFPlugInRemoveInstanceForFactory(v3);
      CFRelease(v3);
    }
  }
  return v2;
}