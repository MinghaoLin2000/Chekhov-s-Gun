_tsu_reachable_statfs
__int64 __fastcall tsu_reachable_statfs(void *a1, statfs *a2)
{
  void *v3; // x19
  const char *v4; // x0
  __int64 v5; // x20

  v3 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsu_reachableFileURLByDeletingUnreachablePathComponents")));
  v4 = (const char *)objc_msgSend(v3, "fileSystemRepresentation");
  if ( v4 )
    v5 = statfs(v4, a2);
  else
    v5 = 0xFFFFFFFFLL;
  objc_release(v3);
  return v5;
}