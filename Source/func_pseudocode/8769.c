_$s34AppleMediaServicesUIDynamicService20DynamicAccountsStoreCfd
__int64 DynamicAccountsStore.deinit()
{
  __int64 v0; // x20

  objc_release(*(id *)(v0 + 16));
  objc_release(*(id *)(v0 + 24));
  swift_release(*(_QWORD *)(v0 + 32));
  return v0;
}