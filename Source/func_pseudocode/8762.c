_$s34AppleMediaServicesUIDynamicService15AccountsWrapperC7accountSo9ACAccountCSgvs
void __fastcall AccountsWrapper.account.setter(void *a1)
{
  __int64 v1; // x20
  void *v3; // x21
  void *v4; // x22
  id v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = *(void **)(v1 + 16);
  objc_msgSend(v3, "lock");
  v4 = *(void **)(v1 + 24);
  *(_QWORD *)(v1 + 24) = a1;
  v5 = objc_retain(a1);
  objc_release(v4);
  objc_msgSend(v3, "unlock");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}