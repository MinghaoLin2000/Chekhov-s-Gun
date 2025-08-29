_NetFSInterface_AddRef
ULONG __cdecl NetFSInterface_AddRef(void *a1)
{
  ULONG v1; // w8

  v1 = *((_DWORD *)a1 + 4) + 1;
  *((_DWORD *)a1 + 4) = v1;
  return v1;
}