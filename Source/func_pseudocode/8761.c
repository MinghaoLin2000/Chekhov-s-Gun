_$s34AppleMediaServicesUIDynamicService15AccountsWrapperC7accountSo9ACAccountCSgvg
void *AccountsWrapper.account.getter()
{
  __int64 v0; // x20
  void *v1; // x19
  void *v2; // x20
  id v3; // x0

  v1 = *(void **)(v0 + 16);
  objc_msgSend(v1, "lock");
  v2 = *(void **)(v0 + 24);
  v3 = objc_retain(v2);
  objc_msgSend(v1, "unlock");
  return v2;
}